// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Changes/MeshChange.h"

#ifdef GEOMETRYFRAMEWORK_MeshChange_generated_h
#error "MeshChange.generated.h already included, missing '#pragma once' in MeshChange.h"
#endif
#define GEOMETRYFRAMEWORK_MeshChange_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMeshCommandChangeTarget *********************************************
struct Z_Construct_UClass_UMeshCommandChangeTarget_Statics;
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister();

#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYFRAMEWORK_API UMeshCommandChangeTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshCommandChangeTarget(UMeshCommandChangeTarget&&) = delete; \
	UMeshCommandChangeTarget(const UMeshCommandChangeTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYFRAMEWORK_API, UMeshCommandChangeTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshCommandChangeTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshCommandChangeTarget) \
	virtual ~UMeshCommandChangeTarget() = default;


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_72_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMeshCommandChangeTarget(); \
	friend struct ::Z_Construct_UClass_UMeshCommandChangeTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYFRAMEWORK_API UClass* ::Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshCommandChangeTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GeometryFramework"), Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister) \
	DECLARE_SERIALIZER(UMeshCommandChangeTarget)


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_72_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_72_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_72_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_72_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMeshCommandChangeTarget() {} \
public: \
	typedef UMeshCommandChangeTarget UClassType; \
	typedef IMeshCommandChangeTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_69_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_72_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshCommandChangeTarget;

// ********** End Interface UMeshCommandChangeTarget ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
