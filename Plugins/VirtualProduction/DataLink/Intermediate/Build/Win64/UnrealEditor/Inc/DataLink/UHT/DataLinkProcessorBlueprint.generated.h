// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkProcessorBlueprint.h"

#ifdef DATALINK_DataLinkProcessorBlueprint_generated_h
#error "DataLinkProcessorBlueprint.generated.h already included, missing '#pragma once' in DataLinkProcessorBlueprint.h"
#endif
#define DATALINK_DataLinkProcessorBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EDataLinkExecutionResult : uint8;
struct FInstancedStruct;

// ********** Begin Class UDataLinkProcessorBlueprint **********************************************
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkProcessorBlueprint_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetContextObject);


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkProcessorBlueprint_h_11_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDataLinkProcessorBlueprint_Statics;
DATALINK_API UClass* Z_Construct_UClass_UDataLinkProcessorBlueprint_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkProcessorBlueprint_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkProcessorBlueprint(); \
	friend struct ::Z_Construct_UClass_UDataLinkProcessorBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINK_API UClass* ::Z_Construct_UClass_UDataLinkProcessorBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkProcessorBlueprint, UDataLinkProcessor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataLink"), Z_Construct_UClass_UDataLinkProcessorBlueprint_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkProcessorBlueprint)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkProcessorBlueprint_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINK_API UDataLinkProcessorBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkProcessorBlueprint(UDataLinkProcessorBlueprint&&) = delete; \
	UDataLinkProcessorBlueprint(const UDataLinkProcessorBlueprint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINK_API, UDataLinkProcessorBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkProcessorBlueprint); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkProcessorBlueprint) \
	DATALINK_API virtual ~UDataLinkProcessorBlueprint();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkProcessorBlueprint_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkProcessorBlueprint_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkProcessorBlueprint_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkProcessorBlueprint_h_11_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkProcessorBlueprint_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkProcessorBlueprint_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkProcessorBlueprint;

// ********** End Class UDataLinkProcessorBlueprint ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkProcessorBlueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
