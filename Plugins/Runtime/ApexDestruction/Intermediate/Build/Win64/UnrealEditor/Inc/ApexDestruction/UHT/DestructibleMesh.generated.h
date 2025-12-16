// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DestructibleMesh.h"

#ifdef APEXDESTRUCTION_DestructibleMesh_generated_h
#error "DestructibleMesh.generated.h already included, missing '#pragma once' in DestructibleMesh.h"
#endif
#define APEXDESTRUCTION_DestructibleMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDestructibleDepthParameters **************************************
struct Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics;
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


struct FDestructibleDepthParameters;
// ********** End ScriptStruct FDestructibleDepthParameters ****************************************

// ********** Begin ScriptStruct FDestructibleParametersFlag ***************************************
struct Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics;
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


struct FDestructibleParametersFlag;
// ********** End ScriptStruct FDestructibleParametersFlag *****************************************

// ********** Begin ScriptStruct FDestructibleDamageParameters *************************************
struct Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics;
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_153_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


struct FDestructibleDamageParameters;
// ********** End ScriptStruct FDestructibleDamageParameters ***************************************

// ********** Begin ScriptStruct FDestructibleDebrisParameters *************************************
struct Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics;
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_217_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


struct FDestructibleDebrisParameters;
// ********** End ScriptStruct FDestructibleDebrisParameters ***************************************

// ********** Begin ScriptStruct FDestructibleAdvancedParameters ***********************************
struct Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics;
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_271_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


struct FDestructibleAdvancedParameters;
// ********** End ScriptStruct FDestructibleAdvancedParameters *************************************

// ********** Begin ScriptStruct FDestructibleSpecialHierarchyDepths *******************************
struct Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics;
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_317_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


struct FDestructibleSpecialHierarchyDepths;
// ********** End ScriptStruct FDestructibleSpecialHierarchyDepths *********************************

// ********** Begin ScriptStruct FDestructibleParameters *******************************************
struct Z_Construct_UScriptStruct_FDestructibleParameters_Statics;
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_373_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDestructibleParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


struct FDestructibleParameters;
// ********** End ScriptStruct FDestructibleParameters *********************************************

// ********** Begin Class UDestructibleMesh ********************************************************
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_413_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDestructibleMesh, APEXDESTRUCTION_API)


struct Z_Construct_UClass_UDestructibleMesh_Statics;
APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleMesh_NoRegister();

#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_413_INCLASS \
private: \
	static void StaticRegisterNativesUDestructibleMesh(); \
	friend struct ::Z_Construct_UClass_UDestructibleMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend APEXDESTRUCTION_API UClass* ::Z_Construct_UClass_UDestructibleMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UDestructibleMesh, USkeletalMesh, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ApexDestruction"), Z_Construct_UClass_UDestructibleMesh_NoRegister) \
	DECLARE_SERIALIZER(UDestructibleMesh) \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_413_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_413_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	APEXDESTRUCTION_API UDestructibleMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(APEXDESTRUCTION_API, UDestructibleMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDestructibleMesh(UDestructibleMesh&&) = delete; \
	UDestructibleMesh(const UDestructibleMesh&) = delete; \
	APEXDESTRUCTION_API virtual ~UDestructibleMesh();


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_410_PROLOG
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_413_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_413_INCLASS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_413_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDestructibleMesh;

// ********** End Class UDestructibleMesh **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h

// ********** Begin Enum EImpactDamageOverride *****************************************************
#define FOREACH_ENUM_EIMPACTDAMAGEOVERRIDE(op) \
	op(IDO_None) \
	op(IDO_On) \
	op(IDO_Off) 

enum EImpactDamageOverride : int;
template<> APEXDESTRUCTION_NON_ATTRIBUTED_API UEnum* StaticEnum<EImpactDamageOverride>();
// ********** End Enum EImpactDamageOverride *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
