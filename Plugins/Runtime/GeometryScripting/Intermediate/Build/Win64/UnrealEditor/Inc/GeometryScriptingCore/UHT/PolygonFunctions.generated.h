// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/PolygonFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_PolygonFunctions_generated_h
#error "PolygonFunctions.generated.h already included, missing '#pragma once' in PolygonFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_PolygonFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
enum class EGeometryScriptAxis : uint8;
struct FGeometryScriptGeneralPolygonList;
struct FGeometryScriptOpenPathOffsetOptions;
struct FGeometryScriptPolygonOffsetOptions;
struct FGeometryScriptPolyPath;
struct FGeometryScriptSimplePolygon;
struct FGeometryScriptSplineSamplingOptions;

// ********** Begin ScriptStruct FGeometryScriptPolygonOffsetOptions *******************************
struct Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptPolygonOffsetOptions;
// ********** End ScriptStruct FGeometryScriptPolygonOffsetOptions *********************************

// ********** Begin ScriptStruct FGeometryScriptOpenPathOffsetOptions ******************************
struct Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptOpenPathOffsetOptions;
// ********** End ScriptStruct FGeometryScriptOpenPathOffsetOptions ********************************

// ********** Begin Class UGeometryScriptLibrary_SimplePolygonFunctions ****************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_ArrayOfVector2DToGeometryScriptSimplePolygon); \
	DECLARE_FUNCTION(execConv_ArrayToGeometryScriptSimplePolygon); \
	DECLARE_FUNCTION(execConv_GeometryScriptSimplePolygonToArrayOfVector2D); \
	DECLARE_FUNCTION(execConv_GeometryScriptSimplePolygonToArray); \
	DECLARE_FUNCTION(execConvertSplineToPolygon); \
	DECLARE_FUNCTION(execGetPolygonBounds); \
	DECLARE_FUNCTION(execGetPolygonArea); \
	DECLARE_FUNCTION(execGetPolygonArcLength); \
	DECLARE_FUNCTION(execGetPolygonTangent); \
	DECLARE_FUNCTION(execAddPolygonVertex); \
	DECLARE_FUNCTION(execSetPolygonVertex); \
	DECLARE_FUNCTION(execGetPolygonVertex); \
	DECLARE_FUNCTION(execGetPolygonVertexCount);


struct Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_SimplePolygonFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_SimplePolygonFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_SimplePolygonFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_SimplePolygonFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_SimplePolygonFunctions(UGeometryScriptLibrary_SimplePolygonFunctions&&) = delete; \
	UGeometryScriptLibrary_SimplePolygonFunctions(const UGeometryScriptLibrary_SimplePolygonFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_SimplePolygonFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_SimplePolygonFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_SimplePolygonFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_SimplePolygonFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_94_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_SimplePolygonFunctions;

// ********** End Class UGeometryScriptLibrary_SimplePolygonFunctions ******************************

// ********** Begin Class UGeometryScriptLibrary_PolygonListFunctions ******************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_186_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreatePolygonsFromOpenPolyPathsOffset); \
	DECLARE_FUNCTION(execCreatePolygonsFromPathOffset); \
	DECLARE_FUNCTION(execPolygonsMorphologyClose); \
	DECLARE_FUNCTION(execPolygonsMorphologyOpen); \
	DECLARE_FUNCTION(execPolygonsOffsets); \
	DECLARE_FUNCTION(execPolygonsOffset); \
	DECLARE_FUNCTION(execPolygonsExclusiveOr); \
	DECLARE_FUNCTION(execPolygonsIntersection); \
	DECLARE_FUNCTION(execPolygonsDifference); \
	DECLARE_FUNCTION(execPolygonsUnion); \
	DECLARE_FUNCTION(execAppendPolygonList); \
	DECLARE_FUNCTION(execCreatePolygonListFromSimplePolygons); \
	DECLARE_FUNCTION(execAddPolygonToList); \
	DECLARE_FUNCTION(execCreatePolygonListFromSinglePolygon); \
	DECLARE_FUNCTION(execGetPolygonListBounds); \
	DECLARE_FUNCTION(execGetPolygonListArea); \
	DECLARE_FUNCTION(execGetPolygonBounds); \
	DECLARE_FUNCTION(execGetPolygonArea); \
	DECLARE_FUNCTION(execGetPolygonVertex); \
	DECLARE_FUNCTION(execGetSimplePolygon); \
	DECLARE_FUNCTION(execGetPolygonVertices); \
	DECLARE_FUNCTION(execGetPolygonVertexCount); \
	DECLARE_FUNCTION(execGetPolygonHoleCount); \
	DECLARE_FUNCTION(execGetPolygonCount);


struct Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_186_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_PolygonListFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_PolygonListFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_PolygonListFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_186_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_PolygonListFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_PolygonListFunctions(UGeometryScriptLibrary_PolygonListFunctions&&) = delete; \
	UGeometryScriptLibrary_PolygonListFunctions(const UGeometryScriptLibrary_PolygonListFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_PolygonListFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_PolygonListFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_PolygonListFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_PolygonListFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_183_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_186_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_186_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_186_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_186_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_PolygonListFunctions;

// ********** End Class UGeometryScriptLibrary_PolygonListFunctions ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h

// ********** Begin Enum EGeometryScriptPolyOffsetJoinType *****************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTPOLYOFFSETJOINTYPE(op) \
	op(EGeometryScriptPolyOffsetJoinType::Square) \
	op(EGeometryScriptPolyOffsetJoinType::Round) \
	op(EGeometryScriptPolyOffsetJoinType::Miter) 

enum class EGeometryScriptPolyOffsetJoinType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPolyOffsetJoinType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptPolyOffsetJoinType>();
// ********** End Enum EGeometryScriptPolyOffsetJoinType *******************************************

// ********** Begin Enum EGeometryScriptPathOffsetEndType ******************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTPATHOFFSETENDTYPE(op) \
	op(EGeometryScriptPathOffsetEndType::Butt) \
	op(EGeometryScriptPathOffsetEndType::Square) \
	op(EGeometryScriptPathOffsetEndType::Round) 

enum class EGeometryScriptPathOffsetEndType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPathOffsetEndType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptPathOffsetEndType>();
// ********** End Enum EGeometryScriptPathOffsetEndType ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
