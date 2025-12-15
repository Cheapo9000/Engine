// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowContent.h"

#ifdef DATAFLOWENGINE_DataflowContent_generated_h
#error "DataflowContent.generated.h already included, missing '#pragma once' in DataflowContent.h"
#endif
#define DATAFLOWENGINE_DataflowContent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDataflowContentOwner ************************************************
struct Z_Construct_UClass_UDataflowContentOwner_Statics;
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowContentOwner_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWENGINE_API UDataflowContentOwner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowContentOwner(UDataflowContentOwner&&) = delete; \
	UDataflowContentOwner(const UDataflowContentOwner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWENGINE_API, UDataflowContentOwner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowContentOwner); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowContentOwner) \
	virtual ~UDataflowContentOwner() = default;


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_33_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowContentOwner(); \
	friend struct ::Z_Construct_UClass_UDataflowContentOwner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWENGINE_API UClass* ::Z_Construct_UClass_UDataflowContentOwner_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowContentOwner, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowEngine"), Z_Construct_UClass_UDataflowContentOwner_NoRegister) \
	DECLARE_SERIALIZER(UDataflowContentOwner)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_33_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_33_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_33_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowContentOwner() {} \
public: \
	typedef UDataflowContentOwner UClassType; \
	typedef IDataflowContentOwner ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_30_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowContentOwner;

// ********** End Interface UDataflowContentOwner **************************************************

// ********** Begin Class UDataflowBaseContent *****************************************************
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_78_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDataflowBaseContent, DATAFLOWENGINE_API)


struct Z_Construct_UClass_UDataflowBaseContent_Statics;
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowBaseContent_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowBaseContent(); \
	friend struct ::Z_Construct_UClass_UDataflowBaseContent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWENGINE_API UClass* ::Z_Construct_UClass_UDataflowBaseContent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowBaseContent, UDataflowContextObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEngine"), Z_Construct_UClass_UDataflowBaseContent_NoRegister) \
	DECLARE_SERIALIZER(UDataflowBaseContent) \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_78_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_78_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowBaseContent(UDataflowBaseContent&&) = delete; \
	UDataflowBaseContent(const UDataflowBaseContent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWENGINE_API, UDataflowBaseContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowBaseContent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataflowBaseContent)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_75_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowBaseContent;

// ********** End Class UDataflowBaseContent *******************************************************

// ********** Begin Class UDataflowSkeletalContent *************************************************
struct Z_Construct_UClass_UDataflowSkeletalContent_Statics;
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowSkeletalContent_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_217_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowSkeletalContent(); \
	friend struct ::Z_Construct_UClass_UDataflowSkeletalContent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWENGINE_API UClass* ::Z_Construct_UClass_UDataflowSkeletalContent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowSkeletalContent, UDataflowBaseContent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEngine"), Z_Construct_UClass_UDataflowSkeletalContent_NoRegister) \
	DECLARE_SERIALIZER(UDataflowSkeletalContent)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_217_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowSkeletalContent(UDataflowSkeletalContent&&) = delete; \
	UDataflowSkeletalContent(const UDataflowSkeletalContent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWENGINE_API, UDataflowSkeletalContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowSkeletalContent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataflowSkeletalContent)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_214_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_217_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_217_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_217_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowSkeletalContent;

// ********** End Class UDataflowSkeletalContent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
