// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/AvaSceneTreeUpdateModifierExtension.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaSceneTreeUpdateModifierExtension_generated_h
#error "AvaSceneTreeUpdateModifierExtension.generated.h already included, missing '#pragma once' in AvaSceneTreeUpdateModifierExtension.h"
#endif
#define AVALANCHEMODIFIERS_AvaSceneTreeUpdateModifierExtension_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaSceneTreeUpdateModifierExtension_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaSceneTreeActor_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMODIFIERS_API UScriptStruct* StaticStruct<struct FAvaSceneTreeActor>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaSceneTreeUpdateModifierExtension_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaSceneTreeUpdateHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaSceneTreeUpdateHandler(UAvaSceneTreeUpdateHandler&&); \
	UAvaSceneTreeUpdateHandler(const UAvaSceneTreeUpdateHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaSceneTreeUpdateHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSceneTreeUpdateHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaSceneTreeUpdateHandler) \
	AVALANCHEMODIFIERS_API virtual ~UAvaSceneTreeUpdateHandler();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaSceneTreeUpdateModifierExtension_h_72_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaSceneTreeUpdateHandler(); \
	friend struct Z_Construct_UClass_UAvaSceneTreeUpdateHandler_Statics; \
public: \
	DECLARE_CLASS(UAvaSceneTreeUpdateHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaSceneTreeUpdateHandler)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaSceneTreeUpdateModifierExtension_h_72_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaSceneTreeUpdateModifierExtension_h_72_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaSceneTreeUpdateModifierExtension_h_72_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaSceneTreeUpdateModifierExtension_h_72_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaSceneTreeUpdateHandler() {} \
public: \
	typedef UAvaSceneTreeUpdateHandler UClassType; \
	typedef IAvaSceneTreeUpdateHandler ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaSceneTreeUpdateModifierExtension_h_69_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaSceneTreeUpdateModifierExtension_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaSceneTreeUpdateModifierExtension_h_72_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaSceneTreeUpdateHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaSceneTreeUpdateModifierExtension_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
