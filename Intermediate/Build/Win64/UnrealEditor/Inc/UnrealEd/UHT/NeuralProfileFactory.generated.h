// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/NeuralProfileFactory.h"

#ifdef UNREALED_NeuralProfileFactory_generated_h
#error "NeuralProfileFactory.generated.h already included, missing '#pragma once' in NeuralProfileFactory.h"
#endif
#define UNREALED_NeuralProfileFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNeuralProfileFactory ****************************************************
struct Z_Construct_UClass_UNeuralProfileFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UNeuralProfileFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_NeuralProfileFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUNeuralProfileFactory(); \
	friend struct ::Z_Construct_UClass_UNeuralProfileFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UNeuralProfileFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UNeuralProfileFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UNeuralProfileFactory_NoRegister) \
	DECLARE_SERIALIZER(UNeuralProfileFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_NeuralProfileFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNeuralProfileFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuralProfileFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeuralProfileFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuralProfileFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNeuralProfileFactory(UNeuralProfileFactory&&) = delete; \
	UNeuralProfileFactory(const UNeuralProfileFactory&) = delete; \
	NO_API virtual ~UNeuralProfileFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_NeuralProfileFactory_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_NeuralProfileFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_NeuralProfileFactory_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_NeuralProfileFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNeuralProfileFactory;

// ********** End Class UNeuralProfileFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_NeuralProfileFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
