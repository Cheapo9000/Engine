// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewModels/Stack/NiagaraStackValueCollection.h"

#ifdef NIAGARAEDITOR_NiagaraStackValueCollection_generated_h
#error "NiagaraStackValueCollection.generated.h already included, missing '#pragma once' in NiagaraStackValueCollection.h"
#endif
#define NIAGARAEDITOR_NiagaraStackValueCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraStackValueCollection *********************************************
struct Z_Construct_UClass_UNiagaraStackValueCollection_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackValueCollection_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackValueCollection_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStackValueCollection(); \
	friend struct ::Z_Construct_UClass_UNiagaraStackValueCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraStackValueCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraStackValueCollection, UNiagaraStackItemContent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraStackValueCollection_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraStackValueCollection)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackValueCollection_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraStackValueCollection(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraStackValueCollection(UNiagaraStackValueCollection&&) = delete; \
	UNiagaraStackValueCollection(const UNiagaraStackValueCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraStackValueCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStackValueCollection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStackValueCollection) \
	NIAGARAEDITOR_API virtual ~UNiagaraStackValueCollection();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackValueCollection_h_18_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackValueCollection_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackValueCollection_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackValueCollection_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraStackValueCollection;

// ********** End Class UNiagaraStackValueCollection ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackValueCollection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
