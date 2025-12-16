// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraScratchPadContainer.h"

#ifdef NIAGARA_NiagaraScratchPadContainer_generated_h
#error "NiagaraScratchPadContainer.generated.h already included, missing '#pragma once' in NiagaraScratchPadContainer.h"
#endif
#define NIAGARA_NiagaraScratchPadContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraScratchPadContainer **********************************************
struct Z_Construct_UClass_UNiagaraScratchPadContainer_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScratchPadContainer_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraScratchPadContainer(); \
	friend struct ::Z_Construct_UClass_UNiagaraScratchPadContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraScratchPadContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraScratchPadContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraScratchPadContainer_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraScratchPadContainer)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraScratchPadContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraScratchPadContainer(UNiagaraScratchPadContainer&&) = delete; \
	UNiagaraScratchPadContainer(const UNiagaraScratchPadContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraScratchPadContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScratchPadContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScratchPadContainer) \
	NIAGARA_API virtual ~UNiagaraScratchPadContainer();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h_13_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraScratchPadContainer;

// ********** End Class UNiagaraScratchPadContainer ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
