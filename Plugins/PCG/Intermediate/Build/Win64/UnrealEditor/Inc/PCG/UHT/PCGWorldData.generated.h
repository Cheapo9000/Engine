// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGWorldData.h"

#ifdef PCG_PCGWorldData_generated_h
#error "PCGWorldData.generated.h already included, missing '#pragma once' in PCGWorldData.h"
#endif
#define PCG_PCGWorldData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGWorldCommonQueryParams ****************************************
struct Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGWorldCommonQueryParams_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGWorldCommonQueryParams;
// ********** End ScriptStruct FPCGWorldCommonQueryParams ******************************************

// ********** Begin ScriptStruct FPCGWorldRaycastQueryParams ***************************************
struct Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_138_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGWorldCommonQueryParams Super;


struct FPCGWorldRaycastQueryParams;
// ********** End ScriptStruct FPCGWorldRaycastQueryParams *****************************************

// ********** Begin ScriptStruct FPCGWorldVolumetricQueryParams ************************************
struct Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_245_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGWorldCommonQueryParams Super;


struct FPCGWorldVolumetricQueryParams;
// ********** End ScriptStruct FPCGWorldVolumetricQueryParams **************************************

// ********** Begin ScriptStruct FPCGWorldRayHitQueryParams ****************************************
struct Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_267_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGWorldRaycastQueryParams Super;


struct FPCGWorldRayHitQueryParams;
// ********** End ScriptStruct FPCGWorldRayHitQueryParams ******************************************

// ********** Begin ScriptStruct FPCGWorldQueryActorFilterCache ************************************
struct Z_Construct_UScriptStruct_FPCGWorldQueryActorFilterCache_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_301_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGWorldQueryActorFilterCache_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGWorldQueryActorFilterCache;
// ********** End ScriptStruct FPCGWorldQueryActorFilterCache **************************************

// ********** Begin Class UPCGWorldVolumetricData **************************************************
struct Z_Construct_UClass_UPCGWorldVolumetricData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGWorldVolumetricData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_332_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGWorldVolumetricData(); \
	friend struct ::Z_Construct_UClass_UPCGWorldVolumetricData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGWorldVolumetricData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGWorldVolumetricData, UPCGVolumeData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGWorldVolumetricData_NoRegister) \
	DECLARE_SERIALIZER(UPCGWorldVolumetricData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_332_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGWorldVolumetricData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGWorldVolumetricData(UPCGWorldVolumetricData&&) = delete; \
	UPCGWorldVolumetricData(const UPCGWorldVolumetricData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGWorldVolumetricData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGWorldVolumetricData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGWorldVolumetricData) \
	PCG_API virtual ~UPCGWorldVolumetricData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_329_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_332_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_332_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_332_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGWorldVolumetricData;

// ********** End Class UPCGWorldVolumetricData ****************************************************

// ********** Begin Class UPCGWorldRayHitData ******************************************************
struct Z_Construct_UClass_UPCGWorldRayHitData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGWorldRayHitData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_374_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGWorldRayHitData(); \
	friend struct ::Z_Construct_UClass_UPCGWorldRayHitData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGWorldRayHitData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGWorldRayHitData, UPCGSurfaceData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGWorldRayHitData_NoRegister) \
	DECLARE_SERIALIZER(UPCGWorldRayHitData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_374_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGWorldRayHitData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGWorldRayHitData(UPCGWorldRayHitData&&) = delete; \
	UPCGWorldRayHitData(const UPCGWorldRayHitData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGWorldRayHitData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGWorldRayHitData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGWorldRayHitData) \
	PCG_API virtual ~UPCGWorldRayHitData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_371_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_374_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_374_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h_374_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGWorldRayHitData;

// ********** End Class UPCGWorldRayHitData ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGWorldData_h

// ********** Begin Enum EPCGWorldQueryFilterByTag *************************************************
#define FOREACH_ENUM_EPCGWORLDQUERYFILTERBYTAG(op) \
	op(EPCGWorldQueryFilterByTag::NoTagFilter) \
	op(EPCGWorldQueryFilterByTag::IncludeTagged) \
	op(EPCGWorldQueryFilterByTag::ExcludeTagged) 

enum class EPCGWorldQueryFilterByTag;
template<> struct TIsUEnumClass<EPCGWorldQueryFilterByTag> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGWorldQueryFilterByTag>();
// ********** End Enum EPCGWorldQueryFilterByTag ***************************************************

// ********** Begin Enum EPCGWorldQueryFilter ******************************************************
#define FOREACH_ENUM_EPCGWORLDQUERYFILTER(op) \
	op(EPCGWorldQueryFilter::None) \
	op(EPCGWorldQueryFilter::Include) \
	op(EPCGWorldQueryFilter::Exclude) \
	op(EPCGWorldQueryFilter::Require) \
	op(EPCGWorldQueryFilter::NoTagFilter) \
	op(EPCGWorldQueryFilter::IncludeTagged) \
	op(EPCGWorldQueryFilter::ExcludeTagged) 

enum class EPCGWorldQueryFilter : uint8;
template<> struct TIsUEnumClass<EPCGWorldQueryFilter> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGWorldQueryFilter>();
// ********** End Enum EPCGWorldQueryFilter ********************************************************

// ********** Begin Enum EPCGWorldQuerySelectLandscapeHits *****************************************
#define FOREACH_ENUM_EPCGWORLDQUERYSELECTLANDSCAPEHITS(op) \
	op(EPCGWorldQuerySelectLandscapeHits::Exclude) \
	op(EPCGWorldQuerySelectLandscapeHits::Include) \
	op(EPCGWorldQuerySelectLandscapeHits::Require) 

enum class EPCGWorldQuerySelectLandscapeHits : uint8;
template<> struct TIsUEnumClass<EPCGWorldQuerySelectLandscapeHits> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGWorldQuerySelectLandscapeHits>();
// ********** End Enum EPCGWorldQuerySelectLandscapeHits *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
