// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SCSEditorExtensionContext.h"

#ifdef KISMET_SCSEditorExtensionContext_generated_h
#error "SCSEditorExtensionContext.generated.h already included, missing '#pragma once' in SCSEditorExtensionContext.h"
#endif
#define KISMET_SCSEditorExtensionContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USCSEditorExtensionContext ***********************************************
struct Z_Construct_UClass_USCSEditorExtensionContext_Statics;
KISMET_API UClass* Z_Construct_UClass_USCSEditorExtensionContext_NoRegister();

#define FID_Engine_Source_Editor_Kismet_Public_SCSEditorExtensionContext_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSCSEditorExtensionContext(); \
	friend struct ::Z_Construct_UClass_USCSEditorExtensionContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KISMET_API UClass* ::Z_Construct_UClass_USCSEditorExtensionContext_NoRegister(); \
public: \
	DECLARE_CLASS2(USCSEditorExtensionContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kismet"), Z_Construct_UClass_USCSEditorExtensionContext_NoRegister) \
	DECLARE_SERIALIZER(USCSEditorExtensionContext)


#define FID_Engine_Source_Editor_Kismet_Public_SCSEditorExtensionContext_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KISMET_API USCSEditorExtensionContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USCSEditorExtensionContext(USCSEditorExtensionContext&&) = delete; \
	USCSEditorExtensionContext(const USCSEditorExtensionContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KISMET_API, USCSEditorExtensionContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USCSEditorExtensionContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USCSEditorExtensionContext) \
	KISMET_API virtual ~USCSEditorExtensionContext();


#define FID_Engine_Source_Editor_Kismet_Public_SCSEditorExtensionContext_h_20_PROLOG
#define FID_Engine_Source_Editor_Kismet_Public_SCSEditorExtensionContext_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Kismet_Public_SCSEditorExtensionContext_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Kismet_Public_SCSEditorExtensionContext_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USCSEditorExtensionContext;

// ********** End Class USCSEditorExtensionContext *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Kismet_Public_SCSEditorExtensionContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
