// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewModels/Stack/NiagaraStackObject.h"

#ifdef NIAGARAEDITOR_NiagaraStackObject_generated_h
#error "NiagaraStackObject.generated.h already included, missing '#pragma once' in NiagaraStackObject.h"
#endif
#define NIAGARAEDITOR_NiagaraStackObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraStackObject ******************************************************
struct Z_Construct_UClass_UNiagaraStackObject_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackObject_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackObject_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStackObject(); \
	friend struct ::Z_Construct_UClass_UNiagaraStackObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraStackObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraStackObject, UNiagaraStackItemContent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraStackObject_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraStackObject)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackObject_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraStackObject(UNiagaraStackObject&&) = delete; \
	UNiagaraStackObject(const UNiagaraStackObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraStackObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStackObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStackObject) \
	NIAGARAEDITOR_API virtual ~UNiagaraStackObject();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackObject_h_18_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackObject_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackObject_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackObject_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraStackObject;

// ********** End Class UNiagaraStackObject ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
