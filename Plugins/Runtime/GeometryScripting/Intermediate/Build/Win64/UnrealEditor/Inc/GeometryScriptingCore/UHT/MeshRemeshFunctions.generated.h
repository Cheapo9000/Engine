// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshRemeshFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshRemeshFunctions_generated_h
#error "MeshRemeshFunctions.generated.h already included, missing '#pragma once' in MeshRemeshFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshRemeshFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptRemeshOptions;
struct FGeometryScriptUniformRemeshOptions;

// ********** Begin ScriptStruct FGeometryScriptRemeshOptions **************************************
struct Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptRemeshOptions;
// ********** End ScriptStruct FGeometryScriptRemeshOptions ****************************************

// ********** Begin ScriptStruct FGeometryScriptUniformRemeshOptions *******************************
struct Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_129_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptUniformRemeshOptions;
// ********** End ScriptStruct FGeometryScriptUniformRemeshOptions *********************************

// ********** Begin Class UGeometryScriptLibrary_RemeshingFunctions ********************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyUniformRemesh);


struct Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_RemeshingFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_RemeshingFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_RemeshingFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_149_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_RemeshingFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_RemeshingFunctions(UGeometryScriptLibrary_RemeshingFunctions&&) = delete; \
	UGeometryScriptLibrary_RemeshingFunctions(const UGeometryScriptLibrary_RemeshingFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_RemeshingFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_RemeshingFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_RemeshingFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_RemeshingFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_146_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_149_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_149_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_RemeshingFunctions;

// ********** End Class UGeometryScriptLibrary_RemeshingFunctions **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h

// ********** Begin Enum EGeometryScriptUniformRemeshTargetType ************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTUNIFORMREMESHTARGETTYPE(op) \
	op(EGeometryScriptUniformRemeshTargetType::TriangleCount) \
	op(EGeometryScriptUniformRemeshTargetType::TargetEdgeLength) 

enum class EGeometryScriptUniformRemeshTargetType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptUniformRemeshTargetType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptUniformRemeshTargetType>();
// ********** End Enum EGeometryScriptUniformRemeshTargetType **************************************

// ********** Begin Enum EGeometryScriptRemeshEdgeConstraintType ***********************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTREMESHEDGECONSTRAINTTYPE(op) \
	op(EGeometryScriptRemeshEdgeConstraintType::Fixed) \
	op(EGeometryScriptRemeshEdgeConstraintType::Refine) \
	op(EGeometryScriptRemeshEdgeConstraintType::Free) \
	op(EGeometryScriptRemeshEdgeConstraintType::Ignore) 

enum class EGeometryScriptRemeshEdgeConstraintType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptRemeshEdgeConstraintType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptRemeshEdgeConstraintType>();
// ********** End Enum EGeometryScriptRemeshEdgeConstraintType *************************************

// ********** Begin Enum EGeometryScriptRemeshSmoothingType ****************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTREMESHSMOOTHINGTYPE(op) \
	op(EGeometryScriptRemeshSmoothingType::Uniform) \
	op(EGeometryScriptRemeshSmoothingType::UVPreserving) \
	op(EGeometryScriptRemeshSmoothingType::Mixed) 

enum class EGeometryScriptRemeshSmoothingType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptRemeshSmoothingType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptRemeshSmoothingType>();
// ********** End Enum EGeometryScriptRemeshSmoothingType ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
