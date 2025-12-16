// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusNodeGraphCollectionOwner.h"

#ifdef OPTIMUSCORE_IOptimusNodeGraphCollectionOwner_generated_h
#error "IOptimusNodeGraphCollectionOwner.generated.h already included, missing '#pragma once' in IOptimusNodeGraphCollectionOwner.h"
#endif
#define OPTIMUSCORE_IOptimusNodeGraphCollectionOwner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusNodeGraphCollectionOwner *************************************
struct Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphCollectionOwner_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusNodeGraphCollectionOwner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusNodeGraphCollectionOwner(UOptimusNodeGraphCollectionOwner&&) = delete; \
	UOptimusNodeGraphCollectionOwner(const UOptimusNodeGraphCollectionOwner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusNodeGraphCollectionOwner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNodeGraphCollectionOwner); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusNodeGraphCollectionOwner) \
	virtual ~UOptimusNodeGraphCollectionOwner() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphCollectionOwner_h_24_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusNodeGraphCollectionOwner(); \
	friend struct ::Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusNodeGraphCollectionOwner, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_NoRegister) \
	DECLARE_SERIALIZER(UOptimusNodeGraphCollectionOwner)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphCollectionOwner_h_24_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphCollectionOwner_h_24_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphCollectionOwner_h_24_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphCollectionOwner_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusNodeGraphCollectionOwner() {} \
public: \
	typedef UOptimusNodeGraphCollectionOwner UClassType; \
	typedef IOptimusNodeGraphCollectionOwner ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphCollectionOwner_h_20_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphCollectionOwner_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphCollectionOwner_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusNodeGraphCollectionOwner;

// ********** End Interface UOptimusNodeGraphCollectionOwner ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphCollectionOwner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
