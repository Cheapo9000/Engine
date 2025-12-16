// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceSpline.h"

#ifdef NIAGARA_NiagaraDataInterfaceSpline_generated_h
#error "NiagaraDataInterfaceSpline.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceSpline.h"
#endif
#define NIAGARA_NiagaraDataInterfaceSpline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraDataInterfaceSplineLUT ************************************
struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraDataInterfaceSplineLUT;
// ********** End ScriptStruct FNiagaraDataInterfaceSplineLUT **************************************

// ********** Begin Class UNiagaraDataInterfaceSpline **********************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSpline_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h_168_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceSpline(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceSpline_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceSpline, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceSpline_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceSpline)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h_168_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceSpline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceSpline) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceSpline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceSpline); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceSpline(UNiagaraDataInterfaceSpline&&) = delete; \
	UNiagaraDataInterfaceSpline(const UNiagaraDataInterfaceSpline&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceSpline();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h_165_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h_168_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h_168_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h_168_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceSpline;

// ********** End Class UNiagaraDataInterfaceSpline ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
