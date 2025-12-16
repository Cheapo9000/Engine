// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/BlackmagicMediaSourceFactoryNew.h"

#ifdef BLACKMAGICMEDIAEDITOR_BlackmagicMediaSourceFactoryNew_generated_h
#error "BlackmagicMediaSourceFactoryNew.generated.h already included, missing '#pragma once' in BlackmagicMediaSourceFactoryNew.h"
#endif
#define BLACKMAGICMEDIAEDITOR_BlackmagicMediaSourceFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlackmagicMediaSourceFactoryNew *****************************************
struct Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew_Statics;
BLACKMAGICMEDIAEDITOR_API UClass* Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew_NoRegister();

#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaSourceFactoryNew_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBlackmagicMediaSourceFactoryNew(); \
	friend struct ::Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLACKMAGICMEDIAEDITOR_API UClass* ::Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlackmagicMediaSourceFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlackmagicMediaEditor"), Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UBlackmagicMediaSourceFactoryNew)


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaSourceFactoryNew_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackmagicMediaSourceFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackmagicMediaSourceFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackmagicMediaSourceFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackmagicMediaSourceFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlackmagicMediaSourceFactoryNew(UBlackmagicMediaSourceFactoryNew&&) = delete; \
	UBlackmagicMediaSourceFactoryNew(const UBlackmagicMediaSourceFactoryNew&) = delete; \
	NO_API virtual ~UBlackmagicMediaSourceFactoryNew();


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaSourceFactoryNew_h_12_PROLOG
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaSourceFactoryNew_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaSourceFactoryNew_h_16_INCLASS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaSourceFactoryNew_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlackmagicMediaSourceFactoryNew;

// ********** End Class UBlackmagicMediaSourceFactoryNew *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaSourceFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
