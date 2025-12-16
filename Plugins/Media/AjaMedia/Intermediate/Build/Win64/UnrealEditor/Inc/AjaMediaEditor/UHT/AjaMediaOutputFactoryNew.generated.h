// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/AjaMediaOutputFactoryNew.h"

#ifdef AJAMEDIAEDITOR_AjaMediaOutputFactoryNew_generated_h
#error "AjaMediaOutputFactoryNew.generated.h already included, missing '#pragma once' in AjaMediaOutputFactoryNew.h"
#endif
#define AJAMEDIAEDITOR_AjaMediaOutputFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAjaMediaOutputFactoryNew ************************************************
struct Z_Construct_UClass_UAjaMediaOutputFactoryNew_Statics;
AJAMEDIAEDITOR_API UClass* Z_Construct_UClass_UAjaMediaOutputFactoryNew_NoRegister();

#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaOutputFactoryNew_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAjaMediaOutputFactoryNew(); \
	friend struct ::Z_Construct_UClass_UAjaMediaOutputFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AJAMEDIAEDITOR_API UClass* ::Z_Construct_UClass_UAjaMediaOutputFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UAjaMediaOutputFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AjaMediaEditor"), Z_Construct_UClass_UAjaMediaOutputFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UAjaMediaOutputFactoryNew)


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaOutputFactoryNew_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAjaMediaOutputFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAjaMediaOutputFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAjaMediaOutputFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAjaMediaOutputFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAjaMediaOutputFactoryNew(UAjaMediaOutputFactoryNew&&) = delete; \
	UAjaMediaOutputFactoryNew(const UAjaMediaOutputFactoryNew&) = delete; \
	NO_API virtual ~UAjaMediaOutputFactoryNew();


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaOutputFactoryNew_h_12_PROLOG
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaOutputFactoryNew_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaOutputFactoryNew_h_15_INCLASS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaOutputFactoryNew_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAjaMediaOutputFactoryNew;

// ********** End Class UAjaMediaOutputFactoryNew **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaOutputFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
