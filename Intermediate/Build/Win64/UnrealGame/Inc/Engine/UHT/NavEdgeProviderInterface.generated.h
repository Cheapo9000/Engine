// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavEdgeProviderInterface.h"

#ifdef ENGINE_NavEdgeProviderInterface_generated_h
#error "NavEdgeProviderInterface.generated.h already included, missing '#pragma once' in NavEdgeProviderInterface.h"
#endif
#define ENGINE_NavEdgeProviderInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UNavEdgeProviderInterface ********************************************
struct Z_Construct_UClass_UNavEdgeProviderInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNavEdgeProviderInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavEdgeProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavEdgeProviderInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavEdgeProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavEdgeProviderInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavEdgeProviderInterface(UNavEdgeProviderInterface&&) = delete; \
	UNavEdgeProviderInterface(const UNavEdgeProviderInterface&) = delete; \
	virtual ~UNavEdgeProviderInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavEdgeProviderInterface(); \
	friend struct ::Z_Construct_UClass_UNavEdgeProviderInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNavEdgeProviderInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavEdgeProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNavEdgeProviderInterface_NoRegister) \
	DECLARE_SERIALIZER(UNavEdgeProviderInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~INavEdgeProviderInterface() {} \
public: \
	typedef UNavEdgeProviderInterface UClassType; \
	typedef INavEdgeProviderInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavEdgeProviderInterface;

// ********** End Interface UNavEdgeProviderInterface **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
