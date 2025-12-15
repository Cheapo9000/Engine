// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/VariableFrameStrippingSettingsFactory.h"

#ifdef UNREALED_VariableFrameStrippingSettingsFactory_generated_h
#error "VariableFrameStrippingSettingsFactory.generated.h already included, missing '#pragma once' in VariableFrameStrippingSettingsFactory.h"
#endif
#define UNREALED_VariableFrameStrippingSettingsFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVariableFrameStrippingSettingsFactory ***********************************
struct Z_Construct_UClass_UVariableFrameStrippingSettingsFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UVariableFrameStrippingSettingsFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VariableFrameStrippingSettingsFactory_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUVariableFrameStrippingSettingsFactory(); \
	friend struct ::Z_Construct_UClass_UVariableFrameStrippingSettingsFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UVariableFrameStrippingSettingsFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UVariableFrameStrippingSettingsFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UVariableFrameStrippingSettingsFactory_NoRegister) \
	DECLARE_SERIALIZER(UVariableFrameStrippingSettingsFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VariableFrameStrippingSettingsFactory_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UVariableFrameStrippingSettingsFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariableFrameStrippingSettingsFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UVariableFrameStrippingSettingsFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariableFrameStrippingSettingsFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVariableFrameStrippingSettingsFactory(UVariableFrameStrippingSettingsFactory&&) = delete; \
	UVariableFrameStrippingSettingsFactory(const UVariableFrameStrippingSettingsFactory&) = delete; \
	UNREALED_API virtual ~UVariableFrameStrippingSettingsFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VariableFrameStrippingSettingsFactory_h_9_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VariableFrameStrippingSettingsFactory_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VariableFrameStrippingSettingsFactory_h_12_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VariableFrameStrippingSettingsFactory_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVariableFrameStrippingSettingsFactory;

// ********** End Class UVariableFrameStrippingSettingsFactory *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VariableFrameStrippingSettingsFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
