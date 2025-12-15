// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavAgentInterface.h"

#ifdef ENGINE_NavAgentInterface_generated_h
#error "NavAgentInterface.generated.h already included, missing '#pragma once' in NavAgentInterface.h"
#endif
#define ENGINE_NavAgentInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UNavAgentInterface ***************************************************
struct Z_Construct_UClass_UNavAgentInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavAgentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavAgentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavAgentInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavAgentInterface(UNavAgentInterface&&) = delete; \
	UNavAgentInterface(const UNavAgentInterface&) = delete; \
	virtual ~UNavAgentInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavAgentInterface(); \
	friend struct ::Z_Construct_UClass_UNavAgentInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNavAgentInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavAgentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNavAgentInterface_NoRegister) \
	DECLARE_SERIALIZER(UNavAgentInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~INavAgentInterface() {} \
public: \
	typedef UNavAgentInterface UClassType; \
	typedef INavAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavAgentInterface;

// ********** End Interface UNavAgentInterface *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
