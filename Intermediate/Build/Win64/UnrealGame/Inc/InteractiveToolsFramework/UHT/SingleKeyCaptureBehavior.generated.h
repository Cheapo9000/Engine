// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseBehaviors/SingleKeyCaptureBehavior.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_SingleKeyCaptureBehavior_generated_h
#error "SingleKeyCaptureBehavior.generated.h already included, missing '#pragma once' in SingleKeyCaptureBehavior.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_SingleKeyCaptureBehavior_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USingleKeyCaptureBehavior ************************************************
struct Z_Construct_UClass_USingleKeyCaptureBehavior_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleKeyCaptureBehavior_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSingleKeyCaptureBehavior(); \
	friend struct ::Z_Construct_UClass_USingleKeyCaptureBehavior_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_USingleKeyCaptureBehavior_NoRegister(); \
public: \
	DECLARE_CLASS2(USingleKeyCaptureBehavior, UInputBehavior, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_USingleKeyCaptureBehavior_NoRegister) \
	DECLARE_SERIALIZER(USingleKeyCaptureBehavior)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USingleKeyCaptureBehavior(USingleKeyCaptureBehavior&&) = delete; \
	USingleKeyCaptureBehavior(const USingleKeyCaptureBehavior&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, USingleKeyCaptureBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USingleKeyCaptureBehavior); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USingleKeyCaptureBehavior) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~USingleKeyCaptureBehavior();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h_27_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USingleKeyCaptureBehavior;

// ********** End Class USingleKeyCaptureBehavior **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
