// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewModels/Stack/NiagaraStackEntry.h"

#ifdef NIAGARAEDITOR_NiagaraStackEntry_generated_h
#error "NiagaraStackEntry.generated.h already included, missing '#pragma once' in NiagaraStackEntry.h"
#endif
#define NIAGARAEDITOR_NiagaraStackEntry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraStackEntry *******************************************************
struct Z_Construct_UClass_UNiagaraStackEntry_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEntry_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStackEntry(); \
	friend struct ::Z_Construct_UClass_UNiagaraStackEntry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraStackEntry_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraStackEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraStackEntry_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraStackEntry)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_54_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraStackEntry(UNiagaraStackEntry&&) = delete; \
	UNiagaraStackEntry(const UNiagaraStackEntry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraStackEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStackEntry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStackEntry) \
	NIAGARAEDITOR_API virtual ~UNiagaraStackEntry();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_51_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraStackEntry;

// ********** End Class UNiagaraStackEntry *********************************************************

// ********** Begin Class UNiagaraStackSpacer ******************************************************
struct Z_Construct_UClass_UNiagaraStackSpacer_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSpacer_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_758_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStackSpacer(); \
	friend struct ::Z_Construct_UClass_UNiagaraStackSpacer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraStackSpacer_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraStackSpacer, UNiagaraStackEntry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraStackSpacer_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraStackSpacer)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_758_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraStackSpacer(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraStackSpacer(UNiagaraStackSpacer&&) = delete; \
	UNiagaraStackSpacer(const UNiagaraStackSpacer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraStackSpacer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStackSpacer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStackSpacer) \
	NIAGARAEDITOR_API virtual ~UNiagaraStackSpacer();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_755_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_758_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_758_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_758_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraStackSpacer;

// ********** End Class UNiagaraStackSpacer ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h

// ********** Begin Enum EStackIssueSeverity *******************************************************
#define FOREACH_ENUM_ESTACKISSUESEVERITY(op) \
	op(EStackIssueSeverity::Error) \
	op(EStackIssueSeverity::Warning) \
	op(EStackIssueSeverity::Info) \
	op(EStackIssueSeverity::None) 

enum class EStackIssueSeverity : uint8;
template<> struct TIsUEnumClass<EStackIssueSeverity> { enum { Value = true }; };
template<> NIAGARAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EStackIssueSeverity>();
// ********** End Enum EStackIssueSeverity *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
