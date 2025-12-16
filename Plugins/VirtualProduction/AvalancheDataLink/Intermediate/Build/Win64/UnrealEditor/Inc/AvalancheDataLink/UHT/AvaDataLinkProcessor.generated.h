// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaDataLinkProcessor.h"

#ifdef AVALANCHEDATALINK_AvaDataLinkProcessor_generated_h
#error "AvaDataLinkProcessor.generated.h already included, missing '#pragma once' in AvaDataLinkProcessor.h"
#endif
#define AVALANCHEDATALINK_AvaDataLinkProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaDataLinkProcessor ****************************************************
struct Z_Construct_UClass_UAvaDataLinkProcessor_Statics;
AVALANCHEDATALINK_API UClass* Z_Construct_UClass_UAvaDataLinkProcessor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Private_AvaDataLinkProcessor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaDataLinkProcessor(); \
	friend struct ::Z_Construct_UClass_UAvaDataLinkProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEDATALINK_API UClass* ::Z_Construct_UClass_UAvaDataLinkProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaDataLinkProcessor, UDataLinkProcessor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheDataLink"), Z_Construct_UClass_UAvaDataLinkProcessor_NoRegister) \
	DECLARE_SERIALIZER(UAvaDataLinkProcessor)


#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Private_AvaDataLinkProcessor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaDataLinkProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaDataLinkProcessor(UAvaDataLinkProcessor&&) = delete; \
	UAvaDataLinkProcessor(const UAvaDataLinkProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaDataLinkProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaDataLinkProcessor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaDataLinkProcessor) \
	NO_API virtual ~UAvaDataLinkProcessor();


#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Private_AvaDataLinkProcessor_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Private_AvaDataLinkProcessor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Private_AvaDataLinkProcessor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Private_AvaDataLinkProcessor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaDataLinkProcessor;

// ********** End Class UAvaDataLinkProcessor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Private_AvaDataLinkProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
