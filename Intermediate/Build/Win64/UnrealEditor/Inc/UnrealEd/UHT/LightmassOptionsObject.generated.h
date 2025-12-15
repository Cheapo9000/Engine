// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Preferences/LightmassOptionsObject.h"

#ifdef UNREALED_LightmassOptionsObject_generated_h
#error "LightmassOptionsObject.generated.h already included, missing '#pragma once' in LightmassOptionsObject.h"
#endif
#define UNREALED_LightmassOptionsObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULightmassOptionsObject **************************************************
struct Z_Construct_UClass_ULightmassOptionsObject_Statics;
UNREALED_API UClass* Z_Construct_UClass_ULightmassOptionsObject_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_LightmassOptionsObject_h_21_INCLASS \
private: \
	static void StaticRegisterNativesULightmassOptionsObject(); \
	friend struct ::Z_Construct_UClass_ULightmassOptionsObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_ULightmassOptionsObject_NoRegister(); \
public: \
	DECLARE_CLASS2(ULightmassOptionsObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_ULightmassOptionsObject_NoRegister) \
	DECLARE_SERIALIZER(ULightmassOptionsObject)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_LightmassOptionsObject_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightmassOptionsObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightmassOptionsObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightmassOptionsObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightmassOptionsObject); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULightmassOptionsObject(ULightmassOptionsObject&&) = delete; \
	ULightmassOptionsObject(const ULightmassOptionsObject&) = delete; \
	NO_API virtual ~ULightmassOptionsObject();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_LightmassOptionsObject_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_LightmassOptionsObject_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_LightmassOptionsObject_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_LightmassOptionsObject_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULightmassOptionsObject;

// ********** End Class ULightmassOptionsObject ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_LightmassOptionsObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
