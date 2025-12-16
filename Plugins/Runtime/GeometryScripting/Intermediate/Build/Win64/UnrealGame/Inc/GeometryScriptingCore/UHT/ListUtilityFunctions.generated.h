// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/ListUtilityFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_ListUtilityFunctions_generated_h
#error "ListUtilityFunctions.generated.h already included, missing '#pragma once' in ListUtilityFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_ListUtilityFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGeometryScriptIndexType : uint8;
struct FGeometryScriptColorList;
struct FGeometryScriptIndexList;
struct FGeometryScriptScalarList;
struct FGeometryScriptTriangleList;
struct FGeometryScriptUVList;
struct FGeometryScriptVectorList;
struct FLinearColor;

// ********** Begin Class UGeometryScriptLibrary_ListUtilityFunctions ******************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetVectorListComponentsFromUVs); \
	DECLARE_FUNCTION(execSetVectorListComponentFromScalars); \
	DECLARE_FUNCTION(execSetUVListComponentFromScalars); \
	DECLARE_FUNCTION(execSetColorListChannelsFromVectors); \
	DECLARE_FUNCTION(execSetColorListChannelsFromUVs); \
	DECLARE_FUNCTION(execSetColorListChannelFromScalars); \
	DECLARE_FUNCTION(execExtractVectorListComponentsAsUVs); \
	DECLARE_FUNCTION(execExtractVectorListComponent); \
	DECLARE_FUNCTION(execExtractUVListComponent); \
	DECLARE_FUNCTION(execExtractColorListChannels); \
	DECLARE_FUNCTION(execExtractColorListChannel); \
	DECLARE_FUNCTION(execClearColorList); \
	DECLARE_FUNCTION(execDuplicateColorList); \
	DECLARE_FUNCTION(execConvertArrayToColorList); \
	DECLARE_FUNCTION(execConvertColorListToArray); \
	DECLARE_FUNCTION(execSetColorListItem); \
	DECLARE_FUNCTION(execGetColorListItem); \
	DECLARE_FUNCTION(execGetColorListLastIndex); \
	DECLARE_FUNCTION(execGetColorListLength); \
	DECLARE_FUNCTION(execClearUVList); \
	DECLARE_FUNCTION(execDuplicateUVList); \
	DECLARE_FUNCTION(execConvertArrayToUVList); \
	DECLARE_FUNCTION(execConvertUVListToArray); \
	DECLARE_FUNCTION(execSetUVListItem); \
	DECLARE_FUNCTION(execGetUVListItem); \
	DECLARE_FUNCTION(execGetUVListLastIndex); \
	DECLARE_FUNCTION(execGetUVListLength); \
	DECLARE_FUNCTION(execClearVectorList); \
	DECLARE_FUNCTION(execDuplicateVectorList); \
	DECLARE_FUNCTION(execConvertArrayToVectorList); \
	DECLARE_FUNCTION(execConvertVectorListToArray); \
	DECLARE_FUNCTION(execSetVectorListItem); \
	DECLARE_FUNCTION(execGetVectorListItem); \
	DECLARE_FUNCTION(execGetVectorListLastIndex); \
	DECLARE_FUNCTION(execGetVectorListLength); \
	DECLARE_FUNCTION(execClearScalarList); \
	DECLARE_FUNCTION(execDuplicateScalarList); \
	DECLARE_FUNCTION(execConvertArrayToScalarList); \
	DECLARE_FUNCTION(execConvertScalarListToArray); \
	DECLARE_FUNCTION(execSetScalarListItem); \
	DECLARE_FUNCTION(execGetScalarListItem); \
	DECLARE_FUNCTION(execGetScalarListLastIndex); \
	DECLARE_FUNCTION(execGetScalarListLength); \
	DECLARE_FUNCTION(execConvertArrayToTriangleList); \
	DECLARE_FUNCTION(execConvertTriangleListToArray); \
	DECLARE_FUNCTION(execGetTriangleListItem); \
	DECLARE_FUNCTION(execGetTriangleListLastTriangle); \
	DECLARE_FUNCTION(execGetTriangleListLength); \
	DECLARE_FUNCTION(execClearIndexList); \
	DECLARE_FUNCTION(execDuplicateIndexList); \
	DECLARE_FUNCTION(execConvertArrayToIndexList); \
	DECLARE_FUNCTION(execConvertIndexListToArray); \
	DECLARE_FUNCTION(execSetIndexListItem); \
	DECLARE_FUNCTION(execGetIndexListItem); \
	DECLARE_FUNCTION(execGetIndexListLastIndex); \
	DECLARE_FUNCTION(execGetIndexListLength);


struct Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_ListUtilityFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_ListUtilityFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_ListUtilityFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_ListUtilityFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_ListUtilityFunctions(UGeometryScriptLibrary_ListUtilityFunctions&&) = delete; \
	UGeometryScriptLibrary_ListUtilityFunctions(const UGeometryScriptLibrary_ListUtilityFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_ListUtilityFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_ListUtilityFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_ListUtilityFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_ListUtilityFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_ListUtilityFunctions;

// ********** End Class UGeometryScriptLibrary_ListUtilityFunctions ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
