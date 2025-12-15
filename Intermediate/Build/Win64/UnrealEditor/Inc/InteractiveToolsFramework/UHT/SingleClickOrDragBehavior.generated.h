// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseBehaviors/SingleClickOrDragBehavior.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_SingleClickOrDragBehavior_generated_h
#error "SingleClickOrDragBehavior.generated.h already included, missing '#pragma once' in SingleClickOrDragBehavior.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_SingleClickOrDragBehavior_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USingleClickOrDragInputBehavior ******************************************
struct Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickOrDragInputBehavior_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSingleClickOrDragInputBehavior(); \
	friend struct ::Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_USingleClickOrDragInputBehavior_NoRegister(); \
public: \
	DECLARE_CLASS2(USingleClickOrDragInputBehavior, UAnyButtonInputBehavior, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_USingleClickOrDragInputBehavior_NoRegister) \
	DECLARE_SERIALIZER(USingleClickOrDragInputBehavior)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API USingleClickOrDragInputBehavior(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USingleClickOrDragInputBehavior(USingleClickOrDragInputBehavior&&) = delete; \
	USingleClickOrDragInputBehavior(const USingleClickOrDragInputBehavior&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, USingleClickOrDragInputBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USingleClickOrDragInputBehavior); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USingleClickOrDragInputBehavior) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~USingleClickOrDragInputBehavior();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_40_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USingleClickOrDragInputBehavior;

// ********** End Class USingleClickOrDragInputBehavior ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
