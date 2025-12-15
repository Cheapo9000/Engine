// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Texture2DDynamic.h"

#ifdef ENGINE_Texture2DDynamic_generated_h
#error "Texture2DDynamic.generated.h already included, missing '#pragma once' in Texture2DDynamic.h"
#endif
#define ENGINE_Texture2DDynamic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTexture2DDynamic ********************************************************
struct Z_Construct_UClass_UTexture2DDynamic_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DDynamic_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUTexture2DDynamic(); \
	friend struct ::Z_Construct_UClass_UTexture2DDynamic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTexture2DDynamic_NoRegister(); \
public: \
	DECLARE_CLASS2(UTexture2DDynamic, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTexture2DDynamic_NoRegister) \
	DECLARE_SERIALIZER(UTexture2DDynamic)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DDynamic_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture2DDynamic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture2DDynamic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTexture2DDynamic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture2DDynamic); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTexture2DDynamic(UTexture2DDynamic&&) = delete; \
	UTexture2DDynamic(const UTexture2DDynamic&) = delete; \
	ENGINE_API virtual ~UTexture2DDynamic();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DDynamic_h_33_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DDynamic_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DDynamic_h_36_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DDynamic_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTexture2DDynamic;

// ********** End Class UTexture2DDynamic **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DDynamic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
