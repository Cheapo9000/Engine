// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IDataSourceFilterSetInterface.h"

#ifdef SOURCEFILTERINGCORE_IDataSourceFilterSetInterface_generated_h
#error "IDataSourceFilterSetInterface.generated.h already included, missing '#pragma once' in IDataSourceFilterSetInterface.h"
#endif
#define SOURCEFILTERINGCORE_IDataSourceFilterSetInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDataSourceFilterSetInterface ****************************************
struct Z_Construct_UClass_UDataSourceFilterSetInterface_Statics;
SOURCEFILTERINGCORE_API UClass* Z_Construct_UClass_UDataSourceFilterSetInterface_NoRegister();

#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterSetInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOURCEFILTERINGCORE_API UDataSourceFilterSetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataSourceFilterSetInterface(UDataSourceFilterSetInterface&&) = delete; \
	UDataSourceFilterSetInterface(const UDataSourceFilterSetInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOURCEFILTERINGCORE_API, UDataSourceFilterSetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSourceFilterSetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataSourceFilterSetInterface) \
	virtual ~UDataSourceFilterSetInterface() = default;


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterSetInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataSourceFilterSetInterface(); \
	friend struct ::Z_Construct_UClass_UDataSourceFilterSetInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOURCEFILTERINGCORE_API UClass* ::Z_Construct_UClass_UDataSourceFilterSetInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataSourceFilterSetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SourceFilteringCore"), Z_Construct_UClass_UDataSourceFilterSetInterface_NoRegister) \
	DECLARE_SERIALIZER(UDataSourceFilterSetInterface)


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterSetInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterSetInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterSetInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterSetInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataSourceFilterSetInterface() {} \
public: \
	typedef UDataSourceFilterSetInterface UClassType; \
	typedef IDataSourceFilterSetInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterSetInterface_h_10_PROLOG
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterSetInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterSetInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataSourceFilterSetInterface;

// ********** End Interface UDataSourceFilterSetInterface ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterSetInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
