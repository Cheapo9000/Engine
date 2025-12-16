// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaDataLinkActor.h"

#ifdef AVALANCHEDATALINK_AvaDataLinkActor_generated_h
#error "AvaDataLinkActor.generated.h already included, missing '#pragma once' in AvaDataLinkActor.h"
#endif
#define AVALANCHEDATALINK_AvaDataLinkActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAvaDataLinkActor ********************************************************
#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopDataLinkInstances); \
	DECLARE_FUNCTION(execExecuteDataLinkInstances);


struct Z_Construct_UClass_AAvaDataLinkActor_Statics;
AVALANCHEDATALINK_API UClass* Z_Construct_UClass_AAvaDataLinkActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAvaDataLinkActor(); \
	friend struct ::Z_Construct_UClass_AAvaDataLinkActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEDATALINK_API UClass* ::Z_Construct_UClass_AAvaDataLinkActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAvaDataLinkActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheDataLink"), Z_Construct_UClass_AAvaDataLinkActor_NoRegister) \
	DECLARE_SERIALIZER(AAvaDataLinkActor)


#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAvaDataLinkActor(AAvaDataLinkActor&&) = delete; \
	AAvaDataLinkActor(const AAvaDataLinkActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEDATALINK_API, AAvaDataLinkActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvaDataLinkActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAvaDataLinkActor) \
	AVALANCHEDATALINK_API virtual ~AAvaDataLinkActor();


#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkActor_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAvaDataLinkActor;

// ********** End Class AAvaDataLinkActor **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
