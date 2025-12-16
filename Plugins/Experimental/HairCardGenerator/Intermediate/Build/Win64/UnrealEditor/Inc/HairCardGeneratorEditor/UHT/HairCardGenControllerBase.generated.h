// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HairCardGenControllerBase.h"

#ifdef HAIRCARDGENERATOREDITOR_HairCardGenControllerBase_generated_h
#error "HairCardGenControllerBase.generated.h already included, missing '#pragma once' in HairCardGenControllerBase.h"
#endif
#define HAIRCARDGENERATOREDITOR_HairCardGenControllerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHairCardGeneratorPluginSettings;
class UStaticMesh;
struct FHairCardGen_GroomData;

// ********** Begin ScriptStruct FHairCardGen_StrandData *******************************************
struct Z_Construct_UScriptStruct_FHairCardGen_StrandData_Statics;
#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGenControllerBase_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHairCardGen_StrandData_Statics; \
	HAIRCARDGENERATOREDITOR_API static class UScriptStruct* StaticStruct();


struct FHairCardGen_StrandData;
// ********** End ScriptStruct FHairCardGen_StrandData *********************************************

// ********** Begin ScriptStruct FHairCardGen_GroomData ********************************************
struct Z_Construct_UScriptStruct_FHairCardGen_GroomData_Statics;
#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGenControllerBase_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHairCardGen_GroomData_Statics; \
	HAIRCARDGENERATOREDITOR_API static class UScriptStruct* StaticStruct();


struct FHairCardGen_GroomData;
// ********** End ScriptStruct FHairCardGen_GroomData **********************************************

// ********** Begin Class UHairCardGenControllerBase ***********************************************
#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGenControllerBase_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateCardsStaticMesh);


#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGenControllerBase_h_62_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UHairCardGenControllerBase_Statics;
HAIRCARDGENERATOREDITOR_API UClass* Z_Construct_UClass_UHairCardGenControllerBase_NoRegister();

#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGenControllerBase_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHairCardGenControllerBase(); \
	friend struct ::Z_Construct_UClass_UHairCardGenControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRCARDGENERATOREDITOR_API UClass* ::Z_Construct_UClass_UHairCardGenControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UHairCardGenControllerBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairCardGeneratorEditor"), Z_Construct_UClass_UHairCardGenControllerBase_NoRegister) \
	DECLARE_SERIALIZER(UHairCardGenControllerBase)


#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGenControllerBase_h_62_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHairCardGenControllerBase(UHairCardGenControllerBase&&) = delete; \
	UHairCardGenControllerBase(const UHairCardGenControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHairCardGenControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHairCardGenControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHairCardGenControllerBase) \
	NO_API virtual ~UHairCardGenControllerBase();


#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGenControllerBase_h_59_PROLOG
#define FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGenControllerBase_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGenControllerBase_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGenControllerBase_h_62_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGenControllerBase_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGenControllerBase_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHairCardGenControllerBase;

// ********** End Class UHairCardGenControllerBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_HairCardGenerator_Source_HairCardGeneratorEditor_Private_HairCardGenControllerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
