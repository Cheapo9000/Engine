// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyAnimatorShared.h"

#ifdef PROPERTYANIMATOR_PropertyAnimatorShared_generated_h
#error "PropertyAnimatorShared.generated.h already included, missing '#pragma once' in PropertyAnimatorShared.h"
#endif
#define PROPERTYANIMATOR_PropertyAnimatorShared_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_PropertyAnimatorShared_h

// ********** Begin Enum EPropertyAnimatorEasingType ***********************************************
#define FOREACH_ENUM_EPROPERTYANIMATOREASINGTYPE(op) \
	op(EPropertyAnimatorEasingType::In) \
	op(EPropertyAnimatorEasingType::Out) \
	op(EPropertyAnimatorEasingType::InOut) 

enum class EPropertyAnimatorEasingType : uint8;
template<> struct TIsUEnumClass<EPropertyAnimatorEasingType> { enum { Value = true }; };
template<> PROPERTYANIMATOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAnimatorEasingType>();
// ********** End Enum EPropertyAnimatorEasingType *************************************************

// ********** Begin Enum EPropertyAnimatorEasingFunction *******************************************
#define FOREACH_ENUM_EPROPERTYANIMATOREASINGFUNCTION(op) \
	op(EPropertyAnimatorEasingFunction::Linear) \
	op(EPropertyAnimatorEasingFunction::Sine) \
	op(EPropertyAnimatorEasingFunction::Quad) \
	op(EPropertyAnimatorEasingFunction::Cubic) \
	op(EPropertyAnimatorEasingFunction::Quart) \
	op(EPropertyAnimatorEasingFunction::Quint) \
	op(EPropertyAnimatorEasingFunction::Expo) \
	op(EPropertyAnimatorEasingFunction::Circ) \
	op(EPropertyAnimatorEasingFunction::Back) \
	op(EPropertyAnimatorEasingFunction::Elastic) \
	op(EPropertyAnimatorEasingFunction::Bounce) 

enum class EPropertyAnimatorEasingFunction : uint8;
template<> struct TIsUEnumClass<EPropertyAnimatorEasingFunction> { enum { Value = true }; };
template<> PROPERTYANIMATOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAnimatorEasingFunction>();
// ********** End Enum EPropertyAnimatorEasingFunction *********************************************

// ********** Begin Enum EPropertyAnimatorWaveFunction *********************************************
#define FOREACH_ENUM_EPROPERTYANIMATORWAVEFUNCTION(op) \
	op(EPropertyAnimatorWaveFunction::Sine) \
	op(EPropertyAnimatorWaveFunction::Cosine) \
	op(EPropertyAnimatorWaveFunction::Square) \
	op(EPropertyAnimatorWaveFunction::InvertedSquare) \
	op(EPropertyAnimatorWaveFunction::Sawtooth) \
	op(EPropertyAnimatorWaveFunction::Triangle) \
	op(EPropertyAnimatorWaveFunction::Bounce) \
	op(EPropertyAnimatorWaveFunction::Pulse) \
	op(EPropertyAnimatorWaveFunction::Perlin) 

enum class EPropertyAnimatorWaveFunction : uint8;
template<> struct TIsUEnumClass<EPropertyAnimatorWaveFunction> { enum { Value = true }; };
template<> PROPERTYANIMATOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAnimatorWaveFunction>();
// ********** End Enum EPropertyAnimatorWaveFunction ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
