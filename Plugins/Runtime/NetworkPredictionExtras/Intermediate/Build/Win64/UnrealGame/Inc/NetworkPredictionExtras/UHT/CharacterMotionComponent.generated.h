// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterMotionComponent.h"

#ifdef NETWORKPREDICTIONEXTRAS_CharacterMotionComponent_generated_h
#error "CharacterMotionComponent.generated.h already included, missing '#pragma once' in CharacterMotionComponent.h"
#endif
#define NETWORKPREDICTIONEXTRAS_CharacterMotionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCharacterMotionComponent ************************************************
struct Z_Construct_UClass_UCharacterMotionComponent_Statics;
NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UCharacterMotionComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_CharacterMotionComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterMotionComponent(); \
	friend struct ::Z_Construct_UClass_UCharacterMotionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTIONEXTRAS_API UClass* ::Z_Construct_UClass_UCharacterMotionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterMotionComponent, UBaseMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), Z_Construct_UClass_UCharacterMotionComponent_NoRegister) \
	DECLARE_SERIALIZER(UCharacterMotionComponent)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_CharacterMotionComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterMotionComponent(UCharacterMotionComponent&&) = delete; \
	UCharacterMotionComponent(const UCharacterMotionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterMotionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterMotionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterMotionComponent) \
	NO_API virtual ~UCharacterMotionComponent();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_CharacterMotionComponent_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_CharacterMotionComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_CharacterMotionComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_CharacterMotionComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterMotionComponent;

// ********** End Class UCharacterMotionComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_CharacterMotionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
