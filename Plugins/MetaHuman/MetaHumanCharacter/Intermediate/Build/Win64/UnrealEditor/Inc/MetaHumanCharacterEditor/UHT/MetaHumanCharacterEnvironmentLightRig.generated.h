// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterEnvironmentLightRig.h"

#ifdef METAHUMANCHARACTEREDITOR_MetaHumanCharacterEnvironmentLightRig_generated_h
#error "MetaHumanCharacterEnvironmentLightRig.generated.h already included, missing '#pragma once' in MetaHumanCharacterEnvironmentLightRig.h"
#endif
#define METAHUMANCHARACTEREDITOR_MetaHumanCharacterEnvironmentLightRig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Interface UMetaHumanCharacterEnvironmentLightRig *******************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetRotation_Implementation(float InRotation) {}; \
	DECLARE_FUNCTION(execSetRotation);


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_12_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMetaHumanCharacterEnvironmentLightRig_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEnvironmentLightRig_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEnvironmentLightRig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEnvironmentLightRig(UMetaHumanCharacterEnvironmentLightRig&&) = delete; \
	UMetaHumanCharacterEnvironmentLightRig(const UMetaHumanCharacterEnvironmentLightRig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEnvironmentLightRig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEnvironmentLightRig); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterEnvironmentLightRig) \
	virtual ~UMetaHumanCharacterEnvironmentLightRig() = default;


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEnvironmentLightRig(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEnvironmentLightRig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEnvironmentLightRig_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEnvironmentLightRig, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEnvironmentLightRig_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEnvironmentLightRig)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMetaHumanCharacterEnvironmentLightRig() {} \
public: \
	typedef UMetaHumanCharacterEnvironmentLightRig UClassType; \
	typedef IMetaHumanCharacterEnvironmentLightRig ThisClass; \
	static void Execute_SetRotation(UObject* O, float InRotation); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_9_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_12_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEnvironmentLightRig;

// ********** End Interface UMetaHumanCharacterEnvironmentLightRig *********************************

// ********** Begin Interface UMetaHumanCharacterEnvironmentBackground *****************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetBackgroundColor_Implementation(FLinearColor const& BackgroundColor) {}; \
	DECLARE_FUNCTION(execSetBackgroundColor);


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_35_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMetaHumanCharacterEnvironmentBackground_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEnvironmentBackground_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEnvironmentBackground(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEnvironmentBackground(UMetaHumanCharacterEnvironmentBackground&&) = delete; \
	UMetaHumanCharacterEnvironmentBackground(const UMetaHumanCharacterEnvironmentBackground&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEnvironmentBackground); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEnvironmentBackground); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterEnvironmentBackground) \
	virtual ~UMetaHumanCharacterEnvironmentBackground() = default;


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_35_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEnvironmentBackground(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEnvironmentBackground_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEnvironmentBackground_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEnvironmentBackground, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEnvironmentBackground_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEnvironmentBackground)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_35_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_35_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_35_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMetaHumanCharacterEnvironmentBackground() {} \
public: \
	typedef UMetaHumanCharacterEnvironmentBackground UClassType; \
	typedef IMetaHumanCharacterEnvironmentBackground ThisClass; \
	static void Execute_SetBackgroundColor(UObject* O, FLinearColor const& BackgroundColor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_32_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_35_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEnvironmentBackground;

// ********** End Interface UMetaHumanCharacterEnvironmentBackground *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_MetaHumanCharacterEnvironmentLightRig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
