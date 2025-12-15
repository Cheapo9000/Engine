// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/TransformableHandle.h"

#ifdef CONSTRAINTS_TransformableHandle_generated_h
#error "TransformableHandle.generated.h already included, missing '#pragma once' in TransformableHandle.h"
#endif
#define CONSTRAINTS_TransformableHandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTransformableHandle *****************************************************
struct Z_Construct_UClass_UTransformableHandle_Statics;
CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableHandle_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformableHandle(); \
	friend struct ::Z_Construct_UClass_UTransformableHandle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONSTRAINTS_API UClass* ::Z_Construct_UClass_UTransformableHandle_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransformableHandle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Constraints"), Z_Construct_UClass_UTransformableHandle_NoRegister) \
	DECLARE_SERIALIZER(UTransformableHandle)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONSTRAINTS_API UTransformableHandle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransformableHandle(UTransformableHandle&&) = delete; \
	UTransformableHandle(const UTransformableHandle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONSTRAINTS_API, UTransformableHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformableHandle); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformableHandle)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h_43_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransformableHandle;

// ********** End Class UTransformableHandle *******************************************************

// ********** Begin Class UTransformableComponentHandle ********************************************
struct Z_Construct_UClass_UTransformableComponentHandle_Statics;
CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableComponentHandle_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h_158_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformableComponentHandle(); \
	friend struct ::Z_Construct_UClass_UTransformableComponentHandle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONSTRAINTS_API UClass* ::Z_Construct_UClass_UTransformableComponentHandle_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransformableComponentHandle, UTransformableHandle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Constraints"), Z_Construct_UClass_UTransformableComponentHandle_NoRegister) \
	DECLARE_SERIALIZER(UTransformableComponentHandle)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h_158_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONSTRAINTS_API UTransformableComponentHandle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransformableComponentHandle(UTransformableComponentHandle&&) = delete; \
	UTransformableComponentHandle(const UTransformableComponentHandle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONSTRAINTS_API, UTransformableComponentHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformableComponentHandle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformableComponentHandle)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h_155_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h_158_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h_158_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h_158_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransformableComponentHandle;

// ********** End Class UTransformableComponentHandle **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h

// ********** Begin Enum EHandleEvent **************************************************************
#define FOREACH_ENUM_EHANDLEEVENT(op) \
	op(EHandleEvent::LocalTransformUpdated) \
	op(EHandleEvent::GlobalTransformUpdated) \
	op(EHandleEvent::ComponentUpdated) \
	op(EHandleEvent::UpperDependencyUpdated) \
	op(EHandleEvent::Max) 

enum class EHandleEvent : uint8;
template<> struct TIsUEnumClass<EHandleEvent> { enum { Value = true }; };
template<> CONSTRAINTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EHandleEvent>();
// ********** End Enum EHandleEvent ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
