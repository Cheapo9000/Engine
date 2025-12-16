// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassReplicationTrait.h"

#ifdef MASSREPLICATION_MassReplicationTrait_generated_h
#error "MassReplicationTrait.generated.h already included, missing '#pragma once' in MassReplicationTrait.h"
#endif
#define MASSREPLICATION_MassReplicationTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassReplicationTrait ****************************************************
struct Z_Construct_UClass_UMassReplicationTrait_Statics;
MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationTrait_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTrait_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassReplicationTrait(); \
	friend struct ::Z_Construct_UClass_UMassReplicationTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPLICATION_API UClass* ::Z_Construct_UClass_UMassReplicationTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassReplicationTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassReplication"), Z_Construct_UClass_UMassReplicationTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassReplicationTrait)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTrait_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSREPLICATION_API UMassReplicationTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassReplicationTrait(UMassReplicationTrait&&) = delete; \
	UMassReplicationTrait(const UMassReplicationTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPLICATION_API, UMassReplicationTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassReplicationTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassReplicationTrait) \
	MASSREPLICATION_API virtual ~UMassReplicationTrait();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTrait_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTrait_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTrait_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTrait_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassReplicationTrait;

// ********** End Class UMassReplicationTrait ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
