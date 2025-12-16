// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/Text3DDefaultGeometryExtension.h"

#ifdef TEXT3D_Text3DDefaultGeometryExtension_generated_h
#error "Text3DDefaultGeometryExtension.generated.h already included, missing '#pragma once' in Text3DDefaultGeometryExtension.h"
#endif
#define TEXT3D_Text3DDefaultGeometryExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EText3DBevelType : uint8;
enum class EText3DHorizontalTextAlignment : uint8;
enum class EText3DOutlineType : uint8;
enum class EText3DVerticalTextAlignment : uint8;

// ********** Begin Class UText3DDefaultGeometryExtension ******************************************
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultGeometryExtension_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPivotVAlignment); \
	DECLARE_FUNCTION(execSetPivotHAlignment); \
	DECLARE_FUNCTION(execGetOutlineType); \
	DECLARE_FUNCTION(execSetOutlineType); \
	DECLARE_FUNCTION(execSetOutline); \
	DECLARE_FUNCTION(execGetOutline); \
	DECLARE_FUNCTION(execSetUseOutline); \
	DECLARE_FUNCTION(execGetUseOutline); \
	DECLARE_FUNCTION(execSetBevelSegments); \
	DECLARE_FUNCTION(execGetBevelSegments); \
	DECLARE_FUNCTION(execSetBevelType); \
	DECLARE_FUNCTION(execGetBevelType); \
	DECLARE_FUNCTION(execSetBevel); \
	DECLARE_FUNCTION(execGetBevel); \
	DECLARE_FUNCTION(execSetExtrude); \
	DECLARE_FUNCTION(execGetExtrude);


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultGeometryExtension_h_12_ACCESSORS \
static void GetExtrude_WrapperImpl(const void* Object, void* OutValue); \
static void SetExtrude_WrapperImpl(void* Object, const void* InValue); \
static void GetBevel_WrapperImpl(const void* Object, void* OutValue); \
static void SetBevel_WrapperImpl(void* Object, const void* InValue); \
static void GetBevelType_WrapperImpl(const void* Object, void* OutValue); \
static void SetBevelType_WrapperImpl(void* Object, const void* InValue); \
static void GetBevelSegments_WrapperImpl(const void* Object, void* OutValue); \
static void SetBevelSegments_WrapperImpl(void* Object, const void* InValue); \
static void GetbUseOutline_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseOutline_WrapperImpl(void* Object, const void* InValue); \
static void GetOutline_WrapperImpl(const void* Object, void* OutValue); \
static void SetOutline_WrapperImpl(void* Object, const void* InValue); \
static void GetOutlineType_WrapperImpl(const void* Object, void* OutValue); \
static void SetOutlineType_WrapperImpl(void* Object, const void* InValue); \
static void GetPivotHAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetPivotHAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetPivotVAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetPivotVAlignment_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UText3DDefaultGeometryExtension_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DDefaultGeometryExtension_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultGeometryExtension_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DDefaultGeometryExtension(); \
	friend struct ::Z_Construct_UClass_UText3DDefaultGeometryExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DDefaultGeometryExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DDefaultGeometryExtension, UText3DGeometryExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DDefaultGeometryExtension_NoRegister) \
	DECLARE_SERIALIZER(UText3DDefaultGeometryExtension)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultGeometryExtension_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXT3D_API UText3DDefaultGeometryExtension(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DDefaultGeometryExtension(UText3DDefaultGeometryExtension&&) = delete; \
	UText3DDefaultGeometryExtension(const UText3DDefaultGeometryExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXT3D_API, UText3DDefaultGeometryExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DDefaultGeometryExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UText3DDefaultGeometryExtension) \
	TEXT3D_API virtual ~UText3DDefaultGeometryExtension();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultGeometryExtension_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultGeometryExtension_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultGeometryExtension_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultGeometryExtension_h_12_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultGeometryExtension_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultGeometryExtension_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DDefaultGeometryExtension;

// ********** End Class UText3DDefaultGeometryExtension ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultGeometryExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
