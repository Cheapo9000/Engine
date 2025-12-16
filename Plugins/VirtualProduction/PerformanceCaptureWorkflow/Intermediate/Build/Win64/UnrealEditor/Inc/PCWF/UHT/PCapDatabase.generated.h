// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCapDatabase.h"

#ifdef PERFORMANCECAPTUREWORKFLOW_PCapDatabase_generated_h
#error "PCapDatabase.generated.h already included, missing '#pragma once' in PCapDatabase.h"
#endif
#define PERFORMANCECAPTUREWORKFLOW_PCapDatabase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;
struct FGuid;

// ********** Begin ScriptStruct FPCapRecordBase ***************************************************
struct Z_Construct_UScriptStruct_FPCapRecordBase_Statics;
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCapRecordBase_Statics; \
	PERFORMANCECAPTUREWORKFLOW_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FPCapRecordBase;
// ********** End ScriptStruct FPCapRecordBase *****************************************************

// ********** Begin ScriptStruct FPCapProductionRecord *********************************************
struct Z_Construct_UScriptStruct_FPCapProductionRecord_Statics;
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCapProductionRecord_Statics; \
	PERFORMANCECAPTUREWORKFLOW_API static class UScriptStruct* StaticStruct(); \
	typedef FPCapRecordBase Super;


struct FPCapProductionRecord;
// ********** End ScriptStruct FPCapProductionRecord ***********************************************

// ********** Begin ScriptStruct FPCapTakeRecord ***************************************************
struct Z_Construct_UScriptStruct_FPCapTakeRecord_Statics;
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCapTakeRecord_Statics; \
	PERFORMANCECAPTUREWORKFLOW_API static class UScriptStruct* StaticStruct(); \
	typedef FPCapRecordBase Super;


struct FPCapTakeRecord;
// ********** End ScriptStruct FPCapTakeRecord *****************************************************

// ********** Begin ScriptStruct FPCapSessionRecord ************************************************
struct Z_Construct_UScriptStruct_FPCapSessionRecord_Statics;
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_155_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCapSessionRecord_Statics; \
	PERFORMANCECAPTUREWORKFLOW_API static class UScriptStruct* StaticStruct(); \
	typedef FPCapRecordBase Super;


struct FPCapSessionRecord;
// ********** End ScriptStruct FPCapSessionRecord **************************************************

// ********** Begin ScriptStruct FPCapSlateRecord **************************************************
struct Z_Construct_UScriptStruct_FPCapSlateRecord_Statics;
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_265_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCapSlateRecord_Statics; \
	PERFORMANCECAPTUREWORKFLOW_API static class UScriptStruct* StaticStruct(); \
	typedef FPCapRecordBase Super;


struct FPCapSlateRecord;
// ********** End ScriptStruct FPCapSlateRecord ****************************************************

// ********** Begin Class UPCapDataAsset ***********************************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_296_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAssetUID);


struct Z_Construct_UClass_UPCapDataAsset_Statics;
PERFORMANCECAPTUREWORKFLOW_API UClass* Z_Construct_UClass_UPCapDataAsset_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_296_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCapDataAsset(); \
	friend struct ::Z_Construct_UClass_UPCapDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTUREWORKFLOW_API UClass* ::Z_Construct_UClass_UPCapDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCapDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PerformanceCaptureWorkflow"), Z_Construct_UClass_UPCapDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UPCapDataAsset)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_296_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCapDataAsset(UPCapDataAsset&&) = delete; \
	UPCapDataAsset(const UPCapDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERFORMANCECAPTUREWORKFLOW_API, UPCapDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCapDataAsset); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPCapDataAsset) \
	PERFORMANCECAPTUREWORKFLOW_API virtual ~UPCapDataAsset();


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_293_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_296_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_296_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_296_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_296_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCapDataAsset;

// ********** End Class UPCapDataAsset *************************************************************

// ********** Begin Class UPCapPerformerDataAsset **************************************************
struct Z_Construct_UClass_UPCapPerformerDataAsset_Statics;
PERFORMANCECAPTUREWORKFLOW_API UClass* Z_Construct_UClass_UPCapPerformerDataAsset_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_320_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCapPerformerDataAsset(); \
	friend struct ::Z_Construct_UClass_UPCapPerformerDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTUREWORKFLOW_API UClass* ::Z_Construct_UClass_UPCapPerformerDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCapPerformerDataAsset, UPCapDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PerformanceCaptureWorkflow"), Z_Construct_UClass_UPCapPerformerDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UPCapPerformerDataAsset)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_320_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCapPerformerDataAsset(UPCapPerformerDataAsset&&) = delete; \
	UPCapPerformerDataAsset(const UPCapPerformerDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCapPerformerDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCapPerformerDataAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCapPerformerDataAsset) \
	NO_API virtual ~UPCapPerformerDataAsset();


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_317_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_320_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_320_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_320_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCapPerformerDataAsset;

// ********** End Class UPCapPerformerDataAsset ****************************************************

