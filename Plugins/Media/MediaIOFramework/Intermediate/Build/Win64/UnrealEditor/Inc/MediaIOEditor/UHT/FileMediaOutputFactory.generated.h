// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileMediaOutputFactory.h"

#ifdef MEDIAIOEDITOR_FileMediaOutputFactory_generated_h
#error "FileMediaOutputFactory.generated.h already included, missing '#pragma once' in FileMediaOutputFactory.h"
#endif
#define MEDIAIOEDITOR_FileMediaOutputFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFileMediaOutputFactory **************************************************
struct Z_Construct_UClass_UFileMediaOutputFactory_Statics;
MEDIAIOEDITOR_API UClass* Z_Construct_UClass_UFileMediaOutputFactory_NoRegister();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOEditor_Private_FileMediaOutputFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFileMediaOutputFactory(); \
	friend struct ::Z_Construct_UClass_UFileMediaOutputFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAIOEDITOR_API UClass* ::Z_Construct_UClass_UFileMediaOutputFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UFileMediaOutputFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaIOEditor"), Z_Construct_UClass_UFileMediaOutputFactory_NoRegister) \
	DECLARE_SERIALIZER(UFileMediaOutputFactory)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOEditor_Private_FileMediaOutputFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAIOEDITOR_API UFileMediaOutputFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileMediaOutputFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAIOEDITOR_API, UFileMediaOutputFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileMediaOutputFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFileMediaOutputFactory(UFileMediaOutputFactory&&) = delete; \
	UFileMediaOutputFactory(const UFileMediaOutputFactory&) = delete; \
	MEDIAIOEDITOR_API virtual ~UFileMediaOutputFactory();


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOEditor_Private_FileMediaOutputFactory_h_14_PROLOG
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOEditor_Private_FileMediaOutputFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOEditor_Private_FileMediaOutputFactory_h_17_INCLASS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOEditor_Private_FileMediaOutputFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFileMediaOutputFactory;

// ********** End Class UFileMediaOutputFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOEditor_Private_FileMediaOutputFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
