// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintEditorContext.h"

#ifdef KISMET_BlueprintEditorContext_generated_h
#error "BlueprintEditorContext.generated.h already included, missing '#pragma once' in BlueprintEditorContext.h"
#endif
#define KISMET_BlueprintEditorContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlueprint;

// ********** Begin Class UBlueprintEditorToolMenuContext ******************************************
#define FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBlueprintObj);


struct Z_Construct_UClass_UBlueprintEditorToolMenuContext_Statics;
KISMET_API UClass* Z_Construct_UClass_UBlueprintEditorToolMenuContext_NoRegister();

#define FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintEditorToolMenuContext(); \
	friend struct ::Z_Construct_UClass_UBlueprintEditorToolMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KISMET_API UClass* ::Z_Construct_UClass_UBlueprintEditorToolMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintEditorToolMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kismet"), Z_Construct_UClass_UBlueprintEditorToolMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintEditorToolMenuContext)


#define FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KISMET_API UBlueprintEditorToolMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintEditorToolMenuContext(UBlueprintEditorToolMenuContext&&) = delete; \
	UBlueprintEditorToolMenuContext(const UBlueprintEditorToolMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KISMET_API, UBlueprintEditorToolMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorToolMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorToolMenuContext) \
	KISMET_API virtual ~UBlueprintEditorToolMenuContext();


#define FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_14_PROLOG
#define FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintEditorToolMenuContext;

// ********** End Class UBlueprintEditorToolMenuContext ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
