// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAvaInteractiveToolsModeDetailsObjectProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef AVALANCHEINTERACTIVETOOLSRUNTIME_IAvaInteractiveToolsModeDetailsObjectProvider_generated_h
#error "IAvaInteractiveToolsModeDetailsObjectProvider.generated.h already included, missing '#pragma once' in IAvaInteractiveToolsModeDetailsObjectProvider.h"
#endif
#define AVALANCHEINTERACTIVETOOLSRUNTIME_IAvaInteractiveToolsModeDetailsObjectProvider_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObjectProvider_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetModeDetailsObject);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObjectProvider_h_13_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObjectProvider_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEINTERACTIVETOOLSRUNTIME_API UAvaInteractiveToolsModeDetailsObjectProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaInteractiveToolsModeDetailsObjectProvider(UAvaInteractiveToolsModeDetailsObjectProvider&&); \
	UAvaInteractiveToolsModeDetailsObjectProvider(const UAvaInteractiveToolsModeDetailsObjectProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEINTERACTIVETOOLSRUNTIME_API, UAvaInteractiveToolsModeDetailsObjectProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaInteractiveToolsModeDetailsObjectProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaInteractiveToolsModeDetailsObjectProvider) \
	AVALANCHEINTERACTIVETOOLSRUNTIME_API virtual ~UAvaInteractiveToolsModeDetailsObjectProvider();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObjectProvider_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaInteractiveToolsModeDetailsObjectProvider(); \
	friend struct Z_Construct_UClass_UAvaInteractiveToolsModeDetailsObjectProvider_Statics; \
public: \
	DECLARE_CLASS(UAvaInteractiveToolsModeDetailsObjectProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AvalancheInteractiveToolsRuntime"), AVALANCHEINTERACTIVETOOLSRUNTIME_API) \
	DECLARE_SERIALIZER(UAvaInteractiveToolsModeDetailsObjectProvider)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObjectProvider_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObjectProvider_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObjectProvider_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObjectProvider_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaInteractiveToolsModeDetailsObjectProvider() {} \
public: \
	typedef UAvaInteractiveToolsModeDetailsObjectProvider UClassType; \
	typedef IAvaInteractiveToolsModeDetailsObjectProvider ThisClass; \
	static UObject* Execute_GetModeDetailsObject(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObjectProvider_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObjectProvider_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObjectProvider_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObjectProvider_h_13_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObjectProvider_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEINTERACTIVETOOLSRUNTIME_API UClass* StaticClass<class UAvaInteractiveToolsModeDetailsObjectProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveToolsRuntime_Public_IAvaInteractiveToolsModeDetailsObjectProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
