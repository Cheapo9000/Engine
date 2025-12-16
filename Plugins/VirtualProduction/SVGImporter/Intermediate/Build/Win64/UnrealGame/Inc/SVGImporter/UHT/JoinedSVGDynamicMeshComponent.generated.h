// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralMeshes/JoinedSVGDynamicMeshComponent.h"

#ifdef SVGIMPORTER_JoinedSVGDynamicMeshComponent_generated_h
#error "JoinedSVGDynamicMeshComponent.generated.h already included, missing '#pragma once' in JoinedSVGDynamicMeshComponent.h"
#endif
#define SVGIMPORTER_JoinedSVGDynamicMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSVGShapeParameters ***********************************************
struct Z_Construct_UScriptStruct_FSVGShapeParameters_Statics;
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_JoinedSVGDynamicMeshComponent_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSVGShapeParameters_Statics; \
	SVGIMPORTER_API static class UScriptStruct* StaticStruct();


struct FSVGShapeParameters;
// ********** End ScriptStruct FSVGShapeParameters *************************************************

// ********** Begin ScriptStruct FJoinedSVGMeshParameters ******************************************
struct Z_Construct_UScriptStruct_FJoinedSVGMeshParameters_Statics;
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_JoinedSVGDynamicMeshComponent_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FJoinedSVGMeshParameters_Statics; \
	SVGIMPORTER_API static class UScriptStruct* StaticStruct();


struct FJoinedSVGMeshParameters;
// ********** End ScriptStruct FJoinedSVGMeshParameters ********************************************

// ********** Begin Class UJoinedSVGDynamicMeshComponent *******************************************
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_JoinedSVGDynamicMeshComponent_h_62_ACCESSORS \
static void GetMainColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetMainColor_WrapperImpl(void* Object, const void* InValue); \
static void GetbSVGIsUnlit_WrapperImpl(const void* Object, void* OutValue); \
static void SetbSVGIsUnlit_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UJoinedSVGDynamicMeshComponent_Statics;
SVGIMPORTER_API UClass* Z_Construct_UClass_UJoinedSVGDynamicMeshComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_JoinedSVGDynamicMeshComponent_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJoinedSVGDynamicMeshComponent(); \
	friend struct ::Z_Construct_UClass_UJoinedSVGDynamicMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SVGIMPORTER_API UClass* ::Z_Construct_UClass_UJoinedSVGDynamicMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UJoinedSVGDynamicMeshComponent, USVGBaseDynamicMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SVGImporter"), Z_Construct_UClass_UJoinedSVGDynamicMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UJoinedSVGDynamicMeshComponent)


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_JoinedSVGDynamicMeshComponent_h_62_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UJoinedSVGDynamicMeshComponent(UJoinedSVGDynamicMeshComponent&&) = delete; \
	UJoinedSVGDynamicMeshComponent(const UJoinedSVGDynamicMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SVGIMPORTER_API, UJoinedSVGDynamicMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoinedSVGDynamicMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJoinedSVGDynamicMeshComponent) \
	SVGIMPORTER_API virtual ~UJoinedSVGDynamicMeshComponent();


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_JoinedSVGDynamicMeshComponent_h_57_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_JoinedSVGDynamicMeshComponent_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_JoinedSVGDynamicMeshComponent_h_62_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_JoinedSVGDynamicMeshComponent_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_JoinedSVGDynamicMeshComponent_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UJoinedSVGDynamicMeshComponent;

// ********** End Class UJoinedSVGDynamicMeshComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Public_ProceduralMeshes_JoinedSVGDynamicMeshComponent_h

// ********** Begin Enum EJoinedSVGMeshColoring ****************************************************
#define FOREACH_ENUM_EJOINEDSVGMESHCOLORING(op) \
	op(EJoinedSVGMeshColoring::SeparateColors) \
	op(EJoinedSVGMeshColoring::SingleColor) 

enum class EJoinedSVGMeshColoring : uint8;
template<> struct TIsUEnumClass<EJoinedSVGMeshColoring> { enum { Value = true }; };
template<> SVGIMPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EJoinedSVGMeshColoring>();
// ********** End Enum EJoinedSVGMeshColoring ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
