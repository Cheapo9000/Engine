// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshProcessor.h"

#ifdef GEOMETRYFRAMEWORK_DynamicMeshProcessor_generated_h
#error "DynamicMeshProcessor.generated.h already included, missing '#pragma once' in DynamicMeshProcessor.h"
#endif
#define GEOMETRYFRAMEWORK_DynamicMeshProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;

// ********** Begin Class UDynamicMeshProcessorBlueprint *******************************************
#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshProcessor_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDynamicMeshProcessorBlueprint_Statics;
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshProcessorBlueprint_NoRegister();

#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshProcessor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMeshProcessorBlueprint(); \
	friend struct ::Z_Construct_UClass_UDynamicMeshProcessorBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYFRAMEWORK_API UClass* ::Z_Construct_UClass_UDynamicMeshProcessorBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicMeshProcessorBlueprint, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GeometryFramework"), Z_Construct_UClass_UDynamicMeshProcessorBlueprint_NoRegister) \
	DECLARE_SERIALIZER(UDynamicMeshProcessorBlueprint)


#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshProcessor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYFRAMEWORK_API UDynamicMeshProcessorBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicMeshProcessorBlueprint(UDynamicMeshProcessorBlueprint&&) = delete; \
	UDynamicMeshProcessorBlueprint(const UDynamicMeshProcessorBlueprint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYFRAMEWORK_API, UDynamicMeshProcessorBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMeshProcessorBlueprint); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicMeshProcessorBlueprint) \
	GEOMETRYFRAMEWORK_API virtual ~UDynamicMeshProcessorBlueprint();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshProcessor_h_15_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshProcessor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshProcessor_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshProcessor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshProcessor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicMeshProcessorBlueprint;

// ********** End Class UDynamicMeshProcessorBlueprint *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
