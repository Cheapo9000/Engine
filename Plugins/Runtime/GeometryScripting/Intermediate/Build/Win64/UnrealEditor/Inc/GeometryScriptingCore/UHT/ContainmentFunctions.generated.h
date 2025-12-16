// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/ContainmentFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_ContainmentFunctions_generated_h
#error "ContainmentFunctions.generated.h already included, missing '#pragma once' in ContainmentFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_ContainmentFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptConvexDecompositionOptions;
struct FGeometryScriptConvexHullOptions;
struct FGeometryScriptFitOrientedBoxOptions;
struct FGeometryScriptMeshSelection;
struct FGeometryScriptSweptHullOptions;
struct FOrientedBox;

// ********** Begin ScriptStruct FGeometryScriptConvexHullOptions **********************************
struct Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptConvexHullOptions;
// ********** End ScriptStruct FGeometryScriptConvexHullOptions ************************************

// ********** Begin ScriptStruct FGeometryScriptSweptHullOptions ***********************************
struct Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptSweptHullOptions;
// ********** End ScriptStruct FGeometryScriptSweptHullOptions *************************************

// ********** Begin ScriptStruct FGeometryScriptConvexDecompositionOptions *************************
struct Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptConvexDecompositionOptions;
// ********** End ScriptStruct FGeometryScriptConvexDecompositionOptions ***************************

// ********** Begin ScriptStruct FGeometryScriptFitOrientedBoxOptions ******************************
struct Z_Construct_UScriptStruct_FGeometryScriptFitOrientedBoxOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_99_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptFitOrientedBoxOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptFitOrientedBoxOptions;
// ********** End ScriptStruct FGeometryScriptFitOrientedBoxOptions ********************************

// ********** Begin Class UGeometryScriptLibrary_ContainmentFunctions ******************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execComputeMeshOrientedBox); \
	DECLARE_FUNCTION(execComputeMeshConvexDecomposition); \
	DECLARE_FUNCTION(execComputeMeshSweptHull); \
	DECLARE_FUNCTION(execComputeMeshConvexHull);


struct Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_ContainmentFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_ContainmentFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_ContainmentFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_ContainmentFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_ContainmentFunctions(UGeometryScriptLibrary_ContainmentFunctions&&) = delete; \
	UGeometryScriptLibrary_ContainmentFunctions(const UGeometryScriptLibrary_ContainmentFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_ContainmentFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_ContainmentFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_ContainmentFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_ContainmentFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_112_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_115_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_ContainmentFunctions;

// ********** End Class UGeometryScriptLibrary_ContainmentFunctions ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h

// ********** Begin Enum FGeometryScriptFitOrientedBoxMethod ***************************************
#define FOREACH_ENUM_FGEOMETRYSCRIPTFITORIENTEDBOXMETHOD(op) \
	op(FGeometryScriptFitOrientedBoxMethod::FastIterative) \
	op(FGeometryScriptFitOrientedBoxMethod::Precise) 

enum class FGeometryScriptFitOrientedBoxMethod : uint8;
template<> struct TIsUEnumClass<FGeometryScriptFitOrientedBoxMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<FGeometryScriptFitOrientedBoxMethod>();
// ********** End Enum FGeometryScriptFitOrientedBoxMethod *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
