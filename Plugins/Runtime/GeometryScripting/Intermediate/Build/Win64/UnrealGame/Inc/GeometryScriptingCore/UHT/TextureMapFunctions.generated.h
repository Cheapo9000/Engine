// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/TextureMapFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_TextureMapFunctions_generated_h
#error "TextureMapFunctions.generated.h already included, missing '#pragma once' in TextureMapFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_TextureMapFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryScriptDebug;
class UTexture2D;
class UTextureRenderTarget2D;
struct FGeometryScriptColorList;
struct FGeometryScriptSampleTextureOptions;
struct FGeometryScriptUVList;

// ********** Begin ScriptStruct FGeometryScriptSampleTextureOptions *******************************
struct Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptSampleTextureOptions;
// ********** End ScriptStruct FGeometryScriptSampleTextureOptions *********************************

// ********** Begin Class UGeometryScriptLibrary_TextureMapFunctions *******************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSampleTextureRenderTarget2DAtUVPositions); \
	DECLARE_FUNCTION(execSampleTexture2DAtUVPositions);


struct Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_TextureMapFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_TextureMapFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_TextureMapFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_TextureMapFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_TextureMapFunctions(UGeometryScriptLibrary_TextureMapFunctions&&) = delete; \
	UGeometryScriptLibrary_TextureMapFunctions(const UGeometryScriptLibrary_TextureMapFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_TextureMapFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_TextureMapFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_TextureMapFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_TextureMapFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_44_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_TextureMapFunctions;

// ********** End Class UGeometryScriptLibrary_TextureMapFunctions *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h

// ********** Begin Enum EGeometryScriptPixelSamplingMethod ****************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTPIXELSAMPLINGMETHOD(op) \
	op(EGeometryScriptPixelSamplingMethod::Bilinear) \
	op(EGeometryScriptPixelSamplingMethod::Nearest) 

enum class EGeometryScriptPixelSamplingMethod : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPixelSamplingMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptPixelSamplingMethod>();
// ********** End Enum EGeometryScriptPixelSamplingMethod ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
