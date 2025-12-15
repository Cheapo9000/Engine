// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/BlendableInterface.h"

#ifdef ENGINE_BlendableInterface_generated_h
#error "BlendableInterface.generated.h already included, missing '#pragma once' in BlendableInterface.h"
#endif
#define ENGINE_BlendableInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UBlendableInterface **************************************************
struct Z_Construct_UClass_UBlendableInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlendableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendableInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlendableInterface(UBlendableInterface&&) = delete; \
	UBlendableInterface(const UBlendableInterface&) = delete; \
	virtual ~UBlendableInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_89_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBlendableInterface(); \
	friend struct ::Z_Construct_UClass_UBlendableInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBlendableInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlendableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBlendableInterface_NoRegister) \
	DECLARE_SERIALIZER(UBlendableInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_89_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_89_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_89_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_89_INCLASS_IINTERFACE \
protected: \
	virtual ~IBlendableInterface() {} \
public: \
	typedef UBlendableInterface UClassType; \
	typedef IBlendableInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_86_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_89_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlendableInterface;

// ********** End Interface UBlendableInterface ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h

// ********** Begin Enum EBlendableLocation ********************************************************
#define FOREACH_ENUM_EBLENDABLELOCATION(op) \
	op(BL_SceneColorBeforeDOF) \
	op(BL_SceneColorAfterDOF) \
	op(BL_TranslucencyAfterDOF) \
	op(BL_SSRInput) \
	op(BL_SceneColorBeforeBloom) \
	op(BL_ReplacingTonemapper) \
	op(BL_SceneColorAfterTonemapping) \
	op(BL_BeforeTranslucency) \
	op(BL_BeforeTonemapping) \
	op(BL_AfterTonemapping) 

enum EBlendableLocation : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlendableLocation>();
// ********** End Enum EBlendableLocation **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
