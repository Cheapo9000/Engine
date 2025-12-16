// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControl/AvaRCSequenceBehavior.h"

#ifdef AVALANCHE_AvaRCSequenceBehavior_generated_h
#error "AvaRCSequenceBehavior.generated.h already included, missing '#pragma once' in AvaRCSequenceBehavior.h"
#endif
#define AVALANCHE_AvaRCSequenceBehavior_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaRCSequenceBehavior ***************************************************
struct Z_Construct_UClass_UAvaRCSequenceBehavior_Statics;
AVALANCHE_API UClass* Z_Construct_UClass_UAvaRCSequenceBehavior_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_RemoteControl_AvaRCSequenceBehavior_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaRCSequenceBehavior(); \
	friend struct ::Z_Construct_UClass_UAvaRCSequenceBehavior_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHE_API UClass* ::Z_Construct_UClass_UAvaRCSequenceBehavior_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaRCSequenceBehavior, URCBehaviour, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Avalanche"), Z_Construct_UClass_UAvaRCSequenceBehavior_NoRegister) \
	DECLARE_SERIALIZER(UAvaRCSequenceBehavior)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_RemoteControl_AvaRCSequenceBehavior_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHE_API UAvaRCSequenceBehavior(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaRCSequenceBehavior(UAvaRCSequenceBehavior&&) = delete; \
	UAvaRCSequenceBehavior(const UAvaRCSequenceBehavior&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHE_API, UAvaRCSequenceBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaRCSequenceBehavior); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaRCSequenceBehavior) \
	AVALANCHE_API virtual ~UAvaRCSequenceBehavior();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_RemoteControl_AvaRCSequenceBehavior_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_RemoteControl_AvaRCSequenceBehavior_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_RemoteControl_AvaRCSequenceBehavior_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_RemoteControl_AvaRCSequenceBehavior_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaRCSequenceBehavior;

// ********** End Class UAvaRCSequenceBehavior *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_RemoteControl_AvaRCSequenceBehavior_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
