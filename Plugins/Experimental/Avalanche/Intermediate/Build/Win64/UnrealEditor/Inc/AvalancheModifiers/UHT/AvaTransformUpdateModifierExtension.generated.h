// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/AvaTransformUpdateModifierExtension.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaTransformUpdateModifierExtension_generated_h
#error "AvaTransformUpdateModifierExtension.generated.h already included, missing '#pragma once' in AvaTransformUpdateModifierExtension.h"
#endif
#define AVALANCHEMODIFIERS_AvaTransformUpdateModifierExtension_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaTransformUpdateModifierExtension_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaTransformUpdateHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTransformUpdateHandler(UAvaTransformUpdateHandler&&); \
	UAvaTransformUpdateHandler(const UAvaTransformUpdateHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaTransformUpdateHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransformUpdateHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTransformUpdateHandler) \
	AVALANCHEMODIFIERS_API virtual ~UAvaTransformUpdateHandler();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaTransformUpdateModifierExtension_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaTransformUpdateHandler(); \
	friend struct Z_Construct_UClass_UAvaTransformUpdateHandler_Statics; \
public: \
	DECLARE_CLASS(UAvaTransformUpdateHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaTransformUpdateHandler)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaTransformUpdateModifierExtension_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaTransformUpdateModifierExtension_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaTransformUpdateModifierExtension_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaTransformUpdateModifierExtension_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaTransformUpdateHandler() {} \
public: \
	typedef UAvaTransformUpdateHandler UClassType; \
	typedef IAvaTransformUpdateHandler ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaTransformUpdateModifierExtension_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaTransformUpdateModifierExtension_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaTransformUpdateModifierExtension_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaTransformUpdateHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Extensions_AvaTransformUpdateModifierExtension_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
