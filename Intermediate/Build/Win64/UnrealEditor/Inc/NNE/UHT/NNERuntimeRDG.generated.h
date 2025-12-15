// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNERuntimeRDG.h"

#ifdef NNE_NNERuntimeRDG_generated_h
#error "NNERuntimeRDG.generated.h already included, missing '#pragma once' in NNERuntimeRDG.h"
#endif
#define NNE_NNERuntimeRDG_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UNNERuntimeRDG *******************************************************
struct Z_Construct_UClass_UNNERuntimeRDG_Statics;
NNE_API UClass* Z_Construct_UClass_UNNERuntimeRDG_NoRegister();

#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h_135_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NNE_API UNNERuntimeRDG(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNNERuntimeRDG(UNNERuntimeRDG&&) = delete; \
	UNNERuntimeRDG(const UNNERuntimeRDG&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NNE_API, UNNERuntimeRDG); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNERuntimeRDG); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNERuntimeRDG) \
	virtual ~UNNERuntimeRDG() = default;


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h_135_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNNERuntimeRDG(); \
	friend struct ::Z_Construct_UClass_UNNERuntimeRDG_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NNE_API UClass* ::Z_Construct_UClass_UNNERuntimeRDG_NoRegister(); \
public: \
	DECLARE_CLASS2(UNNERuntimeRDG, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NNE"), Z_Construct_UClass_UNNERuntimeRDG_NoRegister) \
	DECLARE_SERIALIZER(UNNERuntimeRDG)


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h_135_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h_135_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h_135_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h_135_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INNERuntimeRDG() {} \
public: \
	typedef UNNERuntimeRDG UClassType; \
	typedef INNERuntimeRDG ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h_132_PROLOG
#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h_145_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h_135_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNNERuntimeRDG;

// ********** End Interface UNNERuntimeRDG *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
