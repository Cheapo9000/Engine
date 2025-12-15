// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputRouter.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_InputRouter_generated_h
#error "InputRouter.generated.h already included, missing '#pragma once' in InputRouter.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InputRouter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInputRouter *************************************************************
struct Z_Construct_UClass_UInputRouter_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputRouter_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputRouter(); \
	friend struct ::Z_Construct_UClass_UInputRouter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UInputRouter_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputRouter, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UInputRouter_NoRegister) \
	DECLARE_SERIALIZER(UInputRouter)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputRouter(UInputRouter&&) = delete; \
	UInputRouter(const UInputRouter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInputRouter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputRouter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputRouter) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInputRouter();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_37_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputRouter;

// ********** End Class UInputRouter ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
