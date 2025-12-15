// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Changes/MeshVertexChange.h"

#ifdef GEOMETRYFRAMEWORK_MeshVertexChange_generated_h
#error "MeshVertexChange.generated.h already included, missing '#pragma once' in MeshVertexChange.h"
#endif
#define GEOMETRYFRAMEWORK_MeshVertexChange_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMeshVertexCommandChangeTarget ***************************************
struct Z_Construct_UClass_UMeshVertexCommandChangeTarget_Statics;
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister();

#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYFRAMEWORK_API UMeshVertexCommandChangeTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshVertexCommandChangeTarget(UMeshVertexCommandChangeTarget&&) = delete; \
	UMeshVertexCommandChangeTarget(const UMeshVertexCommandChangeTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYFRAMEWORK_API, UMeshVertexCommandChangeTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshVertexCommandChangeTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshVertexCommandChangeTarget) \
	virtual ~UMeshVertexCommandChangeTarget() = default;


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h_124_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMeshVertexCommandChangeTarget(); \
	friend struct ::Z_Construct_UClass_UMeshVertexCommandChangeTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYFRAMEWORK_API UClass* ::Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshVertexCommandChangeTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GeometryFramework"), Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister) \
	DECLARE_SERIALIZER(UMeshVertexCommandChangeTarget)


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h_124_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h_124_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h_124_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h_124_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMeshVertexCommandChangeTarget() {} \
public: \
	typedef UMeshVertexCommandChangeTarget UClassType; \
	typedef IMeshVertexCommandChangeTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h_121_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h_131_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h_124_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshVertexCommandChangeTarget;

// ********** End Interface UMeshVertexCommandChangeTarget *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
