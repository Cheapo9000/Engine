// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/RVOAvoidanceInterface.h"

#ifdef ENGINE_RVOAvoidanceInterface_generated_h
#error "RVOAvoidanceInterface.generated.h already included, missing '#pragma once' in RVOAvoidanceInterface.h"
#endif
#define ENGINE_RVOAvoidanceInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface URVOAvoidanceInterface ***********************************************
struct Z_Construct_UClass_URVOAvoidanceInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_URVOAvoidanceInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URVOAvoidanceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URVOAvoidanceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URVOAvoidanceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URVOAvoidanceInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URVOAvoidanceInterface(URVOAvoidanceInterface&&) = delete; \
	URVOAvoidanceInterface(const URVOAvoidanceInterface&) = delete; \
	virtual ~URVOAvoidanceInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURVOAvoidanceInterface(); \
	friend struct ::Z_Construct_UClass_URVOAvoidanceInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_URVOAvoidanceInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(URVOAvoidanceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_URVOAvoidanceInterface_NoRegister) \
	DECLARE_SERIALIZER(URVOAvoidanceInterface)


#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~IRVOAvoidanceInterface() {} \
public: \
	typedef URVOAvoidanceInterface UClassType; \
	typedef IRVOAvoidanceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URVOAvoidanceInterface;

// ********** End Interface URVOAvoidanceInterface *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
