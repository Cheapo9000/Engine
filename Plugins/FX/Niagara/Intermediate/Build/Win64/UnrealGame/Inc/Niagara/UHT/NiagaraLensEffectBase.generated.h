// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraLensEffectBase.h"

#ifdef NIAGARA_NiagaraLensEffectBase_generated_h
#error "NiagaraLensEffectBase.generated.h already included, missing '#pragma once' in NiagaraLensEffectBase.h"
#endif
#define NIAGARA_NiagaraLensEffectBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANiagaraLensEffectBase ***************************************************
struct Z_Construct_UClass_ANiagaraLensEffectBase_Statics;
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraLensEffectBase_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANiagaraLensEffectBase(); \
	friend struct ::Z_Construct_UClass_ANiagaraLensEffectBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_ANiagaraLensEffectBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ANiagaraLensEffectBase, ANiagaraActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_ANiagaraLensEffectBase_NoRegister) \
	DECLARE_SERIALIZER(ANiagaraLensEffectBase) \
	virtual UObject* _getUObject() const override { return const_cast<ANiagaraLensEffectBase*>(this); }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANiagaraLensEffectBase(ANiagaraLensEffectBase&&) = delete; \
	ANiagaraLensEffectBase(const ANiagaraLensEffectBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, ANiagaraLensEffectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraLensEffectBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANiagaraLensEffectBase) \
	NIAGARA_API virtual ~ANiagaraLensEffectBase();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h_17_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANiagaraLensEffectBase;

// ********** End Class ANiagaraLensEffectBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
