// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNERuntimeGPU.h"

#ifdef NNE_NNERuntimeGPU_generated_h
#error "NNERuntimeGPU.generated.h already included, missing '#pragma once' in NNERuntimeGPU.h"
#endif
#define NNE_NNERuntimeGPU_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UNNERuntimeGPU *******************************************************
struct Z_Construct_UClass_UNNERuntimeGPU_Statics;
NNE_API UClass* Z_Construct_UClass_UNNERuntimeGPU_NoRegister();

#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NNE_API UNNERuntimeGPU(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNNERuntimeGPU(UNNERuntimeGPU&&) = delete; \
	UNNERuntimeGPU(const UNNERuntimeGPU&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NNE_API, UNNERuntimeGPU); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNERuntimeGPU); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNERuntimeGPU) \
	virtual ~UNNERuntimeGPU() = default;


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_55_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNNERuntimeGPU(); \
	friend struct ::Z_Construct_UClass_UNNERuntimeGPU_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NNE_API UClass* ::Z_Construct_UClass_UNNERuntimeGPU_NoRegister(); \
public: \
	DECLARE_CLASS2(UNNERuntimeGPU, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NNE"), Z_Construct_UClass_UNNERuntimeGPU_NoRegister) \
	DECLARE_SERIALIZER(UNNERuntimeGPU)


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_55_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_55_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_55_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_55_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INNERuntimeGPU() {} \
public: \
	typedef UNNERuntimeGPU UClassType; \
	typedef INNERuntimeGPU ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_52_PROLOG
#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h_55_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNNERuntimeGPU;

// ********** End Interface UNNERuntimeGPU *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
