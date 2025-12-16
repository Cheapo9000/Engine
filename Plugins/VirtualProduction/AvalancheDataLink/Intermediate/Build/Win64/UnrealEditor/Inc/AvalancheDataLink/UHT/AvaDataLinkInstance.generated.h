// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaDataLinkInstance.h"

#ifdef AVALANCHEDATALINK_AvaDataLinkInstance_generated_h
#error "AvaDataLinkInstance.generated.h already included, missing '#pragma once' in AvaDataLinkInstance.h"
#endif
#define AVALANCHEDATALINK_AvaDataLinkInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaDataLinkInstance *****************************************************
struct Z_Construct_UClass_UAvaDataLinkInstance_Statics;
AVALANCHEDATALINK_API UClass* Z_Construct_UClass_UAvaDataLinkInstance_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaDataLinkInstance(); \
	friend struct ::Z_Construct_UClass_UAvaDataLinkInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEDATALINK_API UClass* ::Z_Construct_UClass_UAvaDataLinkInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaDataLinkInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheDataLink"), Z_Construct_UClass_UAvaDataLinkInstance_NoRegister) \
	DECLARE_SERIALIZER(UAvaDataLinkInstance)


#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkInstance_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEDATALINK_API UAvaDataLinkInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaDataLinkInstance(UAvaDataLinkInstance&&) = delete; \
	UAvaDataLinkInstance(const UAvaDataLinkInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEDATALINK_API, UAvaDataLinkInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaDataLinkInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaDataLinkInstance) \
	AVALANCHEDATALINK_API virtual ~UAvaDataLinkInstance();


#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkInstance_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkInstance_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaDataLinkInstance;

// ********** End Class UAvaDataLinkInstance *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_AvalancheDataLink_Source_AvalancheDataLink_Public_AvaDataLinkInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
