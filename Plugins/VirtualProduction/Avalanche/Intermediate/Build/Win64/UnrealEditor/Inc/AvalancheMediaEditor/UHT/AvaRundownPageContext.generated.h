// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rundown/Pages/AvaRundownPageContext.h"

#ifdef AVALANCHEMEDIAEDITOR_AvaRundownPageContext_generated_h
#error "AvaRundownPageContext.generated.h already included, missing '#pragma once' in AvaRundownPageContext.h"
#endif
#define AVALANCHEMEDIAEDITOR_AvaRundownPageContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaRundownPageContext ***************************************************
struct Z_Construct_UClass_UAvaRundownPageContext_Statics;
AVALANCHEMEDIAEDITOR_API UClass* Z_Construct_UClass_UAvaRundownPageContext_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Public_Rundown_Pages_AvaRundownPageContext_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaRundownPageContext(); \
	friend struct ::Z_Construct_UClass_UAvaRundownPageContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIAEDITOR_API UClass* ::Z_Construct_UClass_UAvaRundownPageContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaRundownPageContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMediaEditor"), Z_Construct_UClass_UAvaRundownPageContext_NoRegister) \
	DECLARE_SERIALIZER(UAvaRundownPageContext)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Public_Rundown_Pages_AvaRundownPageContext_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMEDIAEDITOR_API UAvaRundownPageContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaRundownPageContext(UAvaRundownPageContext&&) = delete; \
	UAvaRundownPageContext(const UAvaRundownPageContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMEDIAEDITOR_API, UAvaRundownPageContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaRundownPageContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaRundownPageContext) \
	AVALANCHEMEDIAEDITOR_API virtual ~UAvaRundownPageContext();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Public_Rundown_Pages_AvaRundownPageContext_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Public_Rundown_Pages_AvaRundownPageContext_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Public_Rundown_Pages_AvaRundownPageContext_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Public_Rundown_Pages_AvaRundownPageContext_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaRundownPageContext;

// ********** End Class UAvaRundownPageContext *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Public_Rundown_Pages_AvaRundownPageContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
