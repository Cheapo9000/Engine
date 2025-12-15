// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/MaterialImportHelpers.h"

#ifdef UNREALED_MaterialImportHelpers_generated_h
#error "MaterialImportHelpers.generated.h already included, missing '#pragma once' in MaterialImportHelpers.h"
#endif
#define UNREALED_MaterialImportHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
enum class EMaterialSearchLocation : uint8;

// ********** Begin Class UMaterialImportHelpers ***************************************************
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindExistingMaterial); \
	DECLARE_FUNCTION(execFindExistingMaterialFromSearchLocation);


struct Z_Construct_UClass_UMaterialImportHelpers_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialImportHelpers_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialImportHelpers(); \
	friend struct ::Z_Construct_UClass_UMaterialImportHelpers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialImportHelpers_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialImportHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialImportHelpers_NoRegister) \
	DECLARE_SERIALIZER(UMaterialImportHelpers)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialImportHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialImportHelpers(UMaterialImportHelpers&&) = delete; \
	UMaterialImportHelpers(const UMaterialImportHelpers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialImportHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialImportHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialImportHelpers) \
	NO_API virtual ~UMaterialImportHelpers();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_28_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialImportHelpers;

// ********** End Class UMaterialImportHelpers *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h

// ********** Begin Enum EMaterialSearchLocation ***************************************************
#define FOREACH_ENUM_EMATERIALSEARCHLOCATION(op) \
	op(EMaterialSearchLocation::Local) \
	op(EMaterialSearchLocation::UnderParent) \
	op(EMaterialSearchLocation::UnderRoot) \
	op(EMaterialSearchLocation::AllAssets) \
	op(EMaterialSearchLocation::DoNotSearch) 

enum class EMaterialSearchLocation : uint8;
template<> struct TIsUEnumClass<EMaterialSearchLocation> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialSearchLocation>();
// ********** End Enum EMaterialSearchLocation *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
