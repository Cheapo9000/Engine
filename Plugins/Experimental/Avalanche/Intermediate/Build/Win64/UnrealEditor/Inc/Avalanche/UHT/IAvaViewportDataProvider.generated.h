// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Viewport/Interaction/IAvaViewportDataProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHE_IAvaViewportDataProvider_generated_h
#error "IAvaViewportDataProvider.generated.h already included, missing '#pragma once' in IAvaViewportDataProvider.h"
#endif
#define AVALANCHE_IAvaViewportDataProvider_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaViewportDataProvider_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHE_API UAvaViewportDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaViewportDataProvider(UAvaViewportDataProvider&&); \
	UAvaViewportDataProvider(const UAvaViewportDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHE_API, UAvaViewportDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaViewportDataProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaViewportDataProvider) \
	AVALANCHE_API virtual ~UAvaViewportDataProvider();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaViewportDataProvider_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaViewportDataProvider(); \
	friend struct Z_Construct_UClass_UAvaViewportDataProvider_Statics; \
public: \
	DECLARE_CLASS(UAvaViewportDataProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Avalanche"), AVALANCHE_API) \
	DECLARE_SERIALIZER(UAvaViewportDataProvider)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaViewportDataProvider_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaViewportDataProvider_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaViewportDataProvider_h_14_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaViewportDataProvider_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaViewportDataProvider() {} \
public: \
	typedef UAvaViewportDataProvider UClassType; \
	typedef IAvaViewportDataProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaViewportDataProvider_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaViewportDataProvider_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaViewportDataProvider_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHE_API UClass* StaticClass<class UAvaViewportDataProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_Interaction_IAvaViewportDataProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
