// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGData.h"

#ifdef PCG_PCGData_generated_h
#error "PCGData.generated.h already included, missing '#pragma once' in PCGData.h"
#endif
#define PCG_PCGData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UPCGData;
class UPCGMetadata;
struct FPCGDataCollection;
struct FPCGPinProperties;
struct FPCGTaggedData;

// ********** Begin Class UPCGData *****************************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMutableMetadata); \
	DECLARE_FUNCTION(execConstMetadata);


struct Z_Construct_UClass_UPCGData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGData(); \
	friend struct ::Z_Construct_UClass_UPCGData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGData_NoRegister) \
	DECLARE_SERIALIZER(UPCGData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGData(UPCGData&&) = delete; \
	UPCGData(const UPCGData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGData) \
	PCG_API virtual ~UPCGData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_50_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGData;

// ********** End Class UPCGData *******************************************************************

// ********** Begin ScriptStruct FPCGTaggedData ****************************************************
struct Z_Construct_UScriptStruct_FPCGTaggedData_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_191_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGTaggedData_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGTaggedData;
// ********** End ScriptStruct FPCGTaggedData ******************************************************

// ********** Begin ScriptStruct FPCGDataCollection ************************************************
struct Z_Construct_UScriptStruct_FPCGDataCollection_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_232_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataCollection_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGDataCollection;
// ********** End ScriptStruct FPCGDataCollection **************************************************

// ********** Begin Class UPCGDataFunctionLibrary **************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_407_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeTaggedData); \
	DECLARE_FUNCTION(execBreakTaggedData); \
	DECLARE_FUNCTION(execGetAllSettings); \
	DECLARE_FUNCTION(execGetParamsByTag); \
	DECLARE_FUNCTION(execGetParamsByPinLabel); \
	DECLARE_FUNCTION(execGetParams); \
	DECLARE_FUNCTION(execGetInputsByTag); \
	DECLARE_FUNCTION(execGetInputsByPinLabel); \
	DECLARE_FUNCTION(execGetInputs); \
	DECLARE_FUNCTION(execAddToCollection); \
	DECLARE_FUNCTION(execGetTypedInputsByTag); \
	DECLARE_FUNCTION(execGetTypedInputsByPinLabel); \
	DECLARE_FUNCTION(execGetTypedInputsByPin); \
	DECLARE_FUNCTION(execGetTypedInputs);


struct Z_Construct_UClass_UPCGDataFunctionLibrary_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_407_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UPCGDataFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataFunctionLibrary)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_407_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDataFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataFunctionLibrary(UPCGDataFunctionLibrary&&) = delete; \
	UPCGDataFunctionLibrary(const UPCGDataFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDataFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataFunctionLibrary) \
	PCG_API virtual ~UPCGDataFunctionLibrary();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_404_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_407_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_407_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_407_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h_407_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataFunctionLibrary;

// ********** End Class UPCGDataFunctionLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGData_h

// ********** Begin Enum EPCGDataUsage *************************************************************
#define FOREACH_ENUM_EPCGDATAUSAGE(op) \
	op(EPCGDataUsage::None) \
	op(EPCGDataUsage::GraphExecutorTaskOutput) \
	op(EPCGDataUsage::ComponentOutputData) \
	op(EPCGDataUsage::ComponentPerPinOutputData) \
	op(EPCGDataUsage::ComponentInspectionData) 

enum class EPCGDataUsage : uint8;
template<> struct TIsUEnumClass<EPCGDataUsage> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGDataUsage>();
// ********** End Enum EPCGDataUsage ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
