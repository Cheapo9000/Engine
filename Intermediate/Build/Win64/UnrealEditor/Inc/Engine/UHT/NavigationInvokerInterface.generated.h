// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavigationInvokerInterface.h"

#ifdef ENGINE_NavigationInvokerInterface_generated_h
#error "NavigationInvokerInterface.generated.h already included, missing '#pragma once' in NavigationInvokerInterface.h"
#endif
#define ENGINE_NavigationInvokerInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UNavigationInvokerInterface ******************************************
struct Z_Construct_UClass_UNavigationInvokerInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNavigationInvokerInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavigationInvokerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationInvokerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavigationInvokerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationInvokerInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavigationInvokerInterface(UNavigationInvokerInterface&&) = delete; \
	UNavigationInvokerInterface(const UNavigationInvokerInterface&) = delete; \
	virtual ~UNavigationInvokerInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavigationInvokerInterface(); \
	friend struct ::Z_Construct_UClass_UNavigationInvokerInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNavigationInvokerInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavigationInvokerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNavigationInvokerInterface_NoRegister) \
	DECLARE_SERIALIZER(UNavigationInvokerInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~INavigationInvokerInterface() {} \
public: \
	typedef UNavigationInvokerInterface UClassType; \
	typedef INavigationInvokerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerInterface_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavigationInvokerInterface;

// ********** End Interface UNavigationInvokerInterface ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
