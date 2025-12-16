// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Util/WidgetReference.h"

#ifdef VCAMCORE_WidgetReference_generated_h
#error "WidgetReference.generated.h already included, missing '#pragma once' in WidgetReference.h"
#endif
#define VCAMCORE_WidgetReference_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
class UVCamWidget;
class UWidget;
struct FChildWidgetReference;
struct FVCamChildWidgetReference;

// ********** Begin ScriptStruct FChildWidgetReference *********************************************
struct Z_Construct_UScriptStruct_FChildWidgetReference_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChildWidgetReference_Statics; \
	static class UScriptStruct* StaticStruct();


struct FChildWidgetReference;
// ********** End ScriptStruct FChildWidgetReference ***********************************************

// ********** Begin ScriptStruct FVCamChildWidgetReference *****************************************
struct Z_Construct_UScriptStruct_FVCamChildWidgetReference_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVCamChildWidgetReference_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FChildWidgetReference Super;


struct FVCamChildWidgetReference;
// ********** End ScriptStruct FVCamChildWidgetReference *******************************************

// ********** Begin Class UWidgetReferenceBlueprintFunctionLibrary *********************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResolveVCamWidget); \
	DECLARE_FUNCTION(execResolveWidget);


struct Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetReferenceBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetReferenceBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UWidgetReferenceBlueprintFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetReferenceBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetReferenceBlueprintFunctionLibrary(UWidgetReferenceBlueprintFunctionLibrary&&) = delete; \
	UWidgetReferenceBlueprintFunctionLibrary(const UWidgetReferenceBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetReferenceBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetReferenceBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetReferenceBlueprintFunctionLibrary) \
	NO_API virtual ~UWidgetReferenceBlueprintFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_41_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetReferenceBlueprintFunctionLibrary;

// ********** End Class UWidgetReferenceBlueprintFunctionLibrary ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
