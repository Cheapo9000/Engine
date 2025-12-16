// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNERuntimeBasicCpu.h"

#ifdef NNERUNTIMEBASICCPU_NNERuntimeBasicCpu_generated_h
#error "NNERuntimeBasicCpu.generated.h already included, missing '#pragma once' in NNERuntimeBasicCpu.h"
#endif
#define NNERUNTIMEBASICCPU_NNERuntimeBasicCpu_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNNERuntimeBasicCpuImpl **************************************************
struct Z_Construct_UClass_UNNERuntimeBasicCpuImpl_Statics;
NNERUNTIMEBASICCPU_API UClass* Z_Construct_UClass_UNNERuntimeBasicCpuImpl_NoRegister();

#define FID_Engine_Plugins_Experimental_NNERuntimeBasicCpu_Source_NNERuntimeBasicCpu_Private_NNERuntimeBasicCpu_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNNERuntimeBasicCpuImpl(); \
	friend struct ::Z_Construct_UClass_UNNERuntimeBasicCpuImpl_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NNERUNTIMEBASICCPU_API UClass* ::Z_Construct_UClass_UNNERuntimeBasicCpuImpl_NoRegister(); \
public: \
	DECLARE_CLASS2(UNNERuntimeBasicCpuImpl, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NNERuntimeBasicCpu"), Z_Construct_UClass_UNNERuntimeBasicCpuImpl_NoRegister) \
	DECLARE_SERIALIZER(UNNERuntimeBasicCpuImpl) \
	virtual UObject* _getUObject() const override { return const_cast<UNNERuntimeBasicCpuImpl*>(this); }


#define FID_Engine_Plugins_Experimental_NNERuntimeBasicCpu_Source_NNERuntimeBasicCpu_Private_NNERuntimeBasicCpu_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NNERUNTIMEBASICCPU_API UNNERuntimeBasicCpuImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNNERuntimeBasicCpuImpl(UNNERuntimeBasicCpuImpl&&) = delete; \
	UNNERuntimeBasicCpuImpl(const UNNERuntimeBasicCpuImpl&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NNERUNTIMEBASICCPU_API, UNNERuntimeBasicCpuImpl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNERuntimeBasicCpuImpl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNERuntimeBasicCpuImpl) \
	NNERUNTIMEBASICCPU_API virtual ~UNNERuntimeBasicCpuImpl();


#define FID_Engine_Plugins_Experimental_NNERuntimeBasicCpu_Source_NNERuntimeBasicCpu_Private_NNERuntimeBasicCpu_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_NNERuntimeBasicCpu_Source_NNERuntimeBasicCpu_Private_NNERuntimeBasicCpu_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_NNERuntimeBasicCpu_Source_NNERuntimeBasicCpu_Private_NNERuntimeBasicCpu_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_NNERuntimeBasicCpu_Source_NNERuntimeBasicCpu_Private_NNERuntimeBasicCpu_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNNERuntimeBasicCpuImpl;

// ********** End Class UNNERuntimeBasicCpuImpl ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NNERuntimeBasicCpu_Source_NNERuntimeBasicCpu_Private_NNERuntimeBasicCpu_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
