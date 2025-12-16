// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GameFrameworkInitStateInterface.h"

#ifdef MODULARGAMEPLAY_GameFrameworkInitStateInterface_generated_h
#error "GameFrameworkInitStateInterface.generated.h already included, missing '#pragma once' in GameFrameworkInitStateInterface.h"
#endif
#define MODULARGAMEPLAY_GameFrameworkInitStateInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;

// ********** Begin Interface UGameFrameworkInitStateInterface *************************************
#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterInitStateDelegate); \
	DECLARE_FUNCTION(execRegisterAndCallForInitStateChange); \
	DECLARE_FUNCTION(execHasReachedInitState); \
	DECLARE_FUNCTION(execGetInitState); \
	DECLARE_FUNCTION(execGetFeatureName);


struct Z_Construct_UClass_UGameFrameworkInitStateInterface_Statics;
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODULARGAMEPLAY_API UGameFrameworkInitStateInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFrameworkInitStateInterface(UGameFrameworkInitStateInterface&&) = delete; \
	UGameFrameworkInitStateInterface(const UGameFrameworkInitStateInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODULARGAMEPLAY_API, UGameFrameworkInitStateInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFrameworkInitStateInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFrameworkInitStateInterface) \
	virtual ~UGameFrameworkInitStateInterface() = default;


#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameFrameworkInitStateInterface(); \
	friend struct ::Z_Construct_UClass_UGameFrameworkInitStateInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODULARGAMEPLAY_API UClass* ::Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameFrameworkInitStateInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModularGameplay"), Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister) \
	DECLARE_SERIALIZER(UGameFrameworkInitStateInterface)


#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameFrameworkInitStateInterface() {} \
public: \
	typedef UGameFrameworkInitStateInterface UClassType; \
	typedef IGameFrameworkInitStateInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFrameworkInitStateInterface;

// ********** End Interface UGameFrameworkInitStateInterface ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
