// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stateless/Modules/NiagaraStatelessModule_SubUVAnimation.h"

#ifdef NIAGARA_NiagaraStatelessModule_SubUVAnimation_generated_h
#error "NiagaraStatelessModule_SubUVAnimation.generated.h already included, missing '#pragma once' in NiagaraStatelessModule_SubUVAnimation.h"
#endif
#define NIAGARA_NiagaraStatelessModule_SubUVAnimation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraStatelessModule_SubUVAnimation ***********************************
struct Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStatelessModule_SubUVAnimation(); \
	friend struct ::Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraStatelessModule_SubUVAnimation, UNiagaraStatelessModule, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraStatelessModule_SubUVAnimation)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraStatelessModule_SubUVAnimation(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraStatelessModule_SubUVAnimation(UNiagaraStatelessModule_SubUVAnimation&&) = delete; \
	UNiagaraStatelessModule_SubUVAnimation(const UNiagaraStatelessModule_SubUVAnimation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraStatelessModule_SubUVAnimation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStatelessModule_SubUVAnimation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraStatelessModule_SubUVAnimation) \
	NIAGARA_API virtual ~UNiagaraStatelessModule_SubUVAnimation();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_20_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraStatelessModule_SubUVAnimation;

// ********** End Class UNiagaraStatelessModule_SubUVAnimation *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h

// ********** Begin Enum ENSMSubUVAnimation_Mode ***************************************************
#define FOREACH_ENUM_ENSMSUBUVANIMATION_MODE(op) \
	op(ENSMSubUVAnimation_Mode::DirectSet) \
	op(ENSMSubUVAnimation_Mode::InfiniteLoop) \
	op(ENSMSubUVAnimation_Mode::Linear) \
	op(ENSMSubUVAnimation_Mode::Random) 

enum class ENSMSubUVAnimation_Mode;
template<> struct TIsUEnumClass<ENSMSubUVAnimation_Mode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENSMSubUVAnimation_Mode>();
// ********** End Enum ENSMSubUVAnimation_Mode *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
