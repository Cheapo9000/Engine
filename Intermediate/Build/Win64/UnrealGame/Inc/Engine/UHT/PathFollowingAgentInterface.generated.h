// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/PathFollowingAgentInterface.h"

#ifdef ENGINE_PathFollowingAgentInterface_generated_h
#error "PathFollowingAgentInterface.generated.h already included, missing '#pragma once' in PathFollowingAgentInterface.h"
#endif
#define ENGINE_PathFollowingAgentInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPathFollowingAgentInterface *****************************************
struct Z_Construct_UClass_UPathFollowingAgentInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPathFollowingAgentInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPathFollowingAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPathFollowingAgentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPathFollowingAgentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathFollowingAgentInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPathFollowingAgentInterface(UPathFollowingAgentInterface&&) = delete; \
	UPathFollowingAgentInterface(const UPathFollowingAgentInterface&) = delete; \
	virtual ~UPathFollowingAgentInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPathFollowingAgentInterface(); \
	friend struct ::Z_Construct_UClass_UPathFollowingAgentInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPathFollowingAgentInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPathFollowingAgentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPathFollowingAgentInterface_NoRegister) \
	DECLARE_SERIALIZER(UPathFollowingAgentInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IPathFollowingAgentInterface() {} \
public: \
	typedef UPathFollowingAgentInterface UClassType; \
	typedef IPathFollowingAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPathFollowingAgentInterface;

// ********** End Interface UPathFollowingAgentInterface *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
