// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraBakerFunctionLibrary.h"

#ifdef NIAGARAEDITOR_NiagaraBakerFunctionLibrary_generated_h
#error "NiagaraBakerFunctionLibrary.generated.h already included, missing '#pragma once' in NiagaraBakerFunctionLibrary.h"
#endif
#define NIAGARAEDITOR_NiagaraBakerFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
class UStaticMesh;
struct FNiagaraRendererReadbackParameters;

// ********** Begin Class UNiagaraBakerFunctionLibrary *********************************************
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraBakerFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCaptureNiagaraToStaticMesh);


struct Z_Construct_UClass_UNiagaraBakerFunctionLibrary_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraBakerFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraBakerFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraBakerFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UNiagaraBakerFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraBakerFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraBakerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraBakerFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraBakerFunctionLibrary)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraBakerFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraBakerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraBakerFunctionLibrary(UNiagaraBakerFunctionLibrary&&) = delete; \
	UNiagaraBakerFunctionLibrary(const UNiagaraBakerFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraBakerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraBakerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraBakerFunctionLibrary) \
	NIAGARAEDITOR_API virtual ~UNiagaraBakerFunctionLibrary();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraBakerFunctionLibrary_h_13_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraBakerFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraBakerFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraBakerFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraBakerFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraBakerFunctionLibrary;

// ********** End Class UNiagaraBakerFunctionLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraBakerFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
