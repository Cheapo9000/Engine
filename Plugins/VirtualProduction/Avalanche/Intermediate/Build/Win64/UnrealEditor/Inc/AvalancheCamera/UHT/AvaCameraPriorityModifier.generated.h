// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaCameraPriorityModifier.h"

#ifdef AVALANCHECAMERA_AvaCameraPriorityModifier_generated_h
#error "AvaCameraPriorityModifier.generated.h already included, missing '#pragma once' in AvaCameraPriorityModifier.h"
#endif
#define AVALANCHECAMERA_AvaCameraPriorityModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaCameraPriorityModifier ***********************************************
struct Z_Construct_UClass_UAvaCameraPriorityModifier_Statics;
AVALANCHECAMERA_API UClass* Z_Construct_UClass_UAvaCameraPriorityModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheCamera_Public_AvaCameraPriorityModifier_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaCameraPriorityModifier(); \
	friend struct ::Z_Construct_UClass_UAvaCameraPriorityModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHECAMERA_API UClass* ::Z_Construct_UClass_UAvaCameraPriorityModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaCameraPriorityModifier, UActorModifierCoreBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheCamera"), Z_Construct_UClass_UAvaCameraPriorityModifier_NoRegister) \
	DECLARE_SERIALIZER(UAvaCameraPriorityModifier)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheCamera_Public_AvaCameraPriorityModifier_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaCameraPriorityModifier(UAvaCameraPriorityModifier&&) = delete; \
	UAvaCameraPriorityModifier(const UAvaCameraPriorityModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHECAMERA_API, UAvaCameraPriorityModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaCameraPriorityModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaCameraPriorityModifier) \
	AVALANCHECAMERA_API virtual ~UAvaCameraPriorityModifier();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheCamera_Public_AvaCameraPriorityModifier_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheCamera_Public_AvaCameraPriorityModifier_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheCamera_Public_AvaCameraPriorityModifier_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheCamera_Public_AvaCameraPriorityModifier_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaCameraPriorityModifier;

// ********** End Class UAvaCameraPriorityModifier *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheCamera_Public_AvaCameraPriorityModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
