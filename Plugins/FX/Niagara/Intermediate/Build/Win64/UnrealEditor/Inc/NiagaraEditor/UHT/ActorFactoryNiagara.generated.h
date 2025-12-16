// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactoryNiagara.h"

#ifdef NIAGARAEDITOR_ActorFactoryNiagara_generated_h
#error "ActorFactoryNiagara.generated.h already included, missing '#pragma once' in ActorFactoryNiagara.h"
#endif
#define NIAGARAEDITOR_ActorFactoryNiagara_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryNiagara *****************************************************
struct Z_Construct_UClass_UActorFactoryNiagara_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UActorFactoryNiagara_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryNiagara(); \
	friend struct ::Z_Construct_UClass_UActorFactoryNiagara_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UActorFactoryNiagara_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryNiagara, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UActorFactoryNiagara_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryNiagara)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UActorFactoryNiagara(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryNiagara) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UActorFactoryNiagara); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryNiagara); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryNiagara(UActorFactoryNiagara&&) = delete; \
	UActorFactoryNiagara(const UActorFactoryNiagara&) = delete; \
	NIAGARAEDITOR_API virtual ~UActorFactoryNiagara();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_14_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_17_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryNiagara;

// ********** End Class UActorFactoryNiagara *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ActorFactoryNiagara_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
