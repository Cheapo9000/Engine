// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseBehaviors/MouseWheelModifierInputBehavior.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_MouseWheelModifierInputBehavior_generated_h
#error "MouseWheelModifierInputBehavior.generated.h already included, missing '#pragma once' in MouseWheelModifierInputBehavior.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_MouseWheelModifierInputBehavior_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMouseWheelModifierInputBehavior *****************************************
struct Z_Construct_UClass_UMouseWheelModifierInputBehavior_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseWheelModifierInputBehavior_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelModifierInputBehavior_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMouseWheelModifierInputBehavior(); \
	friend struct ::Z_Construct_UClass_UMouseWheelModifierInputBehavior_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UMouseWheelModifierInputBehavior_NoRegister(); \
public: \
	DECLARE_CLASS2(UMouseWheelModifierInputBehavior, UMouseWheelInputBehavior, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UMouseWheelModifierInputBehavior_NoRegister) \
	DECLARE_SERIALIZER(UMouseWheelModifierInputBehavior)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelModifierInputBehavior_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UMouseWheelModifierInputBehavior(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMouseWheelModifierInputBehavior(UMouseWheelModifierInputBehavior&&) = delete; \
	UMouseWheelModifierInputBehavior(const UMouseWheelModifierInputBehavior&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UMouseWheelModifierInputBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMouseWheelModifierInputBehavior); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMouseWheelModifierInputBehavior) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UMouseWheelModifierInputBehavior();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelModifierInputBehavior_h_13_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelModifierInputBehavior_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelModifierInputBehavior_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelModifierInputBehavior_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMouseWheelModifierInputBehavior;

// ********** End Class UMouseWheelModifierInputBehavior *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelModifierInputBehavior_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
