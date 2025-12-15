// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveToolsContext.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveToolsContext_generated_h
#error "InteractiveToolsContext.generated.h already included, missing '#pragma once' in InteractiveToolsContext.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveToolsContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInteractiveToolsContext *************************************************
struct Z_Construct_UClass_UInteractiveToolsContext_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveToolsContext(); \
	friend struct ::Z_Construct_UClass_UInteractiveToolsContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UInteractiveToolsContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractiveToolsContext, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UInteractiveToolsContext_NoRegister) \
	DECLARE_SERIALIZER(UInteractiveToolsContext)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractiveToolsContext(UInteractiveToolsContext&&) = delete; \
	UInteractiveToolsContext(const UInteractiveToolsContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInteractiveToolsContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveToolsContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractiveToolsContext) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInteractiveToolsContext();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h_37_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractiveToolsContext;

// ********** End Class UInteractiveToolsContext ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
