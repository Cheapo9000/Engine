// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshSubdivideFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshSubdivideFunctions_generated_h
#error "MeshSubdivideFunctions.generated.h already included, missing '#pragma once' in MeshSubdivideFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshSubdivideFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
enum class ESelectiveTessellatePatternType : uint8;
struct FGeometryScriptMeshSelection;
struct FGeometryScriptPNTessellateOptions;
struct FGeometryScriptSelectiveTessellateOptions;

// ********** Begin ScriptStruct FGeometryScriptPNTessellateOptions ********************************
struct Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptPNTessellateOptions;
// ********** End ScriptStruct FGeometryScriptPNTessellateOptions **********************************

// ********** Begin ScriptStruct FGeometryScriptSelectiveTessellateOptions *************************
struct Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptSelectiveTessellateOptions;
// ********** End ScriptStruct FGeometryScriptSelectiveTessellateOptions ***************************

// ********** Begin Class UGeometryScriptLibrary_MeshSubdivideFunctions ****************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplySelectiveTessellation); \
	DECLARE_FUNCTION(execApplyUniformTessellation); \
	DECLARE_FUNCTION(execApplyPNTessellation);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSubdivideFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshSubdivideFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSubdivideFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshSubdivideFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshSubdivideFunctions(UGeometryScriptLibrary_MeshSubdivideFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshSubdivideFunctions(const UGeometryScriptLibrary_MeshSubdivideFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshSubdivideFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSubdivideFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSubdivideFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshSubdivideFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_52_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshSubdivideFunctions;

// ********** End Class UGeometryScriptLibrary_MeshSubdivideFunctions ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h

// ********** Begin Enum ESelectiveTessellatePatternType *******************************************
#define FOREACH_ENUM_ESELECTIVETESSELLATEPATTERNTYPE(op) \
	op(ESelectiveTessellatePatternType::ConcentricRings) 

enum class ESelectiveTessellatePatternType : uint8;
template<> struct TIsUEnumClass<ESelectiveTessellatePatternType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESelectiveTessellatePatternType>();
// ********** End Enum ESelectiveTessellatePatternType *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
