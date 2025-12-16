// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Visualizations/PVLineBatchComponent.h"

#ifdef PROCEDURALVEGETATIONEDITOR_PVLineBatchComponent_generated_h
#error "PVLineBatchComponent.generated.h already included, missing '#pragma once' in PVLineBatchComponent.h"
#endif
#define PROCEDURALVEGETATIONEDITOR_PVLineBatchComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPVLineInfo *******************************************************
struct Z_Construct_UScriptStruct_FPVLineInfo_Statics;
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVLineBatchComponent_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPVLineInfo_Statics; \
	PROCEDURALVEGETATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FPVLineInfo;
// ********** End ScriptStruct FPVLineInfo *********************************************************

// ********** Begin Class UPVLineBatchComponent ****************************************************
struct Z_Construct_UClass_UPVLineBatchComponent_Statics;
PROCEDURALVEGETATIONEDITOR_API UClass* Z_Construct_UClass_UPVLineBatchComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVLineBatchComponent_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVLineBatchComponent(); \
	friend struct ::Z_Construct_UClass_UPVLineBatchComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATIONEDITOR_API UClass* ::Z_Construct_UClass_UPVLineBatchComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVLineBatchComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralVegetationEditor"), Z_Construct_UClass_UPVLineBatchComponent_NoRegister) \
	DECLARE_SERIALIZER(UPVLineBatchComponent)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVLineBatchComponent_h_61_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVLineBatchComponent(UPVLineBatchComponent&&) = delete; \
	UPVLineBatchComponent(const UPVLineBatchComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALVEGETATIONEDITOR_API, UPVLineBatchComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVLineBatchComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPVLineBatchComponent) \
	PROCEDURALVEGETATIONEDITOR_API virtual ~UPVLineBatchComponent();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVLineBatchComponent_h_58_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVLineBatchComponent_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVLineBatchComponent_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVLineBatchComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVLineBatchComponent;

// ********** End Class UPVLineBatchComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Private_Visualizations_PVLineBatchComponent_h

// ********** Begin Enum EPointDrawSettings ********************************************************
#define FOREACH_ENUM_EPOINTDRAWSETTINGS(op) \
	op(EPointDrawSettings::None) \
	op(EPointDrawSettings::Start) \
	op(EPointDrawSettings::End) \
	op(EPointDrawSettings::Both) 

enum class EPointDrawSettings : uint8;
template<> struct TIsUEnumClass<EPointDrawSettings> { enum { Value = true }; };
template<> PROCEDURALVEGETATIONEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPointDrawSettings>();
// ********** End Enum EPointDrawSettings **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
