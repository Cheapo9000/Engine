// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseBehaviors/KeyInputBehavior.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_KeyInputBehavior_generated_h
#error "KeyInputBehavior.generated.h already included, missing '#pragma once' in KeyInputBehavior.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_KeyInputBehavior_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UKeyInputBehavior ********************************************************
struct Z_Construct_UClass_UKeyInputBehavior_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UKeyInputBehavior_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyInputBehavior_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKeyInputBehavior(); \
	friend struct ::Z_Construct_UClass_UKeyInputBehavior_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UKeyInputBehavior_NoRegister(); \
public: \
	DECLARE_CLASS2(UKeyInputBehavior, UInputBehavior, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UKeyInputBehavior_NoRegister) \
	DECLARE_SERIALIZER(UKeyInputBehavior)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyInputBehavior_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKeyInputBehavior(UKeyInputBehavior&&) = delete; \
	UKeyInputBehavior(const UKeyInputBehavior&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UKeyInputBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeyInputBehavior); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKeyInputBehavior) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UKeyInputBehavior();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyInputBehavior_h_44_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyInputBehavior_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyInputBehavior_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyInputBehavior_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKeyInputBehavior;

// ********** End Class UKeyInputBehavior **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyInputBehavior_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
