// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControl/AvaDataLinkRCProcessor.h"

#ifdef AVALANCHEDATALINK_AvaDataLinkRCProcessor_generated_h
#error "AvaDataLinkRCProcessor.generated.h already included, missing '#pragma once' in AvaDataLinkRCProcessor.h"
#endif
#define AVALANCHEDATALINK_AvaDataLinkRCProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaDataLinkRCProcessor **************************************************
struct Z_Construct_UClass_UAvaDataLinkRCProcessor_Statics;
AVALANCHEDATALINK_API UClass* Z_Construct_UClass_UAvaDataLinkRCProcessor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Private_RemoteControl_AvaDataLinkRCProcessor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaDataLinkRCProcessor(); \
	friend struct ::Z_Construct_UClass_UAvaDataLinkRCProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEDATALINK_API UClass* ::Z_Construct_UClass_UAvaDataLinkRCProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaDataLinkRCProcessor, UAvaDataLinkProcessor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheDataLink"), Z_Construct_UClass_UAvaDataLinkRCProcessor_NoRegister) \
	DECLARE_SERIALIZER(UAvaDataLinkRCProcessor)


#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Private_RemoteControl_AvaDataLinkRCProcessor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaDataLinkRCProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaDataLinkRCProcessor(UAvaDataLinkRCProcessor&&) = delete; \
	UAvaDataLinkRCProcessor(const UAvaDataLinkRCProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaDataLinkRCProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaDataLinkRCProcessor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaDataLinkRCProcessor) \
	NO_API virtual ~UAvaDataLinkRCProcessor();


#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Private_RemoteControl_AvaDataLinkRCProcessor_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Private_RemoteControl_AvaDataLinkRCProcessor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Private_RemoteControl_AvaDataLinkRCProcessor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Private_RemoteControl_AvaDataLinkRCProcessor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaDataLinkRCProcessor;

// ********** End Class UAvaDataLinkRCProcessor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Private_RemoteControl_AvaDataLinkRCProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
