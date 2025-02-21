// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/AvaGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHE_AvaGameInstance_generated_h
#error "AvaGameInstance.generated.h already included, missing '#pragma once' in AvaGameInstance.h"
#endif
#define AVALANCHE_AvaGameInstance_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Framework_AvaGameInstance_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaGameInstance(); \
	friend struct Z_Construct_UClass_UAvaGameInstance_Statics; \
public: \
	DECLARE_CLASS(UAvaGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Avalanche"), NO_API) \
	DECLARE_SERIALIZER(UAvaGameInstance)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Framework_AvaGameInstance_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaGameInstance(UAvaGameInstance&&); \
	UAvaGameInstance(const UAvaGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaGameInstance) \
	NO_API virtual ~UAvaGameInstance();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Framework_AvaGameInstance_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Framework_AvaGameInstance_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Framework_AvaGameInstance_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Framework_AvaGameInstance_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHE_API UClass* StaticClass<class UAvaGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Framework_AvaGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
