// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusNodeFunctionLibraryOwner.h"

#ifdef OPTIMUSCORE_IOptimusNodeFunctionLibraryOwner_generated_h
#error "IOptimusNodeFunctionLibraryOwner.generated.h already included, missing '#pragma once' in IOptimusNodeFunctionLibraryOwner.h"
#endif
#define OPTIMUSCORE_IOptimusNodeFunctionLibraryOwner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusNodeFunctionLibraryOwner *************************************
struct Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusNodeFunctionLibraryOwner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusNodeFunctionLibraryOwner(UOptimusNodeFunctionLibraryOwner&&) = delete; \
	UOptimusNodeFunctionLibraryOwner(const UOptimusNodeFunctionLibraryOwner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusNodeFunctionLibraryOwner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNodeFunctionLibraryOwner); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusNodeFunctionLibraryOwner) \
	virtual ~UOptimusNodeFunctionLibraryOwner() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusNodeFunctionLibraryOwner(); \
	friend struct ::Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusNodeFunctionLibraryOwner, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_NoRegister) \
	DECLARE_SERIALIZER(UOptimusNodeFunctionLibraryOwner)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusNodeFunctionLibraryOwner() {} \
public: \
	typedef UOptimusNodeFunctionLibraryOwner UClassType; \
	typedef IOptimusNodeFunctionLibraryOwner ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_10_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusNodeFunctionLibraryOwner;

// ********** End Interface UOptimusNodeFunctionLibraryOwner ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
