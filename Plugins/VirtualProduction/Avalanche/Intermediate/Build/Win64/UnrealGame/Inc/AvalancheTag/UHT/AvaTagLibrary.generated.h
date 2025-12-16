// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaTagLibrary.h"

#ifdef AVALANCHETAG_AvaTagLibrary_generated_h
#error "AvaTagLibrary.generated.h already included, missing '#pragma once' in AvaTagLibrary.h"
#endif
#define AVALANCHETAG_AvaTagLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAvaTag;
struct FAvaTagHandle;
struct FAvaTagHandleContainer;
struct FAvaTagSoftHandle;

// ********** Begin Class UAvaTagLibrary ***********************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResolveTagSoftHandle); \
	DECLARE_FUNCTION(execResolveTagHandles); \
	DECLARE_FUNCTION(execResolveTagHandle);


struct Z_Construct_UClass_UAvaTagLibrary_Statics;
AVALANCHETAG_API UClass* Z_Construct_UClass_UAvaTagLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTagLibrary(); \
	friend struct ::Z_Construct_UClass_UAvaTagLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHETAG_API UClass* ::Z_Construct_UClass_UAvaTagLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaTagLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheTag"), Z_Construct_UClass_UAvaTagLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAvaTagLibrary)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHETAG_API UAvaTagLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaTagLibrary(UAvaTagLibrary&&) = delete; \
	UAvaTagLibrary(const UAvaTagLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETAG_API, UAvaTagLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTagLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTagLibrary) \
	AVALANCHETAG_API virtual ~UAvaTagLibrary();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaTagLibrary;

// ********** End Class UAvaTagLibrary *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
