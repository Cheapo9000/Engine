// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/EditorTextureMapFunctions.h"

#ifdef GEOMETRYSCRIPTINGEDITOR_EditorTextureMapFunctions_generated_h
#error "EditorTextureMapFunctions.generated.h already included, missing '#pragma once' in EditorTextureMapFunctions.h"
#endif
#define GEOMETRYSCRIPTINGEDITOR_EditorTextureMapFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryScriptDebug;
struct FGeometryScriptChannelPackResult;
struct FGeometryScriptChannelPackSource;

// ********** Begin ScriptStruct FGeometryScriptChannelPackSource **********************************
struct Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics; \
	GEOMETRYSCRIPTINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptChannelPackSource;
// ********** End ScriptStruct FGeometryScriptChannelPackSource ************************************

// ********** Begin ScriptStruct FGeometryScriptChannelPackResult **********************************
struct Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics; \
	GEOMETRYSCRIPTINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptChannelPackResult;
// ********** End ScriptStruct FGeometryScriptChannelPackResult ************************************

// ********** Begin Class UGeometryScriptLibrary_EditorTextureMapFunctions *************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_71_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execChannelPack);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_71_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_Statics;
GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_EditorTextureMapFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGEDITOR_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_EditorTextureMapFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingEditor"), Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_EditorTextureMapFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGEDITOR_API UGeometryScriptLibrary_EditorTextureMapFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_EditorTextureMapFunctions(UGeometryScriptLibrary_EditorTextureMapFunctions&&) = delete; \
	UGeometryScriptLibrary_EditorTextureMapFunctions(const UGeometryScriptLibrary_EditorTextureMapFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGEDITOR_API, UGeometryScriptLibrary_EditorTextureMapFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_EditorTextureMapFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_EditorTextureMapFunctions) \
	GEOMETRYSCRIPTINGEDITOR_API virtual ~UGeometryScriptLibrary_EditorTextureMapFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_68_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_71_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_EditorTextureMapFunctions;

// ********** End Class UGeometryScriptLibrary_EditorTextureMapFunctions ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h

// ********** Begin Enum EGeometryScriptRGBAChannel ************************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTRGBACHANNEL(op) \
	op(EGeometryScriptRGBAChannel::R) \
	op(EGeometryScriptRGBAChannel::G) \
	op(EGeometryScriptRGBAChannel::B) \
	op(EGeometryScriptRGBAChannel::A) 

enum class EGeometryScriptRGBAChannel : uint8;
template<> struct TIsUEnumClass<EGeometryScriptRGBAChannel> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptRGBAChannel>();
// ********** End Enum EGeometryScriptRGBAChannel **************************************************

// ********** Begin Enum EGeometryScriptReadGammaSpace *********************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTREADGAMMASPACE(op) \
	op(EGeometryScriptReadGammaSpace::FromTextureSettings) \
	op(EGeometryScriptReadGammaSpace::Linear) \
	op(EGeometryScriptReadGammaSpace::SRGB) 

enum class EGeometryScriptReadGammaSpace : uint8;
template<> struct TIsUEnumClass<EGeometryScriptReadGammaSpace> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptReadGammaSpace>();
// ********** End Enum EGeometryScriptReadGammaSpace ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
