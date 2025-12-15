// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubobjectEditorExtensionContext.h"

#ifdef KISMET_SubobjectEditorExtensionContext_generated_h
#error "SubobjectEditorExtensionContext.generated.h already included, missing '#pragma once' in SubobjectEditorExtensionContext.h"
#endif
#define KISMET_SubobjectEditorExtensionContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USubobjectEditorExtensionContext *****************************************
struct Z_Construct_UClass_USubobjectEditorExtensionContext_Statics;
KISMET_API UClass* Z_Construct_UClass_USubobjectEditorExtensionContext_NoRegister();

#define FID_Engine_Source_Editor_Kismet_Public_SubobjectEditorExtensionContext_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubobjectEditorExtensionContext(); \
	friend struct ::Z_Construct_UClass_USubobjectEditorExtensionContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KISMET_API UClass* ::Z_Construct_UClass_USubobjectEditorExtensionContext_NoRegister(); \
public: \
	DECLARE_CLASS2(USubobjectEditorExtensionContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kismet"), Z_Construct_UClass_USubobjectEditorExtensionContext_NoRegister) \
	DECLARE_SERIALIZER(USubobjectEditorExtensionContext)


#define FID_Engine_Source_Editor_Kismet_Public_SubobjectEditorExtensionContext_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KISMET_API USubobjectEditorExtensionContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubobjectEditorExtensionContext(USubobjectEditorExtensionContext&&) = delete; \
	USubobjectEditorExtensionContext(const USubobjectEditorExtensionContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KISMET_API, USubobjectEditorExtensionContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubobjectEditorExtensionContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubobjectEditorExtensionContext) \
	KISMET_API virtual ~USubobjectEditorExtensionContext();


#define FID_Engine_Source_Editor_Kismet_Public_SubobjectEditorExtensionContext_h_17_PROLOG
#define FID_Engine_Source_Editor_Kismet_Public_SubobjectEditorExtensionContext_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Kismet_Public_SubobjectEditorExtensionContext_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Kismet_Public_SubobjectEditorExtensionContext_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubobjectEditorExtensionContext;

// ********** End Class USubobjectEditorExtensionContext *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Kismet_Public_SubobjectEditorExtensionContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
