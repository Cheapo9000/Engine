// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaTransitionTreeSchema.h"

#ifdef AVALANCHETRANSITION_AvaTransitionTreeSchema_generated_h
#error "AvaTransitionTreeSchema.generated.h already included, missing '#pragma once' in AvaTransitionTreeSchema.h"
#endif
#define AVALANCHETRANSITION_AvaTransitionTreeSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaTransitionTreeSchema *************************************************
struct Z_Construct_UClass_UAvaTransitionTreeSchema_Statics;
AVALANCHETRANSITION_API UClass* Z_Construct_UClass_UAvaTransitionTreeSchema_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTreeSchema_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTransitionTreeSchema(); \
	friend struct ::Z_Construct_UClass_UAvaTransitionTreeSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHETRANSITION_API UClass* ::Z_Construct_UClass_UAvaTransitionTreeSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaTransitionTreeSchema, UStateTreeSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheTransition"), Z_Construct_UClass_UAvaTransitionTreeSchema_NoRegister) \
	DECLARE_SERIALIZER(UAvaTransitionTreeSchema)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTreeSchema_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaTransitionTreeSchema(UAvaTransitionTreeSchema&&) = delete; \
	UAvaTransitionTreeSchema(const UAvaTransitionTreeSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETRANSITION_API, UAvaTransitionTreeSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransitionTreeSchema); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaTransitionTreeSchema) \
	AVALANCHETRANSITION_API virtual ~UAvaTransitionTreeSchema();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTreeSchema_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTreeSchema_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTreeSchema_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTreeSchema_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaTransitionTreeSchema;

// ********** End Class UAvaTransitionTreeSchema ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionTreeSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
