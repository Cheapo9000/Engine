// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/TextureFactory.h"

#ifdef UNREALED_TextureFactory_generated_h
#error "TextureFactory.generated.h already included, missing '#pragma once' in TextureFactory.h"
#endif
#define UNREALED_TextureFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;

// ********** Begin Class UTextureFactory **********************************************************
struct Z_Construct_UClass_UTextureFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTextureFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUTextureFactory(); \
	friend struct ::Z_Construct_UClass_UTextureFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTextureFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTextureFactory_NoRegister) \
	DECLARE_SERIALIZER(UTextureFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_50_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UTextureFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureFactory(UTextureFactory&&) = delete; \
	UTextureFactory(const UTextureFactory&) = delete; \
	UNREALED_API virtual ~UTextureFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_47_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_50_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureFactory;

// ********** End Class UTextureFactory ************************************************************

// ********** Begin Class UUDIMTextureFunctionLibrary **********************************************
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_266_RPC_WRAPPERS \
	DECLARE_FUNCTION(execMakeUDIMVirtualTextureFromTexture2Ds);


struct Z_Construct_UClass_UUDIMTextureFunctionLibrary_Statics;
UNREALED_API UClass* Z_Construct_UClass_UUDIMTextureFunctionLibrary_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_266_INCLASS \
private: \
	static void StaticRegisterNativesUUDIMTextureFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UUDIMTextureFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UUDIMTextureFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UUDIMTextureFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UUDIMTextureFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UUDIMTextureFunctionLibrary)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_266_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUDIMTextureFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUDIMTextureFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUDIMTextureFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUDIMTextureFunctionLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUDIMTextureFunctionLibrary(UUDIMTextureFunctionLibrary&&) = delete; \
	UUDIMTextureFunctionLibrary(const UUDIMTextureFunctionLibrary&) = delete; \
	NO_API virtual ~UUDIMTextureFunctionLibrary();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_263_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_266_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_266_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_266_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_266_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUDIMTextureFunctionLibrary;

// ********** End Class UUDIMTextureFunctionLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h

// ********** Begin Enum ETextureSourceColorSpace **************************************************
#define FOREACH_ENUM_ETEXTURESOURCECOLORSPACE(op) \
	op(ETextureSourceColorSpace::Auto) \
	op(ETextureSourceColorSpace::Linear) \
	op(ETextureSourceColorSpace::SRGB) 

enum class ETextureSourceColorSpace;
template<> struct TIsUEnumClass<ETextureSourceColorSpace> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureSourceColorSpace>();
// ********** End Enum ETextureSourceColorSpace ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
