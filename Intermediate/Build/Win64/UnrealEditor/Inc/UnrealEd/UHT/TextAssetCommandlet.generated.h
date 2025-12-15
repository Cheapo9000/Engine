// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/TextAssetCommandlet.h"

#ifdef UNREALED_TextAssetCommandlet_generated_h
#error "TextAssetCommandlet.generated.h already included, missing '#pragma once' in TextAssetCommandlet.h"
#endif
#define UNREALED_TextAssetCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextAssetCommandlet *****************************************************
struct Z_Construct_UClass_UTextAssetCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTextAssetCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUTextAssetCommandlet(); \
	friend struct ::Z_Construct_UClass_UTextAssetCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTextAssetCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextAssetCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTextAssetCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UTextAssetCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextAssetCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextAssetCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextAssetCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextAssetCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextAssetCommandlet(UTextAssetCommandlet&&) = delete; \
	UTextAssetCommandlet(const UTextAssetCommandlet&) = delete; \
	NO_API virtual ~UTextAssetCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_25_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextAssetCommandlet;

// ********** End Class UTextAssetCommandlet *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h

// ********** Begin Enum ETextAssetCommandletMode **************************************************
#define FOREACH_ENUM_ETEXTASSETCOMMANDLETMODE(op) \
	op(ETextAssetCommandletMode::ResaveText) \
	op(ETextAssetCommandletMode::ResaveBinary) \
	op(ETextAssetCommandletMode::RoundTrip) \
	op(ETextAssetCommandletMode::LoadBinary) \
	op(ETextAssetCommandletMode::LoadText) \
	op(ETextAssetCommandletMode::FindMismatchedSerializers) \
	op(ETextAssetCommandletMode::GenerateSchema) 

enum class ETextAssetCommandletMode;
template<> struct TIsUEnumClass<ETextAssetCommandletMode> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextAssetCommandletMode>();
// ********** End Enum ETextAssetCommandletMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
