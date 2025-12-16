// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/AjaMediaSourceFactoryNew.h"

#ifdef AJAMEDIAEDITOR_AjaMediaSourceFactoryNew_generated_h
#error "AjaMediaSourceFactoryNew.generated.h already included, missing '#pragma once' in AjaMediaSourceFactoryNew.h"
#endif
#define AJAMEDIAEDITOR_AjaMediaSourceFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAjaMediaSourceFactoryNew ************************************************
struct Z_Construct_UClass_UAjaMediaSourceFactoryNew_Statics;
AJAMEDIAEDITOR_API UClass* Z_Construct_UClass_UAjaMediaSourceFactoryNew_NoRegister();

#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaSourceFactoryNew_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAjaMediaSourceFactoryNew(); \
	friend struct ::Z_Construct_UClass_UAjaMediaSourceFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AJAMEDIAEDITOR_API UClass* ::Z_Construct_UClass_UAjaMediaSourceFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UAjaMediaSourceFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AjaMediaEditor"), Z_Construct_UClass_UAjaMediaSourceFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UAjaMediaSourceFactoryNew)


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaSourceFactoryNew_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAjaMediaSourceFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAjaMediaSourceFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAjaMediaSourceFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAjaMediaSourceFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAjaMediaSourceFactoryNew(UAjaMediaSourceFactoryNew&&) = delete; \
	UAjaMediaSourceFactoryNew(const UAjaMediaSourceFactoryNew&) = delete; \
	NO_API virtual ~UAjaMediaSourceFactoryNew();


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaSourceFactoryNew_h_12_PROLOG
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaSourceFactoryNew_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaSourceFactoryNew_h_16_INCLASS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaSourceFactoryNew_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAjaMediaSourceFactoryNew;

// ********** End Class UAjaMediaSourceFactoryNew **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaSourceFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
