// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UDynamicMesh.h"

#ifdef GEOMETRYFRAMEWORK_UDynamicMesh_generated_h
#error "UDynamicMesh.generated.h already included, missing '#pragma once' in UDynamicMesh.h"
#endif
#define GEOMETRYFRAMEWORK_UDynamicMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;

// ********** Begin Class UDynamicMeshGenerator ****************************************************
struct Z_Construct_UClass_UDynamicMeshGenerator_Statics;
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshGenerator_NoRegister();

#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMeshGenerator(); \
	friend struct ::Z_Construct_UClass_UDynamicMeshGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYFRAMEWORK_API UClass* ::Z_Construct_UClass_UDynamicMeshGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicMeshGenerator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GeometryFramework"), Z_Construct_UClass_UDynamicMeshGenerator_NoRegister) \
	DECLARE_SERIALIZER(UDynamicMeshGenerator)


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYFRAMEWORK_API UDynamicMeshGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicMeshGenerator(UDynamicMeshGenerator&&) = delete; \
	UDynamicMeshGenerator(const UDynamicMeshGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYFRAMEWORK_API, UDynamicMeshGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMeshGenerator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicMeshGenerator) \
	GEOMETRYFRAMEWORK_API virtual ~UDynamicMeshGenerator();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_21_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicMeshGenerator;

// ********** End Class UDynamicMeshGenerator ******************************************************

// ********** Begin ScriptStruct FDynamicMeshChangeInfo ********************************************
struct Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics;
#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics; \
	GEOMETRYFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FDynamicMeshChangeInfo;
// ********** End ScriptStruct FDynamicMeshChangeInfo **********************************************

// ********** Begin Delegate FOnDynamicMeshModifiedBP **********************************************
#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_111_DELEGATE \
GEOMETRYFRAMEWORK_API void FOnDynamicMeshModifiedBP_DelegateWrapper(const FMulticastScriptDelegate& OnDynamicMeshModifiedBP, UDynamicMesh* Mesh);


// ********** End Delegate FOnDynamicMeshModifiedBP ************************************************

// ********** Begin Class UDynamicMesh *************************************************************
#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_124_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetTriangleCount); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execResetToCube); \
	DECLARE_FUNCTION(execReset);


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_124_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDynamicMesh, GEOMETRYFRAMEWORK_API)


struct Z_Construct_UClass_UDynamicMesh_Statics;
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();

#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_124_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicMesh(); \
	friend struct ::Z_Construct_UClass_UDynamicMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYFRAMEWORK_API UClass* ::Z_Construct_UClass_UDynamicMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryFramework"), Z_Construct_UClass_UDynamicMesh_NoRegister) \
	DECLARE_SERIALIZER(UDynamicMesh) \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_124_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UDynamicMesh*>(this); }


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_124_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYFRAMEWORK_API UDynamicMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYFRAMEWORK_API, UDynamicMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicMesh(UDynamicMesh&&) = delete; \
	UDynamicMesh(const UDynamicMesh&) = delete; \
	GEOMETRYFRAMEWORK_API virtual ~UDynamicMesh();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_118_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_124_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_124_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_124_INCLASS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_124_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicMesh;

// ********** End Class UDynamicMesh ***************************************************************

// ********** Begin Class UDynamicMeshPool *********************************************************
#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_389_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFreeAllMeshes); \
	DECLARE_FUNCTION(execReturnAllMeshes); \
	DECLARE_FUNCTION(execReturnMesh); \
	DECLARE_FUNCTION(execRequestMesh);


struct Z_Construct_UClass_UDynamicMeshPool_Statics;
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshPool_NoRegister();

#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_389_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMeshPool(); \
	friend struct ::Z_Construct_UClass_UDynamicMeshPool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYFRAMEWORK_API UClass* ::Z_Construct_UClass_UDynamicMeshPool_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicMeshPool, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GeometryFramework"), Z_Construct_UClass_UDynamicMeshPool_NoRegister) \
	DECLARE_SERIALIZER(UDynamicMeshPool)


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_389_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYFRAMEWORK_API UDynamicMeshPool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicMeshPool(UDynamicMeshPool&&) = delete; \
	UDynamicMeshPool(const UDynamicMeshPool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYFRAMEWORK_API, UDynamicMeshPool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMeshPool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicMeshPool) \
	GEOMETRYFRAMEWORK_API virtual ~UDynamicMeshPool();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_386_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_389_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_389_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_389_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_389_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicMeshPool;

// ********** End Class UDynamicMeshPool ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h

// ********** Begin Enum EDynamicMeshChangeType ****************************************************
#define FOREACH_ENUM_EDYNAMICMESHCHANGETYPE(op) \
	op(EDynamicMeshChangeType::GeneralEdit) \
	op(EDynamicMeshChangeType::MeshChange) \
	op(EDynamicMeshChangeType::MeshReplacementChange) \
	op(EDynamicMeshChangeType::MeshVertexChange) \
	op(EDynamicMeshChangeType::DeformationEdit) \
	op(EDynamicMeshChangeType::AttributeEdit) 

enum class EDynamicMeshChangeType : uint8;
template<> struct TIsUEnumClass<EDynamicMeshChangeType> { enum { Value = true }; };
template<> GEOMETRYFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EDynamicMeshChangeType>();
// ********** End Enum EDynamicMeshChangeType ******************************************************

// ********** Begin Enum EDynamicMeshAttributeChangeFlags ******************************************
#define FOREACH_ENUM_EDYNAMICMESHATTRIBUTECHANGEFLAGS(op) \
	op(EDynamicMeshAttributeChangeFlags::Unknown) \
	op(EDynamicMeshAttributeChangeFlags::MeshTopology) \
	op(EDynamicMeshAttributeChangeFlags::VertexPositions) \
	op(EDynamicMeshAttributeChangeFlags::NormalsTangents) \
	op(EDynamicMeshAttributeChangeFlags::VertexColors) \
	op(EDynamicMeshAttributeChangeFlags::UVs) \
	op(EDynamicMeshAttributeChangeFlags::TriangleGroups) 

enum class EDynamicMeshAttributeChangeFlags : uint8;
template<> struct TIsUEnumClass<EDynamicMeshAttributeChangeFlags> { enum { Value = true }; };
template<> GEOMETRYFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EDynamicMeshAttributeChangeFlags>();
// ********** End Enum EDynamicMeshAttributeChangeFlags ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
