// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rendering/SkeletalMeshHalfEdgeBufferAccessor.h"

#ifdef ENGINE_SkeletalMeshHalfEdgeBufferAccessor_generated_h
#error "SkeletalMeshHalfEdgeBufferAccessor.generated.h already included, missing '#pragma once' in SkeletalMeshHalfEdgeBufferAccessor.h"
#endif
#define ENGINE_SkeletalMeshHalfEdgeBufferAccessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USkeletalMeshHalfEdgeBufferAccessor **********************************
struct Z_Construct_UClass_USkeletalMeshHalfEdgeBufferAccessor_Statics;
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshHalfEdgeBufferAccessor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshHalfEdgeBufferAccessor_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMeshHalfEdgeBufferAccessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshHalfEdgeBufferAccessor(USkeletalMeshHalfEdgeBufferAccessor&&) = delete; \
	USkeletalMeshHalfEdgeBufferAccessor(const USkeletalMeshHalfEdgeBufferAccessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshHalfEdgeBufferAccessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshHalfEdgeBufferAccessor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshHalfEdgeBufferAccessor) \
	virtual ~USkeletalMeshHalfEdgeBufferAccessor() = default;


#define FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshHalfEdgeBufferAccessor_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSkeletalMeshHalfEdgeBufferAccessor(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshHalfEdgeBufferAccessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USkeletalMeshHalfEdgeBufferAccessor_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshHalfEdgeBufferAccessor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USkeletalMeshHalfEdgeBufferAccessor_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshHalfEdgeBufferAccessor)


#define FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshHalfEdgeBufferAccessor_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshHalfEdgeBufferAccessor_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshHalfEdgeBufferAccessor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshHalfEdgeBufferAccessor_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISkeletalMeshHalfEdgeBufferAccessor() {} \
public: \
	typedef USkeletalMeshHalfEdgeBufferAccessor UClassType; \
	typedef ISkeletalMeshHalfEdgeBufferAccessor ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshHalfEdgeBufferAccessor_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshHalfEdgeBufferAccessor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshHalfEdgeBufferAccessor_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshHalfEdgeBufferAccessor;

// ********** End Interface USkeletalMeshHalfEdgeBufferAccessor ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshHalfEdgeBufferAccessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
