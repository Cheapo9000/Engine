// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stateless/Modules/NiagaraStatelessModule_InitialMeshOrientation.h"

#ifdef NIAGARA_NiagaraStatelessModule_InitialMeshOrientation_generated_h
#error "NiagaraStatelessModule_InitialMeshOrientation.generated.h already included, missing '#pragma once' in NiagaraStatelessModule_InitialMeshOrientation.h"
#endif
#define NIAGARA_NiagaraStatelessModule_InitialMeshOrientation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraStatelessModule_InitialMeshOrientation ***************************
struct Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStatelessModule_InitialMeshOrientation(); \
	friend struct ::Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraStatelessModule_InitialMeshOrientation, UNiagaraStatelessModule, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraStatelessModule_InitialMeshOrientation)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraStatelessModule_InitialMeshOrientation(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraStatelessModule_InitialMeshOrientation(UNiagaraStatelessModule_InitialMeshOrientation&&) = delete; \
	UNiagaraStatelessModule_InitialMeshOrientation(const UNiagaraStatelessModule_InitialMeshOrientation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraStatelessModule_InitialMeshOrientation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStatelessModule_InitialMeshOrientation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStatelessModule_InitialMeshOrientation) \
	NIAGARA_API virtual ~UNiagaraStatelessModule_InitialMeshOrientation();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h_23_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraStatelessModule_InitialMeshOrientation;

// ********** End Class UNiagaraStatelessModule_InitialMeshOrientation *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h

// ********** Begin Enum ENSMInitialMeshOrientationMode ********************************************
#define FOREACH_ENUM_ENSMINITIALMESHORIENTATIONMODE(op) \
	op(ENSMInitialMeshOrientationMode::None) \
	op(ENSMInitialMeshOrientationMode::Random) \
	op(ENSMInitialMeshOrientationMode::OrientToAxis) 

enum class ENSMInitialMeshOrientationMode;
template<> struct TIsUEnumClass<ENSMInitialMeshOrientationMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENSMInitialMeshOrientationMode>();
// ********** End Enum ENSMInitialMeshOrientationMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
