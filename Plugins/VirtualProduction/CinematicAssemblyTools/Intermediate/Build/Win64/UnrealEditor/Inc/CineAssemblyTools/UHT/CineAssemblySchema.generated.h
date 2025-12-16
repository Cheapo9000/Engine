// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CineAssemblySchema.h"

#ifdef CINEASSEMBLYTOOLS_CineAssemblySchema_generated_h
#error "CineAssemblySchema.generated.h already included, missing '#pragma once' in CineAssemblySchema.h"
#endif
#define CINEASSEMBLYTOOLS_CineAssemblySchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAssemblyMetadataDesc *********************************************
struct Z_Construct_UScriptStruct_FAssemblyMetadataDesc_Statics;
#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssemblySchema_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssemblyMetadataDesc_Statics; \
	CINEASSEMBLYTOOLS_API static class UScriptStruct* StaticStruct();


struct FAssemblyMetadataDesc;
// ********** End ScriptStruct FAssemblyMetadataDesc ***********************************************

// ********** Begin Class UCineAssemblySchema ******************************************************
#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssemblySchema_h_58_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCineAssemblySchema, CINEASSEMBLYTOOLS_API)


struct Z_Construct_UClass_UCineAssemblySchema_Statics;
CINEASSEMBLYTOOLS_API UClass* Z_Construct_UClass_UCineAssemblySchema_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssemblySchema_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCineAssemblySchema(); \
	friend struct ::Z_Construct_UClass_UCineAssemblySchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINEASSEMBLYTOOLS_API UClass* ::Z_Construct_UClass_UCineAssemblySchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UCineAssemblySchema, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CineAssemblyTools"), Z_Construct_UClass_UCineAssemblySchema_NoRegister) \
	DECLARE_SERIALIZER(UCineAssemblySchema) \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssemblySchema_h_58_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssemblySchema_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCineAssemblySchema(UCineAssemblySchema&&) = delete; \
	UCineAssemblySchema(const UCineAssemblySchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CINEASSEMBLYTOOLS_API, UCineAssemblySchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineAssemblySchema); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCineAssemblySchema) \
	CINEASSEMBLYTOOLS_API virtual ~UCineAssemblySchema();


#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssemblySchema_h_55_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssemblySchema_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssemblySchema_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssemblySchema_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCineAssemblySchema;

// ********** End Class UCineAssemblySchema ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssemblySchema_h

// ********** Begin Enum ECineAssemblyMetadataType *************************************************
#define FOREACH_ENUM_ECINEASSEMBLYMETADATATYPE(op) \
	op(ECineAssemblyMetadataType::String) \
	op(ECineAssemblyMetadataType::Bool) \
	op(ECineAssemblyMetadataType::Integer) \
	op(ECineAssemblyMetadataType::Float) \
	op(ECineAssemblyMetadataType::AssetPath) \
	op(ECineAssemblyMetadataType::CineAssembly) 

enum class ECineAssemblyMetadataType : uint8;
template<> struct TIsUEnumClass<ECineAssemblyMetadataType> { enum { Value = true }; };
template<> CINEASSEMBLYTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECineAssemblyMetadataType>();
// ********** End Enum ECineAssemblyMetadataType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
