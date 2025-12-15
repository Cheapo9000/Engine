// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/TouchInterfaceFactory.h"

#ifdef UNREALED_TouchInterfaceFactory_generated_h
#error "TouchInterfaceFactory.generated.h already included, missing '#pragma once' in TouchInterfaceFactory.h"
#endif
#define UNREALED_TouchInterfaceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTouchInterfaceFactory ***************************************************
struct Z_Construct_UClass_UTouchInterfaceFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTouchInterfaceFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TouchInterfaceFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUTouchInterfaceFactory(); \
	friend struct ::Z_Construct_UClass_UTouchInterfaceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTouchInterfaceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTouchInterfaceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTouchInterfaceFactory_NoRegister) \
	DECLARE_SERIALIZER(UTouchInterfaceFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TouchInterfaceFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UTouchInterfaceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchInterfaceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UTouchInterfaceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchInterfaceFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTouchInterfaceFactory(UTouchInterfaceFactory&&) = delete; \
	UTouchInterfaceFactory(const UTouchInterfaceFactory&) = delete; \
	UNREALED_API virtual ~UTouchInterfaceFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TouchInterfaceFactory_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TouchInterfaceFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TouchInterfaceFactory_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TouchInterfaceFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTouchInterfaceFactory;

// ********** End Class UTouchInterfaceFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TouchInterfaceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
