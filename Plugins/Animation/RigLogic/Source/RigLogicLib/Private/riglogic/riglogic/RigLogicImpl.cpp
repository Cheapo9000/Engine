// Copyright Epic Games, Inc. All Rights Reserved.

#include "riglogic/riglogic/RigLogicImpl.h"

#include "riglogic/TypeDefs.h"
#include "riglogic/animatedmaps/AnimatedMapsFactory.h"
#include "riglogic/blendshapes/BlendShapesFactory.h"
#include "riglogic/controls/ControlsFactory.h"
#include "riglogic/joints/JointsFactory.h"
#include "riglogic/ml/MachineLearnedBehaviorFactory.h"
#include "riglogic/rbf/RBFBehaviorFactory.h"
#include "riglogic/rbf/RBFBehaviorOutputInstance.h"
#include "riglogic/riglogic/ConfigurationSerializer.h"
#include "riglogic/riglogic/RigInstanceImpl.h"
#include "riglogic/riglogic/RigMetrics.h"
#include "riglogic/utils/Extd.h"

#ifdef _MSC_VER
    #pragma warning(push)
    #pragma warning(disable : 4365 4987)
#endif
#include <cstddef>
#include <memory>
#include <numeric>
#include <utility>
#ifdef _MSC_VER
    #pragma warning(pop)
#endif

