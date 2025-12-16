// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GenerateLODMeshesTool.h"

#ifdef HAIRMODELINGTOOLSET_GenerateLODMeshesTool_generated_h
#error "GenerateLODMeshesTool.generated.h already included, missing '#pragma once' in GenerateLODMeshesTool.h"
#endif
#define HAIRMODELINGTOOLSET_GenerateLODMeshesTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGenerateLODMeshesToolBuilder ********************************************
struct Z_Construct_UClass_UGenerateLODMeshesToolBuilder_Statics;
HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGenerateLODMeshesToolBuilder_NoRegister();

#define FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenerateLODMeshesToolBuilder(); \
	friend struct ::Z_Construct_UClass_UGenerateLODMeshesToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRMODELINGTOOLSET_API UClass* ::Z_Construct_UClass_UGenerateLODMeshesToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenerateLODMeshesToolBuilder, USingleSelectionMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/HairModelingToolset"), Z_Construct_UClass_UGenerateLODMeshesToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UGenerateLODMeshesToolBuilder)


#define FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenerateLODMeshesToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenerateLODMeshesToolBuilder(UGenerateLODMeshesToolBuilder&&) = delete; \
	UGenerateLODMeshesToolBuilder(const UGenerateLODMeshesToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenerateLODMeshesToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenerateLODMeshesToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenerateLODMeshesToolBuilder) \
	NO_API virtual ~UGenerateLODMeshesToolBuilder();


#define FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenerateLODMeshesToolBuilder;

// ********** End Class UGenerateLODMeshesToolBuilder **********************************************

// ********** Begin ScriptStruct FLODLevelGenerateSettings *****************************************
struct Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics;
#define FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLODLevelGenerateSettings;
// ********** End ScriptStruct FLODLevelGenerateSettings *******************************************

// ********** Begin Class UGenerateLODMeshesToolProperties *****************************************
struct Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics;
HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGenerateLODMeshesToolProperties_NoRegister();

#define FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenerateLODMeshesToolProperties(); \
	friend struct ::Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRMODELINGTOOLSET_API UClass* ::Z_Construct_UClass_UGenerateLODMeshesToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenerateLODMeshesToolProperties, UMeshConstraintProperties, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/HairModelingToolset"), Z_Construct_UClass_UGenerateLODMeshesToolProperties_NoRegister) \
	DECLARE_SERIALIZER(UGenerateLODMeshesToolProperties)


#define FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_73_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenerateLODMeshesToolProperties(UGenerateLODMeshesToolProperties&&) = delete; \
	UGenerateLODMeshesToolProperties(const UGenerateLODMeshesToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenerateLODMeshesToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenerateLODMeshesToolProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGenerateLODMeshesToolProperties) \
	NO_API virtual ~UGenerateLODMeshesToolProperties();


#define FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_70_PROLOG
#define FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenerateLODMeshesToolProperties;

// ********** End Class UGenerateLODMeshesToolProperties *******************************************

// ********** Begin Class UGenerateLODMeshesTool ***************************************************
struct Z_Construct_UClass_UGenerateLODMeshesTool_Statics;
HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGenerateLODMeshesTool_NoRegister();

#define FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_151_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenerateLODMeshesTool(); \
	friend struct ::Z_Construct_UClass_UGenerateLODMeshesTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRMODELINGTOOLSET_API UClass* ::Z_Construct_UClass_UGenerateLODMeshesTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenerateLODMeshesTool, USingleSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/HairModelingToolset"), Z_Construct_UClass_UGenerateLODMeshesTool_NoRegister) \
	DECLARE_SERIALIZER(UGenerateLODMeshesTool)


#define FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_151_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenerateLODMeshesTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenerateLODMeshesTool(UGenerateLODMeshesTool&&) = delete; \
	UGenerateLODMeshesTool(const UGenerateLODMeshesTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenerateLODMeshesTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenerateLODMeshesTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGenerateLODMeshesTool) \
	NO_API virtual ~UGenerateLODMeshesTool();


#define FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_148_PROLOG
#define FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_151_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_151_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_151_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenerateLODMeshesTool;

// ********** End Class UGenerateLODMeshesTool *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
