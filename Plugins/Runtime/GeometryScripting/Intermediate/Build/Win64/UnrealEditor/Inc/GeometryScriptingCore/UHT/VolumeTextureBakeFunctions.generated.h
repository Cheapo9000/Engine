// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/VolumeTextureBakeFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_VolumeTextureBakeFunctions_generated_h
#error "VolumeTextureBakeFunctions.generated.h already included, missing '#pragma once' in VolumeTextureBakeFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_VolumeTextureBakeFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UVolumeTexture;
struct FComputeDistanceFieldSettings;
struct FDistanceFieldToTextureSettings;

// ********** Begin ScriptStruct FComputeDistanceFieldSettings *************************************
struct Z_Construct_UScriptStruct_FComputeDistanceFieldSettings_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VolumeTextureBakeFunctions_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FComputeDistanceFieldSettings_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FComputeDistanceFieldSettings;
// ********** End ScriptStruct FComputeDistanceFieldSettings ***************************************

// ********** Begin ScriptStruct FDistanceFieldToTextureSettings ***********************************
struct Z_Construct_UScriptStruct_FDistanceFieldToTextureSettings_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VolumeTextureBakeFunctions_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDistanceFieldToTextureSettings_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FDistanceFieldToTextureSettings;
// ********** End ScriptStruct FDistanceFieldToTextureSettings *************************************

// ********** Begin Class UGeometryScriptLibrary_VolumeTextureBakeFunctions ************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VolumeTextureBakeFunctions_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBakeSignedDistanceToVolumeTexture);


struct Z_Construct_UClass_UGeometryScriptLibrary_VolumeTextureBakeFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_VolumeTextureBakeFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VolumeTextureBakeFunctions_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_VolumeTextureBakeFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_VolumeTextureBakeFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_VolumeTextureBakeFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_VolumeTextureBakeFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_VolumeTextureBakeFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_VolumeTextureBakeFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VolumeTextureBakeFunctions_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_VolumeTextureBakeFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_VolumeTextureBakeFunctions(UGeometryScriptLibrary_VolumeTextureBakeFunctions&&) = delete; \
	UGeometryScriptLibrary_VolumeTextureBakeFunctions(const UGeometryScriptLibrary_VolumeTextureBakeFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_VolumeTextureBakeFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_VolumeTextureBakeFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_VolumeTextureBakeFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_VolumeTextureBakeFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VolumeTextureBakeFunctions_h_79_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VolumeTextureBakeFunctions_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VolumeTextureBakeFunctions_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VolumeTextureBakeFunctions_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VolumeTextureBakeFunctions_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_VolumeTextureBakeFunctions;

// ********** End Class UGeometryScriptLibrary_VolumeTextureBakeFunctions **************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VolumeTextureBakeFunctions_h

// ********** Begin Enum EDistanceFieldComputeMode *************************************************
#define FOREACH_ENUM_EDISTANCEFIELDCOMPUTEMODE(op) \
	op(EDistanceFieldComputeMode::NarrowBand) \
	op(EDistanceFieldComputeMode::FullGrid) 

enum class EDistanceFieldComputeMode : uint8;
template<> struct TIsUEnumClass<EDistanceFieldComputeMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDistanceFieldComputeMode>();
// ********** End Enum EDistanceFieldComputeMode ***************************************************

// ********** Begin Enum EDistanceFieldUnits *******************************************************
#define FOREACH_ENUM_EDISTANCEFIELDUNITS(op) \
	op(EDistanceFieldUnits::NumberOfVoxels) \
	op(EDistanceFieldUnits::Distance) 

enum class EDistanceFieldUnits : uint8;
template<> struct TIsUEnumClass<EDistanceFieldUnits> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDistanceFieldUnits>();
// ********** End Enum EDistanceFieldUnits *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