namespace rl4 {

static RigInstanceImpl* castInstance(RigInstance* instance) {
    // NOLINTNEXTLINE(cppcoreguidelines-pro-type-static-cast-downcast)
    return static_cast<RigInstanceImpl*>(instance);
}

static RigMetrics::Pointer computeRigMetrics(const dna::Reader* reader, const Configuration& config, MemoryResource* memRes) {
    RigMetrics::Pointer metrics = UniqueInstance<RigMetrics>::with(memRes).create(memRes);
    metrics->lodCount = reader->getLODCount();
    metrics->guiControlCount = reader->getGUIControlCount();
    metrics->rawControlCount = reader->getRawControlCount();
    metrics->psdControlCount = reader->getPSDCount();
    const auto numAttrsPerJoint = (static_cast<std::uint8_t>(config.translationType) +
                                   static_cast<std::uint8_t>(config.rotationType) +
                                   static_cast<std::uint8_t>(config.scaleType));
    metrics->jointAttributeCount = static_cast<std::uint16_t>(reader->getJointCount() * numAttrsPerJoint);
    metrics->blendShapeCount = reader->getBlendShapeChannelCount();
    metrics->animatedMapCount = reader->getAnimatedMapCount();
    metrics->mlControlCount = reader->getMLControlCount();
    metrics->neuralNetworkCount = reader->getNeuralNetworkCount();
    metrics->rbfSolverCount = reader->getRBFSolverCount();
    metrics->rbfControlCount = reader->getRBFPoseControlCount();
    return metrics;
}

RigLogic::~RigLogic() = default;

RigLogic* RigLogic::create(const dna::Reader* reader, const Configuration& config, MemoryResource* memRes) {
    auto metrics = computeRigMetrics(reader, config, memRes);

    auto controls = ControlsFactory::create(config, reader, memRes);
    auto machineLearnedBlendShapes = MachineLearnedBehaviorFactory::create(config, reader, memRes);
    auto rbfBehavior = RBFBehaviorFactory::create(config, reader, memRes);
    auto joints = JointsFactory::create(config, reader, memRes);
    auto blendShapes = BlendShapesFactory::create(config, reader, memRes);
    auto animatedMaps = AnimatedMapsFactory::create(config, reader, memRes);

    PolyAllocator<RigLogicImpl> alloc{memRes};
    return alloc.newObject(config,
                           std::move(metrics),
                           std::move(controls),
                           std::move(machineLearnedBlendShapes),
                           std::move(rbfBehavior),
                           std::move(joints),
                           std::move(blendShapes),
                           std::move(animatedMaps),
                           memRes);
}

void RigLogic::destroy(RigLogic* instance) {
    // NOLINTNEXTLINE(cppcoreguidelines-pro-type-static-cast-downcast)
    auto ptr = static_cast<RigLogicImpl*>(instance);
    PolyAllocator<RigLogicImpl> alloc{ptr->getMemoryResource()};
    alloc.deleteObject(ptr);
}

RigLogic* RigLogic::restore(BoundedIOStream* source, MemoryResource* memRes) {
    PolyAllocator<RigLogicImpl> alloc{memRes};

    terse::BinaryInputArchive<BoundedIOStream> archive{source};

    Configuration config;
    archive >> config;

    RigMetrics::Pointer metrics = UniqueInstance<RigMetrics>::with(memRes).create(memRes);
    archive >> *metrics;

    auto controls = ControlsFactory::create(config, *metrics, memRes);
    auto machineLearnedBehavior = MachineLearnedBehaviorFactory::create(config, *metrics, memRes);
    auto rbfBehavior = RBFBehaviorFactory::create(config, *metrics, memRes);
    auto joints = JointsFactory::create(config, *metrics, memRes);
    auto blendShapes = BlendShapesFactory::create(config, *metrics, memRes);
    auto animatedMaps = AnimatedMapsFactory::create(config, *metrics, memRes);

    terse::VirtualSerializerProxy<AnimatedMaps> animatedMapsProxy{animatedMaps.get()};
    terse::VirtualSerializerProxy<BlendShapes> blendShapesProxy{blendShapes.get()};

    archive >> *controls >> *machineLearnedBehavior >> *rbfBehavior >> *joints >> blendShapesProxy >> animatedMapsProxy;
    return alloc.newObject(config,
                           std::move(metrics),
                           std::move(controls),
                           std::move(machineLearnedBehavior),
                           std::move(rbfBehavior),
                           std::move(joints),
                           std::move(blendShapes),
                           std::move(animatedMaps),
                           memRes);
}

RigLogicImpl::RigLogicImpl(const Configuration& config_,
                           RigMetrics::Pointer metrics_,
                           Controls::Pointer controls_,
                           MachineLearnedBehavior::Pointer machineLearnedBehavior_,
                           RBFBehavior::Pointer rbfBehavior_,
                           Joints::Pointer joints_,
                           BlendShapes::Pointer blendShapes_,
                           AnimatedMaps::Pointer animatedMaps_,
                           MemoryResource* memRes_) :
    memRes{memRes_},
    config{config_},
    metrics{std::move(metrics_)},
    controls{std::move(controls_)},
    machineLearnedBehavior{std::move(machineLearnedBehavior_)},
    rbfBehavior{std::move(rbfBehavior_)},
    joints{std::move(joints_)},
    blendShapes{std::move(blendShapes_)},
    animatedMaps{std::move(animatedMaps_)} {
}

void RigLogicImpl::dump(BoundedIOStream* destination) const {
    terse::BinaryOutputArchive<BoundedIOStream> archive{destination};
    terse::VirtualSerializerProxy<AnimatedMaps> animatedMapsProxy{animatedMaps.get()};
    terse::VirtualSerializerProxy<BlendShapes> blendShapesProxy{blendShapes.get()};
    // *INDENT-OFF*
    archive << config
            << *metrics
            << *controls
            << *machineLearnedBehavior
            << *rbfBehavior
            << *joints
            << blendShapesProxy
            << animatedMapsProxy;
    // *INDENT-ON*
}

const Configuration& RigLogicImpl::getConfiguration() const {
    return config;
}

const RigMetrics& RigLogicImpl::getRigMetrics() const {
    return *metrics;
}

std::uint16_t RigLogicImpl::getLODCount() const {
    return metrics->lodCount;
}

ConstArrayView<float> RigLogicImpl::getNeutralJointValues() const {
    return joints->getNeutralValues();
}

ConstArrayView<std::uint16_t> RigLogicImpl::getJointVariableAttributeIndices(std::uint16_t lod) const {
    return joints->getVariableAttributeIndices(lod);
}

std::uint16_t RigLogicImpl::getJointGroupCount() const {
    return joints->getJointGroupCount();
}

std::uint16_t RigLogicImpl::getNeuralNetworkCount() const {
    return metrics->neuralNetworkCount;
}

std::uint16_t RigLogicImpl::getRBFSolverCount() const {
    return metrics->rbfSolverCount;
}

std::uint16_t RigLogicImpl::getMeshCount() const {
    return machineLearnedBehavior->getMeshCount();
}

std::uint16_t RigLogicImpl::getMeshRegionCount(std::uint16_t meshIndex) const {
    return machineLearnedBehavior->getMeshRegionCount(meshIndex);
}

ConstArrayView<std::uint16_t> RigLogicImpl::getNeuralNetworkIndices(std::uint16_t meshIndex, std::uint16_t regionIndex) const {
    return machineLearnedBehavior->getNeuralNetworkIndices(meshIndex, regionIndex);
}

ControlsInputInstance::Pointer RigLogicImpl::createControlsInstance(MemoryResource* instanceMemRes) const {
    return controls->createInstance(instanceMemRes);
}

MachineLearnedBehaviorOutputInstance::Pointer RigLogicImpl::createMachineLearnedBehaviorInstance(MemoryResource* instanceMemRes)
const {
    return machineLearnedBehavior->createInstance(instanceMemRes);
}

RBFBehaviorOutputInstance::Pointer RigLogicImpl::createRBFBehaviorInstance(MemoryResource* instanceMemRes)
const {
    return rbfBehavior->createInstance(instanceMemRes);
}

JointsOutputInstance::Pointer RigLogicImpl::createJointsInstance(MemoryResource* instanceMemRes) const {
    return joints->createInstance(instanceMemRes);
}

BlendShapesOutputInstance::Pointer RigLogicImpl::createBlendShapesInstance(MemoryResource* instanceMemRes) const {
    return blendShapes->createInstance(instanceMemRes);
}

AnimatedMapsOutputInstance::Pointer RigLogicImpl::createAnimatedMapsInstance(MemoryResource* instanceMemRes) const {
    return animatedMaps->createInstance(instanceMemRes);
}

void RigLogicImpl::mapGUIToRawControls(RigInstance* instance) const {
    auto pRigInstance = castInstance(instance);
    controls->mapGUIToRaw(pRigInstance->getControlsInputInstance());
}

void RigLogicImpl::mapRawToGUIControls(RigInstance* instance) const {
    auto pRigInstance = castInstance(instance);
    controls->mapRawToGUI(pRigInstance->getControlsInputInstance());
}

void RigLogicImpl::calculateControls(RigInstance* instance) const {
    auto pRigInstance = castInstance(instance);
    controls->calculate(pRigInstance->getControlsInputInstance());
}

void RigLogicImpl::calculateMachineLearnedBehaviorControls(RigInstance* instance) const {
    auto pRigInstance = castInstance(instance);
    machineLearnedBehavior->calculate(pRigInstance->getControlsInputInstance(),
                                      pRigInstance->getMachineLearnedBehaviorOutputInstance(),
                                      pRigInstance->getLOD());
}

void RigLogicImpl::calculateMachineLearnedBehaviorControls(RigInstance* instance, std::uint16_t neuralNetIndex) const {
    auto pRigInstance = castInstance(instance);
    machineLearnedBehavior->calculate(pRigInstance->getControlsInputInstance(),
                                      pRigInstance->getMachineLearnedBehaviorOutputInstance(),
                                      pRigInstance->getLOD(),
                                      neuralNetIndex);
}

void RigLogicImpl::calculateRBFControls(RigInstance* instance) const {
    auto pRigInstance = castInstance(instance);
    rbfBehavior->calculate(pRigInstance->getControlsInputInstance(),
                           pRigInstance->getRBFBehaviorOutputInstance(),
                           pRigInstance->getLOD());
}

void RigLogicImpl::calculateRBFControls(RigInstance* instance, std::uint16_t solverIndex) const {
    auto pRigInstance = castInstance(instance);
    rbfBehavior->calculate(pRigInstance->getControlsInputInstance(),
                           pRigInstance->getRBFBehaviorOutputInstance(),
                           pRigInstance->getLOD(),
                           solverIndex);
}

void RigLogicImpl::calculateJoints(RigInstance* instance) const {
    auto pRigInstance = castInstance(instance);
    joints->calculate(pRigInstance->getControlsInputInstance(), pRigInstance->getJointsOutputInstance(), pRigInstance->getLOD());
}

void RigLogicImpl::calculateJoints(RigInstance* instance, std::uint16_t jointGroupIndex) const {
    auto pRigInstance = castInstance(instance);
    joints->calculate(pRigInstance->getControlsInputInstance(),
                      pRigInstance->getJointsOutputInstance(),
                      pRigInstance->getLOD(),
                      jointGroupIndex);
}

void RigLogicImpl::calculateBlendShapes(RigInstance* instance) const {
    auto pRigInstance = castInstance(instance);
    blendShapes->calculate(pRigInstance->getControlsInputInstance(),
                           pRigInstance->getBlendShapesOutputInstance(),
                           pRigInstance->getLOD());
}

void RigLogicImpl::calculateAnimatedMaps(RigInstance* instance) const {
    auto pRigInstance = castInstance(instance);
    animatedMaps->calculate(pRigInstance->getControlsInputInstance(),
                            pRigInstance->getAnimatedMapOutputInstance(),
                            pRigInstance->getLOD());
}

void RigLogicImpl::calculate(RigInstance* instance) const {
    calculateMachineLearnedBehaviorControls(instance);
    calculateRBFControls(instance);
    calculateControls(instance);
    calculateJoints(instance);
    calculateBlendShapes(instance);
    calculateAnimatedMaps(instance);
}

MemoryResource* RigLogicImpl::getMemoryResource() {
    return memRes;
}

}  // namespace rl4