// ********** Begin Class UPCapCharacterDataAsset **************************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_359_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDisallowedCaptureCharacterActorClasses); \
	DECLARE_FUNCTION(execGetAllowedCaptureCharacterActorClasses);


struct Z_Construct_UClass_UPCapCharacterDataAsset_Statics;
PERFORMANCECAPTUREWORKFLOW_API UClass* Z_Construct_UClass_UPCapCharacterDataAsset_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_359_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCapCharacterDataAsset(); \
	friend struct ::Z_Construct_UClass_UPCapCharacterDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTUREWORKFLOW_API UClass* ::Z_Construct_UClass_UPCapCharacterDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCapCharacterDataAsset, UPCapDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PerformanceCaptureWorkflow"), Z_Construct_UClass_UPCapCharacterDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UPCapCharacterDataAsset)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_359_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCapCharacterDataAsset(UPCapCharacterDataAsset&&) = delete; \
	UPCapCharacterDataAsset(const UPCapCharacterDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCapCharacterDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCapCharacterDataAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCapCharacterDataAsset) \
	NO_API virtual ~UPCapCharacterDataAsset();


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_356_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_359_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_359_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_359_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_359_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCapCharacterDataAsset;

// ********** End Class UPCapCharacterDataAsset ****************************************************

// ********** Begin Class UPCapPropDataAsset *******************************************************
struct Z_Construct_UClass_UPCapPropDataAsset_Statics;
PERFORMANCECAPTUREWORKFLOW_API UClass* Z_Construct_UClass_UPCapPropDataAsset_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_412_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCapPropDataAsset(); \
	friend struct ::Z_Construct_UClass_UPCapPropDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTUREWORKFLOW_API UClass* ::Z_Construct_UClass_UPCapPropDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCapPropDataAsset, UPCapDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PerformanceCaptureWorkflow"), Z_Construct_UClass_UPCapPropDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UPCapPropDataAsset)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_412_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCapPropDataAsset(UPCapPropDataAsset&&) = delete; \
	UPCapPropDataAsset(const UPCapPropDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCapPropDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCapPropDataAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCapPropDataAsset) \
	NO_API virtual ~UPCapPropDataAsset();


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_409_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_412_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_412_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_412_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCapPropDataAsset;

// ********** End Class UPCapPropDataAsset *********************************************************

// ********** Begin Class UPerformanceCaptureDatabaseHelper ****************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_482_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPerformanceCaptureDatabaseHelper_Statics;
PERFORMANCECAPTUREWORKFLOW_API UClass* Z_Construct_UClass_UPerformanceCaptureDatabaseHelper_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_482_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerformanceCaptureDatabaseHelper(); \
	friend struct ::Z_Construct_UClass_UPerformanceCaptureDatabaseHelper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTUREWORKFLOW_API UClass* ::Z_Construct_UClass_UPerformanceCaptureDatabaseHelper_NoRegister(); \
public: \
	DECLARE_CLASS2(UPerformanceCaptureDatabaseHelper, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PerformanceCaptureWorkflow"), Z_Construct_UClass_UPerformanceCaptureDatabaseHelper_NoRegister) \
	DECLARE_SERIALIZER(UPerformanceCaptureDatabaseHelper)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_482_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerformanceCaptureDatabaseHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPerformanceCaptureDatabaseHelper(UPerformanceCaptureDatabaseHelper&&) = delete; \
	UPerformanceCaptureDatabaseHelper(const UPerformanceCaptureDatabaseHelper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerformanceCaptureDatabaseHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerformanceCaptureDatabaseHelper); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerformanceCaptureDatabaseHelper) \
	NO_API virtual ~UPerformanceCaptureDatabaseHelper();


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_479_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_482_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_482_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_482_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h_482_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPerformanceCaptureDatabaseHelper;

// ********** End Class UPerformanceCaptureDatabaseHelper ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapDatabase_h

// ********** Begin Enum EPCapTakeStatus ***********************************************************
#define FOREACH_ENUM_EPCAPTAKESTATUS(op) \
	op(EPCapTakeStatus::ThumbsUp) \
	op(EPCapTakeStatus::ThumbsDown) \
	op(EPCapTakeStatus::Neutral) 

enum class EPCapTakeStatus : uint8;
template<> struct TIsUEnumClass<EPCapTakeStatus> { enum { Value = true }; };
template<> PERFORMANCECAPTUREWORKFLOW_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCapTakeStatus>();
// ********** End Enum EPCapTakeStatus *************************************************************

// ********** Begin Enum EPCapSlateStatus **********************************************************
#define FOREACH_ENUM_EPCAPSLATESTATUS(op) \
	op(EPCapSlateStatus::Incomplete) \
	op(EPCapSlateStatus::Complete) \
	op(EPCapSlateStatus::Skip) 

enum class EPCapSlateStatus : uint8;
template<> struct TIsUEnumClass<EPCapSlateStatus> { enum { Value = true }; };
template<> PERFORMANCECAPTUREWORKFLOW_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCapSlateStatus>();
// ********** End Enum EPCapSlateStatus ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
