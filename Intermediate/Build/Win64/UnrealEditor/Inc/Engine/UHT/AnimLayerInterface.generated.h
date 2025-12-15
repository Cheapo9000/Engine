// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimLayerInterface.h"

#ifdef ENGINE_AnimLayerInterface_generated_h
#error "AnimLayerInterface.generated.h already included, missing '#pragma once' in AnimLayerInterface.h"
#endif
#define ENGINE_AnimLayerInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAnimLayerInterface **************************************************
struct Z_Construct_UClass_UAnimLayerInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimLayerInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimLayerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimLayerInterface(UAnimLayerInterface&&) = delete; \
	UAnimLayerInterface(const UAnimLayerInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimLayerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimLayerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimLayerInterface) \
	virtual ~UAnimLayerInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimLayerInterface(); \
	friend struct ::Z_Construct_UClass_UAnimLayerInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimLayerInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimLayerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimLayerInterface_NoRegister) \
	DECLARE_SERIALIZER(UAnimLayerInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimLayerInterface() {} \
public: \
	typedef UAnimLayerInterface UClassType; \
	typedef IAnimLayerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimLayerInterface;

// ********** End Interface UAnimLayerInterface ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLayerInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
