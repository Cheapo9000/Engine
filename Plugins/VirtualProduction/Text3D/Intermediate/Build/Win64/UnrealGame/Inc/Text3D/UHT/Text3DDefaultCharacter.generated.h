// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/Text3DDefaultCharacter.h"

#ifdef TEXT3D_Text3DDefaultCharacter_generated_h
#error "Text3DDefaultCharacter.generated.h already included, missing '#pragma once' in Text3DDefaultCharacter.h"
#endif
#define TEXT3D_Text3DDefaultCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UText3DDefaultCharacter **************************************************
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DDefaultCharacter_h_13_ACCESSORS \
static void GetKerning_WrapperImpl(const void* Object, void* OutValue); \
static void SetKerning_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UText3DDefaultCharacter_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DDefaultCharacter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DDefaultCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DDefaultCharacter(); \
	friend struct ::Z_Construct_UClass_UText3DDefaultCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DDefaultCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DDefaultCharacter, UText3DCharacterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DDefaultCharacter_NoRegister) \
	DECLARE_SERIALIZER(UText3DDefaultCharacter)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DDefaultCharacter_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXT3D_API UText3DDefaultCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DDefaultCharacter(UText3DDefaultCharacter&&) = delete; \
	UText3DDefaultCharacter(const UText3DDefaultCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXT3D_API, UText3DDefaultCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DDefaultCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UText3DDefaultCharacter) \
	TEXT3D_API virtual ~UText3DDefaultCharacter();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DDefaultCharacter_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DDefaultCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DDefaultCharacter_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DDefaultCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DDefaultCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DDefaultCharacter;

// ********** End Class UText3DDefaultCharacter ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DDefaultCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
