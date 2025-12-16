// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanIdentityErrorCode.h"

#ifdef METAHUMANCORETECHLIB_MetaHumanIdentityErrorCode_generated_h
#error "MetaHumanIdentityErrorCode.generated.h already included, missing '#pragma once' in MetaHumanIdentityErrorCode.h"
#endif
#define METAHUMANCORETECHLIB_MetaHumanIdentityErrorCode_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTechLib_Public_MetaHumanIdentityErrorCode_h

// ********** Begin Enum EIdentityErrorCode ********************************************************
#define FOREACH_ENUM_EIDENTITYERRORCODE(op) \
	op(EIdentityErrorCode::None) \
	op(EIdentityErrorCode::MLRig) \
	op(EIdentityErrorCode::CreateRigFromDNA) \
	op(EIdentityErrorCode::LoadBrows) \
	op(EIdentityErrorCode::NoDNA) \
	op(EIdentityErrorCode::NoTemplate) \
	op(EIdentityErrorCode::CreateDebugFolder) \
	op(EIdentityErrorCode::CalculatePCAModel) \
	op(EIdentityErrorCode::Initialization) \
	op(EIdentityErrorCode::CameraParameters) \
	op(EIdentityErrorCode::ScanInput) \
	op(EIdentityErrorCode::DepthInput) \
	op(EIdentityErrorCode::TeethSource) \
	op(EIdentityErrorCode::FitRigid) \
	op(EIdentityErrorCode::FitPCA) \
	op(EIdentityErrorCode::FitTeethFailed) \
	op(EIdentityErrorCode::TeethDepthDelta) \
	op(EIdentityErrorCode::UpdateRigWithTeeth) \
	op(EIdentityErrorCode::InvalidDNA) \
	op(EIdentityErrorCode::ApplyDeltaDNA) \
	op(EIdentityErrorCode::RefineTeeth) \
	op(EIdentityErrorCode::ApplyScaleToDNA) \
	op(EIdentityErrorCode::NoPart) \
	op(EIdentityErrorCode::InCompatibleDNA) \
	op(EIdentityErrorCode::CaptureDataInvalid) \
	op(EIdentityErrorCode::SolveFailed) \
	op(EIdentityErrorCode::BrowsFailed) \
	op(EIdentityErrorCode::NoPose) \
	op(EIdentityErrorCode::FitEyesFailed) \
	op(EIdentityErrorCode::BadInputMeshTopology) 

enum class EIdentityErrorCode : uint8;
template<> struct TIsUEnumClass<EIdentityErrorCode> { enum { Value = true }; };
template<> METAHUMANCORETECHLIB_NON_ATTRIBUTED_API UEnum* StaticEnum<EIdentityErrorCode>();
// ********** End Enum EIdentityErrorCode **********************************************************

// ********** Begin Enum EAutoRigIdentityValidationError *******************************************
#define FOREACH_ENUM_EAUTORIGIDENTITYVALIDATIONERROR(op) \
	op(EAutoRigIdentityValidationError::None) \
	op(EAutoRigIdentityValidationError::BodyNotSelected) \
	op(EAutoRigIdentityValidationError::BodyIndexInvalid) \
	op(EAutoRigIdentityValidationError::EmptyConformalMesh) \
	op(EAutoRigIdentityValidationError::MeshNotConformed) \
	op(EAutoRigIdentityValidationError::NoFacePart) 

enum class EAutoRigIdentityValidationError : uint8;
template<> struct TIsUEnumClass<EAutoRigIdentityValidationError> { enum { Value = true }; };
template<> METAHUMANCORETECHLIB_NON_ATTRIBUTED_API UEnum* StaticEnum<EAutoRigIdentityValidationError>();
// ********** End Enum EAutoRigIdentityValidationError *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
