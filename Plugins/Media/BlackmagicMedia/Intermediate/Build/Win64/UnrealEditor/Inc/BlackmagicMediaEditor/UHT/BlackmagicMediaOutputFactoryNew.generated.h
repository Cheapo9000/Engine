// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/BlackmagicMediaOutputFactoryNew.h"

#ifdef BLACKMAGICMEDIAEDITOR_BlackmagicMediaOutputFactoryNew_generated_h
#error "BlackmagicMediaOutputFactoryNew.generated.h already included, missing '#pragma once' in BlackmagicMediaOutputFactoryNew.h"
#endif
#define BLACKMAGICMEDIAEDITOR_BlackmagicMediaOutputFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlackmagicMediaOutputFactoryNew *****************************************
struct Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew_Statics;
BLACKMAGICMEDIAEDITOR_API UClass* Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew_NoRegister();

#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaOutputFactoryNew_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBlackmagicMediaOutputFactoryNew(); \
	friend struct ::Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLACKMAGICMEDIAEDITOR_API UClass* ::Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlackmagicMediaOutputFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlackmagicMediaEditor"), Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UBlackmagicMediaOutputFactoryNew)


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaOutputFactoryNew_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackmagicMediaOutputFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackmagicMediaOutputFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackmagicMediaOutputFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackmagicMediaOutputFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlackmagicMediaOutputFactoryNew(UBlackmagicMediaOutputFactoryNew&&) = delete; \
	UBlackmagicMediaOutputFactoryNew(const UBlackmagicMediaOutputFactoryNew&) = delete; \
	NO_API virtual ~UBlackmagicMediaOutputFactoryNew();


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaOutputFactoryNew_h_12_PROLOG
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaOutputFactoryNew_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaOutputFactoryNew_h_15_INCLASS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaOutputFactoryNew_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlackmagicMediaOutputFactoryNew;

// ********** End Class UBlackmagicMediaOutputFactoryNew *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaOutputFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
