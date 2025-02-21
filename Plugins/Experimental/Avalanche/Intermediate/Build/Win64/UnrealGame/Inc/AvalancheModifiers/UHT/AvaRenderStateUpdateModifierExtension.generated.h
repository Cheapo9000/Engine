// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/AvaRenderStateUpdateModifierExtension.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaRenderStateUpdateModifierExtension_generated_h
#error "AvaRenderStateUpdateModifierExtension.generated.h already included, missing '#pragma once' in AvaRenderStateUpdateModifierExtension.h"
#endif
#define AVALANCHEMODIFIERS_AvaRenderStateUpdateModifierExtension_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaRenderStateUpdateModifierExtension_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaRenderStateUpdateHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaRenderStateUpdateHandler(UAvaRenderStateUpdateHandler&&); \
	UAvaRenderStateUpdateHandler(const UAvaRenderStateUpdateHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaRenderStateUpdateHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaRenderStateUpdateHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaRenderStateUpdateHandler) \
	AVALANCHEMODIFIERS_API virtual ~UAvaRenderStateUpdateHandler();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaRenderStateUpdateModifierExtension_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaRenderStateUpdateHandler(); \
	friend struct Z_Construct_UClass_UAvaRenderStateUpdateHandler_Statics; \
public: \
	DECLARE_CLASS(UAvaRenderStateUpdateHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaRenderStateUpdateHandler)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaRenderStateUpdateModifierExtension_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaRenderStateUpdateModifierExtension_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaRenderStateUpdateModifierExtension_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaRenderStateUpdateModifierExtension_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaRenderStateUpdateHandler() {} \
public: \
	typedef UAvaRenderStateUpdateHandler UClassType; \
	typedef IAvaRenderStateUpdateHandler ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaRenderStateUpdateModifierExtension_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaRenderStateUpdateModifierExtension_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaRenderStateUpdateModifierExtension_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaRenderStateUpdateHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaRenderStateUpdateModifierExtension_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
