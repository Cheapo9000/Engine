// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEmitterEditorData.h"

#ifdef NIAGARAEDITOR_NiagaraEmitterEditorData_generated_h
#error "NiagaraEmitterEditorData.generated.h already included, missing '#pragma once' in NiagaraEmitterEditorData.h"
#endif
#define NIAGARAEDITOR_NiagaraEmitterEditorData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraEmitterEditorData ************************************************
struct Z_Construct_UClass_UNiagaraEmitterEditorData_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraEmitterEditorData_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraEmitterEditorData(); \
	friend struct ::Z_Construct_UClass_UNiagaraEmitterEditorData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraEmitterEditorData_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraEmitterEditorData, UNiagaraEditorDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraEmitterEditorData_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraEmitterEditorData)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraEmitterEditorData(UNiagaraEmitterEditorData&&) = delete; \
	UNiagaraEmitterEditorData(const UNiagaraEmitterEditorData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraEmitterEditorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEmitterEditorData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEmitterEditorData) \
	NIAGARAEDITOR_API virtual ~UNiagaraEmitterEditorData();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_15_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraEmitterEditorData;

// ********** End Class UNiagaraEmitterEditorData **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
