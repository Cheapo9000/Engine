// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelVariantSetsActor.h"

#ifdef VARIANTMANAGERCONTENT_LevelVariantSetsActor_generated_h
#error "LevelVariantSetsActor.generated.h already included, missing '#pragma once' in LevelVariantSetsActor.h"
#endif
#define VARIANTMANAGERCONTENT_LevelVariantSetsActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelVariantSets;

// ********** Begin Class ALevelVariantSetsActor ***************************************************
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwitchOnVariantByIndex); \
	DECLARE_FUNCTION(execSwitchOnVariantByName); \
	DECLARE_FUNCTION(execSetLevelVariantSets); \
	DECLARE_FUNCTION(execGetLevelVariantSets);


struct Z_Construct_UClass_ALevelVariantSetsActor_Statics;
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ALevelVariantSetsActor_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelVariantSetsActor(); \
	friend struct ::Z_Construct_UClass_ALevelVariantSetsActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENT_API UClass* ::Z_Construct_UClass_ALevelVariantSetsActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ALevelVariantSetsActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), Z_Construct_UClass_ALevelVariantSetsActor_NoRegister) \
	DECLARE_SERIALIZER(ALevelVariantSetsActor)


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALevelVariantSetsActor(ALevelVariantSetsActor&&) = delete; \
	ALevelVariantSetsActor(const ALevelVariantSetsActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VARIANTMANAGERCONTENT_API, ALevelVariantSetsActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelVariantSetsActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelVariantSetsActor) \
	VARIANTMANAGERCONTENT_API virtual ~ALevelVariantSetsActor();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_16_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_21_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALevelVariantSetsActor;

// ********** End Class ALevelVariantSetsActor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
