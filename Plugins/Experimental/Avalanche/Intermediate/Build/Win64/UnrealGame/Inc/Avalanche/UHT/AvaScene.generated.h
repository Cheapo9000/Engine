// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaScene.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHE_AvaScene_generated_h
#error "AvaScene.generated.h already included, missing '#pragma once' in AvaScene.h"
#endif
#define AVALANCHE_AvaScene_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaScene_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAvaScene(); \
	friend struct Z_Construct_UClass_AAvaScene_Statics; \
public: \
	DECLARE_CLASS(AAvaScene, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Avalanche"), AVALANCHE_API) \
	DECLARE_SERIALIZER(AAvaScene) \
	virtual UObject* _getUObject() const override { return const_cast<AAvaScene*>(this); }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaScene_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAvaScene(AAvaScene&&); \
	AAvaScene(const AAvaScene&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHE_API, AAvaScene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvaScene); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAvaScene) \
	AVALANCHE_API virtual ~AAvaScene();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaScene_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaScene_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaScene_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaScene_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHE_API UClass* StaticClass<class AAvaScene>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_AvaScene_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
