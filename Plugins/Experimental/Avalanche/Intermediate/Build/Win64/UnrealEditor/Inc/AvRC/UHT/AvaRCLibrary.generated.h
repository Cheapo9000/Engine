// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaRCLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class URCVirtualPropertyBase;
#ifdef AVALANCHEREMOTECONTROL_AvaRCLibrary_generated_h
#error "AvaRCLibrary.generated.h already included, missing '#pragma once' in AvaRCLibrary.h"
#endif
#define AVALANCHEREMOTECONTROL_AvaRCLibrary_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_AvaRCLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetControlledActors);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_AvaRCLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaRCLibrary(); \
	friend struct Z_Construct_UClass_UAvaRCLibrary_Statics; \
public: \
	DECLARE_CLASS(UAvaRCLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheRemoteControl"), NO_API) \
	DECLARE_SERIALIZER(UAvaRCLibrary)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_AvaRCLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaRCLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaRCLibrary(UAvaRCLibrary&&); \
	UAvaRCLibrary(const UAvaRCLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaRCLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaRCLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaRCLibrary) \
	NO_API virtual ~UAvaRCLibrary();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_AvaRCLibrary_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_AvaRCLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_AvaRCLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_AvaRCLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_AvaRCLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEREMOTECONTROL_API UClass* StaticClass<class UAvaRCLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheRemoteControl_Public_AvaRCLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
