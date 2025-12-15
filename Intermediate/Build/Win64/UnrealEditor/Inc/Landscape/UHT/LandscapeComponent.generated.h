// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeComponent.h"

#ifdef LANDSCAPE_LandscapeComponent_generated_h
#error "LandscapeComponent.generated.h already included, missing '#pragma once' in LandscapeComponent.h"
#endif
#define LANDSCAPE_LandscapeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULandscapeGrassType;
class ULandscapeLayerInfoObject;
class UMaterialInstanceDynamic;

// ********** Begin ScriptStruct FLandscapeEditToolRenderData **************************************
struct Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeEditToolRenderData;
// ********** End ScriptStruct FLandscapeEditToolRenderData ****************************************

// ********** Begin ScriptStruct FWeightmapLayerAllocationInfo *************************************
struct Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_143_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FWeightmapLayerAllocationInfo;
// ********** End ScriptStruct FWeightmapLayerAllocationInfo ***************************************

// ********** Begin ScriptStruct FLandscapeComponentMaterialOverride *******************************
struct Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_274_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeComponentMaterialOverride;
// ********** End ScriptStruct FLandscapeComponentMaterialOverride *********************************

// ********** Begin ScriptStruct FLandscapePerLODMaterialOverride **********************************
struct Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_286_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapePerLODMaterialOverride;
// ********** End ScriptStruct FLandscapePerLODMaterialOverride ************************************

// ********** Begin ScriptStruct FWeightmapData ****************************************************
struct Z_Construct_UScriptStruct_FWeightmapData_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_304_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWeightmapData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FWeightmapData;
// ********** End ScriptStruct FWeightmapData ******************************************************

// ********** Begin ScriptStruct FHeightmapData ****************************************************
struct Z_Construct_UScriptStruct_FHeightmapData_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_319_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHeightmapData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FHeightmapData;
// ********** End ScriptStruct FHeightmapData ******************************************************

// ********** Begin ScriptStruct FLandscapeLayerComponentData **************************************
struct Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_328_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeLayerComponentData;
// ********** End ScriptStruct FLandscapeLayerComponentData ****************************************

// ********** Begin Class ULandscapeLODStreamingProxy_DEPRECATED ***********************************
struct Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_409_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeLODStreamingProxy_DEPRECATED(); \
	friend struct ::Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeLODStreamingProxy_DEPRECATED, UStreamableRenderAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeLODStreamingProxy_DEPRECATED)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_409_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeLODStreamingProxy_DEPRECATED(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeLODStreamingProxy_DEPRECATED) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeLODStreamingProxy_DEPRECATED); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeLODStreamingProxy_DEPRECATED); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeLODStreamingProxy_DEPRECATED(ULandscapeLODStreamingProxy_DEPRECATED&&) = delete; \
	ULandscapeLODStreamingProxy_DEPRECATED(const ULandscapeLODStreamingProxy_DEPRECATED&) = delete; \
	LANDSCAPE_API virtual ~ULandscapeLODStreamingProxy_DEPRECATED();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_406_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_409_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_409_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_409_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeLODStreamingProxy_DEPRECATED;

// ********** End Class ULandscapeLODStreamingProxy_DEPRECATED *************************************

// ********** Begin Class ULandscapeComponent ******************************************************
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_415_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetLODBias); \
	DECLARE_FUNCTION(execSetForcedLOD); \
	DECLARE_FUNCTION(execEditorGetPaintLayerWeightByNameAtLocation); \
	DECLARE_FUNCTION(execEditorGetPaintLayerWeightAtLocation); \
	DECLARE_FUNCTION(execGetMaterialInstanceDynamic); \
	DECLARE_FUNCTION(execGetGrassTypesBP);


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_415_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeComponent, LANDSCAPE_API)


struct Z_Construct_UClass_ULandscapeComponent_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_415_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeComponent(); \
	friend struct ::Z_Construct_UClass_ULandscapeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeComponent_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeComponent) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_415_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ALandscapeProxy)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_415_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeComponent(ULandscapeComponent&&) = delete; \
	ULandscapeComponent(const ULandscapeComponent&) = delete; \
	LANDSCAPE_API virtual ~ULandscapeComponent();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_412_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_415_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_415_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_415_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_415_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeComponent;

// ********** End Class ULandscapeComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h

// ********** Begin Enum ELandscapeClearMode *******************************************************
#define FOREACH_ENUM_ELANDSCAPECLEARMODE(op) \
	op(Clear_Weightmap) \
	op(Clear_Heightmap) \
	op(Clear_All) 

enum ELandscapeClearMode : int;
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeClearMode>();
// ********** End Enum ELandscapeClearMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
