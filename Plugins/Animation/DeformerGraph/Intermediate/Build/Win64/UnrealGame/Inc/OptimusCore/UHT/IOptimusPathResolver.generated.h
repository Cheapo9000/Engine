// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusPathResolver.h"

#ifdef OPTIMUSCORE_IOptimusPathResolver_generated_h
#error "IOptimusPathResolver.generated.h already included, missing '#pragma once' in IOptimusPathResolver.h"
#endif
#define OPTIMUSCORE_IOptimusPathResolver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusPathResolver *************************************************
struct Z_Construct_UClass_UOptimusPathResolver_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPathResolver_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPathResolver_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusPathResolver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusPathResolver(UOptimusPathResolver&&) = delete; \
	UOptimusPathResolver(const UOptimusPathResolver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusPathResolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusPathResolver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusPathResolver) \
	virtual ~UOptimusPathResolver() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPathResolver_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusPathResolver(); \
	friend struct ::Z_Construct_UClass_UOptimusPathResolver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusPathResolver_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusPathResolver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusPathResolver_NoRegister) \
	DECLARE_SERIALIZER(UOptimusPathResolver)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPathResolver_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPathResolver_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPathResolver_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPathResolver_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusPathResolver() {} \
public: \
	typedef UOptimusPathResolver UClassType; \
	typedef IOptimusPathResolver ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPathResolver_h_19_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPathResolver_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPathResolver_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusPathResolver;

// ********** End Interface UOptimusPathResolver ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPathResolver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
