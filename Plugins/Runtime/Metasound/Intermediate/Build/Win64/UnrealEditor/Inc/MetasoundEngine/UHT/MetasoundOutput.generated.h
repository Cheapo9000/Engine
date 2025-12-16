// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundOutput.h"

#ifdef METASOUNDENGINE_MetasoundOutput_generated_h
#error "MetasoundOutput.generated.h already included, missing '#pragma once' in MetasoundOutput.h"
#endif
#define METASOUNDENGINE_MetasoundOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMetaSoundOutput;

// ********** Begin ScriptStruct FMetaSoundOutput **************************************************
struct Z_Construct_UScriptStruct_FMetaSoundOutput_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaSoundOutput_Statics; \
	METASOUNDENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSoundGeneratorOutput Super;


struct FMetaSoundOutput;
// ********** End ScriptStruct FMetaSoundOutput ****************************************************

// ********** Begin Class UMetasoundOutputBlueprintAccess ******************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h_144_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTimeSeconds); \
	DECLARE_FUNCTION(execIsTime); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execIsString); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execIsBool); \
	DECLARE_FUNCTION(execGetInt32); \
	DECLARE_FUNCTION(execIsInt32); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execIsFloat);


struct Z_Construct_UClass_UMetasoundOutputBlueprintAccess_Statics;
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundOutputBlueprintAccess_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h_144_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundOutputBlueprintAccess(); \
	friend struct ::Z_Construct_UClass_UMetasoundOutputBlueprintAccess_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDENGINE_API UClass* ::Z_Construct_UClass_UMetasoundOutputBlueprintAccess_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundOutputBlueprintAccess, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), Z_Construct_UClass_UMetasoundOutputBlueprintAccess_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundOutputBlueprintAccess)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h_144_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetasoundOutputBlueprintAccess(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundOutputBlueprintAccess(UMetasoundOutputBlueprintAccess&&) = delete; \
	UMetasoundOutputBlueprintAccess(const UMetasoundOutputBlueprintAccess&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetasoundOutputBlueprintAccess); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundOutputBlueprintAccess); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundOutputBlueprintAccess) \
	NO_API virtual ~UMetasoundOutputBlueprintAccess();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h_141_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h_144_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h_144_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h_144_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundOutputBlueprintAccess;

// ********** End Class UMetasoundOutputBlueprintAccess ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
