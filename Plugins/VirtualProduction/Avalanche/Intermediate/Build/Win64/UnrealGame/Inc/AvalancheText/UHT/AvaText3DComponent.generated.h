// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaText3DComponent.h"

#ifdef AVALANCHETEXT_AvaText3DComponent_generated_h
#error "AvaText3DComponent.generated.h already included, missing '#pragma once' in AvaText3DComponent.h"
#endif
#define AVALANCHETEXT_AvaText3DComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaText3DComponent ******************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAvaText3DComponent, AVALANCHETEXT_API)


struct Z_Construct_UClass_UAvaText3DComponent_Statics;
AVALANCHETEXT_API UClass* Z_Construct_UClass_UAvaText3DComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaText3DComponent(); \
	friend struct ::Z_Construct_UClass_UAvaText3DComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHETEXT_API UClass* ::Z_Construct_UClass_UAvaText3DComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaText3DComponent, UText3DComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheText"), Z_Construct_UClass_UAvaText3DComponent_NoRegister) \
	DECLARE_SERIALIZER(UAvaText3DComponent) \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_20_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaText3DComponent(UAvaText3DComponent&&) = delete; \
	UAvaText3DComponent(const UAvaText3DComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETEXT_API, UAvaText3DComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaText3DComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaText3DComponent) \
	AVALANCHETEXT_API virtual ~UAvaText3DComponent();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaText3DComponent;

// ********** End Class UAvaText3DComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheText_Public_AvaText3DComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
