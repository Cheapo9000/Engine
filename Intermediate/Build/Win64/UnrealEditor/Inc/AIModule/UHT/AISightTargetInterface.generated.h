// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISightTargetInterface.h"

#ifdef AIMODULE_AISightTargetInterface_generated_h
#error "AISightTargetInterface.generated.h already included, missing '#pragma once' in AISightTargetInterface.h"
#endif
#define AIMODULE_AISightTargetInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAISightTargetInterface **********************************************
struct Z_Construct_UClass_UAISightTargetInterface_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISightTargetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISightTargetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISightTargetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISightTargetInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISightTargetInterface(UAISightTargetInterface&&) = delete; \
	UAISightTargetInterface(const UAISightTargetInterface&) = delete; \
	virtual ~UAISightTargetInterface() = default;


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAISightTargetInterface(); \
	friend struct ::Z_Construct_UClass_UAISightTargetInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAISightTargetInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISightTargetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAISightTargetInterface_NoRegister) \
	DECLARE_SERIALIZER(UAISightTargetInterface)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IAISightTargetInterface() {} \
public: \
	typedef UAISightTargetInterface UClassType; \
	typedef IAISightTargetInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_13_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISightTargetInterface;

// ********** End Interface UAISightTargetInterface ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
