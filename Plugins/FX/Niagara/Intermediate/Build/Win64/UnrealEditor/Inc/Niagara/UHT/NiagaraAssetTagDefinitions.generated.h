// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraAssetTagDefinitions.h"

#ifdef NIAGARA_NiagaraAssetTagDefinitions_generated_h
#error "NiagaraAssetTagDefinitions.generated.h already included, missing '#pragma once' in NiagaraAssetTagDefinitions.h"
#endif
#define NIAGARA_NiagaraAssetTagDefinitions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraAssetTagDefinition ****************************************
struct Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraAssetTagDefinition;
// ********** End ScriptStruct FNiagaraAssetTagDefinition ******************************************

// ********** Begin ScriptStruct FNiagaraAssetTagDefinitionReference *******************************
struct Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_96_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraAssetTagDefinitionReference;
// ********** End ScriptStruct FNiagaraAssetTagDefinitionReference *********************************

// ********** Begin Class UDEPRECATED_NiagaraAssetTagDefinitions ***********************************
struct Z_Construct_UClass_UDEPRECATED_NiagaraAssetTagDefinitions_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UDEPRECATED_NiagaraAssetTagDefinitions_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_NiagaraAssetTagDefinitions(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_NiagaraAssetTagDefinitions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UDEPRECATED_NiagaraAssetTagDefinitions_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_NiagaraAssetTagDefinitions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UDEPRECATED_NiagaraAssetTagDefinitions_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_NiagaraAssetTagDefinitions)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_128_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UDEPRECATED_NiagaraAssetTagDefinitions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_NiagaraAssetTagDefinitions(UDEPRECATED_NiagaraAssetTagDefinitions&&) = delete; \
	UDEPRECATED_NiagaraAssetTagDefinitions(const UDEPRECATED_NiagaraAssetTagDefinitions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UDEPRECATED_NiagaraAssetTagDefinitions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_NiagaraAssetTagDefinitions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_NiagaraAssetTagDefinitions) \
	NIAGARA_API virtual ~UDEPRECATED_NiagaraAssetTagDefinitions();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_125_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_128_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_128_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_NiagaraAssetTagDefinitions;

// ********** End Class UDEPRECATED_NiagaraAssetTagDefinitions *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h

// ********** Begin Enum ENiagaraAssetLibraryAssetTypes ********************************************
#define FOREACH_ENUM_ENIAGARAASSETLIBRARYASSETTYPES(op) \
	op(ENiagaraAssetLibraryAssetTypes::Emitters) \
	op(ENiagaraAssetLibraryAssetTypes::Systems) \
	op(ENiagaraAssetLibraryAssetTypes::Scripts) 

enum class ENiagaraAssetLibraryAssetTypes : uint8;
template<> struct TIsUEnumClass<ENiagaraAssetLibraryAssetTypes> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraAssetLibraryAssetTypes>();
// ********** End Enum ENiagaraAssetLibraryAssetTypes **********************************************

// ********** Begin Enum ENiagaraAssetTagDefinitionImportance **************************************
#define FOREACH_ENUM_ENIAGARAASSETTAGDEFINITIONIMPORTANCE(op) \
	op(ENiagaraAssetTagDefinitionImportance::Primary) \
	op(ENiagaraAssetTagDefinitionImportance::Secondary) \
	op(ENiagaraAssetTagDefinitionImportance::Internal) 

enum class ENiagaraAssetTagDefinitionImportance : uint8;
template<> struct TIsUEnumClass<ENiagaraAssetTagDefinitionImportance> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraAssetTagDefinitionImportance>();
// ********** End Enum ENiagaraAssetTagDefinitionImportance ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
