// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkelMeshDNAUtils.h"

#ifdef RIGLOGICMODULE_SkelMeshDNAUtils_generated_h
#error "SkelMeshDNAUtils.generated.h already included, missing '#pragma once' in SkelMeshDNAUtils.h"
#endif
#define RIGLOGICMODULE_SkelMeshDNAUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkelMeshDNAUtils ********************************************************
struct Z_Construct_UClass_USkelMeshDNAUtils_Statics;
RIGLOGICMODULE_API UClass* Z_Construct_UClass_USkelMeshDNAUtils_NoRegister();

#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUSkelMeshDNAUtils(); \
	friend struct ::Z_Construct_UClass_USkelMeshDNAUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGLOGICMODULE_API UClass* ::Z_Construct_UClass_USkelMeshDNAUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(USkelMeshDNAUtils, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RigLogicModule"), Z_Construct_UClass_USkelMeshDNAUtils_NoRegister) \
	DECLARE_SERIALIZER(USkelMeshDNAUtils)


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGLOGICMODULE_API USkelMeshDNAUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkelMeshDNAUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGLOGICMODULE_API, USkelMeshDNAUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkelMeshDNAUtils); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkelMeshDNAUtils(USkelMeshDNAUtils&&) = delete; \
	USkelMeshDNAUtils(const USkelMeshDNAUtils&) = delete; \
	RIGLOGICMODULE_API virtual ~USkelMeshDNAUtils();


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_29_PROLOG
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_32_INCLASS \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkelMeshDNAUtils;

// ********** End Class USkelMeshDNAUtils **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h

// ********** Begin Enum ELodUpdateOption **********************************************************
#define FOREACH_ENUM_ELODUPDATEOPTION(op) \
	op(ELodUpdateOption::LOD0Only) \
	op(ELodUpdateOption::LOD0AndLOD1Only) \
	op(ELodUpdateOption::LOD1AndHigher) \
	op(ELodUpdateOption::All) 

enum class ELodUpdateOption : uint8;
template<> struct TIsUEnumClass<ELodUpdateOption> { enum { Value = true }; };
template<> RIGLOGICMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELodUpdateOption>();
// ********** End Enum ELodUpdateOption ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
