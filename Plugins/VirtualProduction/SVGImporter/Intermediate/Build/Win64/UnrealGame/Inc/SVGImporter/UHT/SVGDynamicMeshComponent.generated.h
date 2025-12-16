// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralMeshes/SVGDynamicMeshComponent.h"

#ifdef SVGIMPORTER_SVGDynamicMeshComponent_generated_h
#error "SVGDynamicMeshComponent.generated.h already included, missing '#pragma once' in SVGDynamicMeshComponent.h"
#endif
#define SVGIMPORTER_SVGDynamicMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
struct FColor;

// ********** Begin Class USVGDynamicMeshComponent *************************************************
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_SVGDynamicMeshComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetColor);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_SVGDynamicMeshComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execBakeStaticMesh); \
	DECLARE_FUNCTION(execResetToSVGValues);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_SVGDynamicMeshComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_USVGDynamicMeshComponent_Statics;
SVGIMPORTER_API UClass* Z_Construct_UClass_USVGDynamicMeshComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_SVGDynamicMeshComponent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSVGDynamicMeshComponent(); \
	friend struct ::Z_Construct_UClass_USVGDynamicMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SVGIMPORTER_API UClass* ::Z_Construct_UClass_USVGDynamicMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USVGDynamicMeshComponent, USVGBaseDynamicMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SVGImporter"), Z_Construct_UClass_USVGDynamicMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(USVGDynamicMeshComponent)


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_SVGDynamicMeshComponent_h_48_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USVGDynamicMeshComponent(USVGDynamicMeshComponent&&) = delete; \
	USVGDynamicMeshComponent(const USVGDynamicMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SVGIMPORTER_API, USVGDynamicMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USVGDynamicMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USVGDynamicMeshComponent) \
	SVGIMPORTER_API virtual ~USVGDynamicMeshComponent();


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_SVGDynamicMeshComponent_h_45_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_SVGDynamicMeshComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_SVGDynamicMeshComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_SVGDynamicMeshComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_SVGDynamicMeshComponent_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_SVGDynamicMeshComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USVGDynamicMeshComponent;

// ********** End Class USVGDynamicMeshComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_SVGDynamicMeshComponent_h

// ********** Begin Enum ESVGExtrudeType ***********************************************************
#define FOREACH_ENUM_ESVGEXTRUDETYPE(op) \
	op(ESVGExtrudeType::None) \
	op(ESVGExtrudeType::FrontFaceOnly) \
	op(ESVGExtrudeType::FrontBackMirror) 

enum class ESVGExtrudeType : uint8;
template<> struct TIsUEnumClass<ESVGExtrudeType> { enum { Value = true }; };
template<> SVGIMPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESVGExtrudeType>();
// ********** End Enum ESVGExtrudeType *************************************************************

// ********** Begin Enum ESVGEditMode **************************************************************
#define FOREACH_ENUM_ESVGEDITMODE(op) \
	op(ESVGEditMode::Interactive) \
	op(ESVGEditMode::ValueSet) 

enum class ESVGEditMode : uint8;
template<> struct TIsUEnumClass<ESVGEditMode> { enum { Value = true }; };
template<> SVGIMPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESVGEditMode>();
// ********** End Enum ESVGEditMode ****************************************************************

// ********** Begin Enum ESVGMaterialType **********************************************************
#define FOREACH_ENUM_ESVGMATERIALTYPE(op) \
	op(ESVGMaterialType::Default) \
	op(ESVGMaterialType::Custom) 

enum class ESVGMaterialType : uint8;
template<> struct TIsUEnumClass<ESVGMaterialType> { enum { Value = true }; };
template<> SVGIMPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESVGMaterialType>();
// ********** End Enum ESVGMaterialType ************************************************************

// ********** Begin Enum EPolygonOffsetJoinType ****************************************************
#define FOREACH_ENUM_EPOLYGONOFFSETJOINTYPE(op) \
	op(EPolygonOffsetJoinType::Square) \
	op(EPolygonOffsetJoinType::Round) \
	op(EPolygonOffsetJoinType::Miter) 

enum class EPolygonOffsetJoinType : uint8;
template<> struct TIsUEnumClass<EPolygonOffsetJoinType> { enum { Value = true }; };
template<> SVGIMPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EPolygonOffsetJoinType>();
// ********** End Enum EPolygonOffsetJoinType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
