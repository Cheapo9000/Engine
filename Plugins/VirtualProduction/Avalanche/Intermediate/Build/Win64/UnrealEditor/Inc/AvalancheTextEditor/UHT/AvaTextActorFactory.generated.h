// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaTextActorFactory.h"

#ifdef AVALANCHETEXTEDITOR_AvaTextActorFactory_generated_h
#error "AvaTextActorFactory.generated.h already included, missing '#pragma once' in AvaTextActorFactory.h"
#endif
#define AVALANCHETEXTEDITOR_AvaTextActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaTextActorFactory *****************************************************
struct Z_Construct_UClass_UAvaTextActorFactory_Statics;
AVALANCHETEXTEDITOR_API UClass* Z_Construct_UClass_UAvaTextActorFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTextEditor_Private_AvaTextActorFactory_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTextActorFactory(); \
	friend struct ::Z_Construct_UClass_UAvaTextActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHETEXTEDITOR_API UClass* ::Z_Construct_UClass_UAvaTextActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaTextActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheTextEditor"), Z_Construct_UClass_UAvaTextActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UAvaTextActorFactory)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTextEditor_Private_AvaTextActorFactory_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaTextActorFactory(UAvaTextActorFactory&&) = delete; \
	UAvaTextActorFactory(const UAvaTextActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaTextActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTextActorFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaTextActorFactory) \
	NO_API virtual ~UAvaTextActorFactory();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTextEditor_Private_AvaTextActorFactory_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTextEditor_Private_AvaTextActorFactory_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTextEditor_Private_AvaTextActorFactory_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTextEditor_Private_AvaTextActorFactory_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaTextActorFactory;

// ********** End Class UAvaTextActorFactory *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTextEditor_Private_AvaTextActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
