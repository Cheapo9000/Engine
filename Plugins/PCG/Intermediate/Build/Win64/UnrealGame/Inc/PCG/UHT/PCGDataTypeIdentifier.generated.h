// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Registry/PCGDataTypeIdentifier.h"

#ifdef PCG_PCGDataTypeIdentifier_generated_h
#error "PCGDataTypeIdentifier.generated.h already included, missing '#pragma once' in PCGDataTypeIdentifier.h"
#endif
#define PCG_PCGDataTypeIdentifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UPCGData;
enum class EPCGExclusiveDataType : uint8;
struct FPCGDataTypeIdentifier;

// ********** Begin ScriptStruct FPCGDataTypeIdentifier ********************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeIdentifier_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataTypeIdentifier_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeIdentifier_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGDataTypeIdentifier;
// ********** End ScriptStruct FPCGDataTypeIdentifier **********************************************

// ********** Begin Class UPCGDataTypeIdentifierHelpers ********************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataTypeIdentifier_h_234_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsIdentical); \
	DECLARE_FUNCTION(execIsSameType); \
	DECLARE_FUNCTION(execIsComposition); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execGetIdentifierFromLegacyType); \
	DECLARE_FUNCTION(execGetIdentifierFromClass);


struct Z_Construct_UClass_UPCGDataTypeIdentifierHelpers_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataTypeIdentifierHelpers_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataTypeIdentifier_h_234_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataTypeIdentifierHelpers(); \
	friend struct ::Z_Construct_UClass_UPCGDataTypeIdentifierHelpers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataTypeIdentifierHelpers_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataTypeIdentifierHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataTypeIdentifierHelpers_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataTypeIdentifierHelpers)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataTypeIdentifier_h_234_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGDataTypeIdentifierHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataTypeIdentifierHelpers(UPCGDataTypeIdentifierHelpers&&) = delete; \
	UPCGDataTypeIdentifierHelpers(const UPCGDataTypeIdentifierHelpers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGDataTypeIdentifierHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataTypeIdentifierHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataTypeIdentifierHelpers) \
	NO_API virtual ~UPCGDataTypeIdentifierHelpers();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataTypeIdentifier_h_231_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataTypeIdentifier_h_234_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataTypeIdentifier_h_234_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataTypeIdentifier_h_234_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataTypeIdentifier_h_234_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataTypeIdentifierHelpers;

// ********** End Class UPCGDataTypeIdentifierHelpers **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_Registry_PCGDataTypeIdentifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
