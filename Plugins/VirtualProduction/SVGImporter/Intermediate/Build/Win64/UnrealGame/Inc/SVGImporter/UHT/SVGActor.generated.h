// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SVGActor.h"

#ifdef SVGIMPORTER_SVGActor_generated_h
#error "SVGActor.generated.h already included, missing '#pragma once' in SVGActor.h"
#endif
#define SVGIMPORTER_SVGActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASVGActor ****************************************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActor_h_46_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSplit); \
	DECLARE_FUNCTION(execResetGeometry); \
	DECLARE_FUNCTION(execBakeToBlueprint);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActor_h_46_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActor_h_46_ACCESSORS \
static void GetScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetScale_WrapperImpl(void* Object, const void* InValue); \
static void GetFillsExtrude_WrapperImpl(const void* Object, void* OutValue); \
static void SetFillsExtrude_WrapperImpl(void* Object, const void* InValue); \
static void GetStrokesExtrude_WrapperImpl(const void* Object, void* OutValue); \
static void SetStrokesExtrude_WrapperImpl(void* Object, const void* InValue); \
static void GetShapesOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetShapesOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetBevelDistance_WrapperImpl(const void* Object, void* OutValue); \
static void SetBevelDistance_WrapperImpl(void* Object, const void* InValue); \
static void GetStrokesWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetStrokesWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetbVisible_WrapperImpl(const void* Object, void* OutValue); \
static void SetbVisible_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActor_h_46_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ASVGActor, NO_API)


struct Z_Construct_UClass_ASVGActor_Statics;
SVGIMPORTER_API UClass* Z_Construct_UClass_ASVGActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActor_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASVGActor(); \
	friend struct ::Z_Construct_UClass_ASVGActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SVGIMPORTER_API UClass* ::Z_Construct_UClass_ASVGActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASVGActor, ASVGDynamicMeshesContainerActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SVGImporter"), Z_Construct_UClass_ASVGActor_NoRegister) \
	DECLARE_SERIALIZER(ASVGActor) \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActor_h_46_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActor_h_46_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASVGActor(ASVGActor&&) = delete; \
	ASVGActor(const ASVGActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASVGActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASVGActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASVGActor) \
	NO_API virtual ~ASVGActor();


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActor_h_43_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActor_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActor_h_46_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActor_h_46_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActor_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActor_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASVGActor;

// ********** End Class ASVGActor ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_SVGActor_h

// ********** Begin Enum ESVGRenderMode ************************************************************
#define FOREACH_ENUM_ESVGRENDERMODE(op) \
	op(ESVGRenderMode::DynamicMesh3D) \
	op(ESVGRenderMode::Texture2D) 

enum class ESVGRenderMode : uint8;
template<> struct TIsUEnumClass<ESVGRenderMode> { enum { Value = true }; };
template<> SVGIMPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESVGRenderMode>();
// ********** End Enum ESVGRenderMode **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
