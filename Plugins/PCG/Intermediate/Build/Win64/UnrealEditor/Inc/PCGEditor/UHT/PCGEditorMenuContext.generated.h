// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGEditorMenuContext.h"

#ifdef PCGEDITOR_PCGEditorMenuContext_generated_h
#error "PCGEditorMenuContext.generated.h already included, missing '#pragma once' in PCGEditorMenuContext.h"
#endif
#define PCGEDITOR_PCGEditorMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGEditorMenuContext ****************************************************
struct Z_Construct_UClass_UPCGEditorMenuContext_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorMenuContext_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_PCGEditorMenuContext_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGEditorMenuContext(); \
	friend struct ::Z_Construct_UClass_UPCGEditorMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGEditorMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGEditorMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGEditorMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UPCGEditorMenuContext)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_PCGEditorMenuContext_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGEditorMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGEditorMenuContext(UPCGEditorMenuContext&&) = delete; \
	UPCGEditorMenuContext(const UPCGEditorMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGEditorMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGEditorMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGEditorMenuContext) \
	NO_API virtual ~UPCGEditorMenuContext();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_PCGEditorMenuContext_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_PCGEditorMenuContext_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_PCGEditorMenuContext_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_PCGEditorMenuContext_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGEditorMenuContext;

// ********** End Class UPCGEditorMenuContext ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_PCGEditorMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
