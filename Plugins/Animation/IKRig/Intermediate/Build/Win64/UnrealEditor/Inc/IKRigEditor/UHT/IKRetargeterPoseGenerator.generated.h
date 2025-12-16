// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RetargetEditor/IKRetargeterPoseGenerator.h"

#ifdef IKRIGEDITOR_IKRetargeterPoseGenerator_generated_h
#error "IKRetargeterPoseGenerator.generated.h already included, missing '#pragma once' in IKRetargeterPoseGenerator.h"
#endif
#define IKRIGEDITOR_IKRetargeterPoseGenerator_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterPoseGenerator_h

// ********** Begin Enum ERetargetAutoAlignMethod **************************************************
#define FOREACH_ENUM_ERETARGETAUTOALIGNMETHOD(op) \
	op(ERetargetAutoAlignMethod::ChainToChain) \
	op(ERetargetAutoAlignMethod::MeshToMesh) \
	op(ERetargetAutoAlignMethod::LocalRotationAxes) \
	op(ERetargetAutoAlignMethod::GlobalRotationAxes) 

enum class ERetargetAutoAlignMethod : uint8;
template<> struct TIsUEnumClass<ERetargetAutoAlignMethod> { enum { Value = true }; };
template<> IKRIGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ERetargetAutoAlignMethod>();
// ********** End Enum ERetargetAutoAlignMethod ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
