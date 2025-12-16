// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IDataSourceFilterInterface.h"

#ifdef SOURCEFILTERINGCORE_IDataSourceFilterInterface_generated_h
#error "IDataSourceFilterInterface.generated.h already included, missing '#pragma once' in IDataSourceFilterInterface.h"
#endif
#define SOURCEFILTERINGCORE_IDataSourceFilterInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataSourceFilterConfiguration ************************************
struct Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics;
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics; \
	SOURCEFILTERINGCORE_API static class UScriptStruct* StaticStruct();


struct FDataSourceFilterConfiguration;
// ********** End ScriptStruct FDataSourceFilterConfiguration **************************************

// ********** Begin Interface UDataSourceFilterInterface *******************************************
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetToolTipText); \
	DECLARE_FUNCTION(execGetDisplayText);


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_33_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDataSourceFilterInterface_Statics;
SOURCEFILTERINGCORE_API UClass* Z_Construct_UClass_UDataSourceFilterInterface_NoRegister();

#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOURCEFILTERINGCORE_API UDataSourceFilterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataSourceFilterInterface(UDataSourceFilterInterface&&) = delete; \
	UDataSourceFilterInterface(const UDataSourceFilterInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOURCEFILTERINGCORE_API, UDataSourceFilterInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSourceFilterInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataSourceFilterInterface) \
	virtual ~UDataSourceFilterInterface() = default;


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_33_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataSourceFilterInterface(); \
	friend struct ::Z_Construct_UClass_UDataSourceFilterInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOURCEFILTERINGCORE_API UClass* ::Z_Construct_UClass_UDataSourceFilterInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataSourceFilterInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SourceFilteringCore"), Z_Construct_UClass_UDataSourceFilterInterface_NoRegister) \
	DECLARE_SERIALIZER(UDataSourceFilterInterface)


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_33_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_33_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_33_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataSourceFilterInterface() {} \
public: \
	typedef UDataSourceFilterInterface UClassType; \
	typedef IDataSourceFilterInterface ThisClass; \
	SOURCEFILTERINGCORE_API static void Execute_GetDisplayText(const UObject* O, FText& OutDisplayText); \
	SOURCEFILTERINGCORE_API static void Execute_GetToolTipText(const UObject* O, FText& OutDisplayText); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_30_PROLOG
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_33_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataSourceFilterInterface;

// ********** End Interface UDataSourceFilterInterface *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
