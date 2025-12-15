// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PackageTools.h"

#ifdef UNREALED_PackageTools_generated_h
#error "PackageTools.generated.h already included, missing '#pragma once' in PackageTools.h"
#endif
#define UNREALED_PackageTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPackageTools ************************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFilenameToPackageName); \
	DECLARE_FUNCTION(execPackageNameToFilename); \
	DECLARE_FUNCTION(execSanitizePackageName);


struct Z_Construct_UClass_UPackageTools_Statics;
UNREALED_API UClass* Z_Construct_UClass_UPackageTools_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUPackageTools(); \
	friend struct ::Z_Construct_UClass_UPackageTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UPackageTools_NoRegister(); \
public: \
	DECLARE_CLASS2(UPackageTools, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UPackageTools_NoRegister) \
	DECLARE_SERIALIZER(UPackageTools)


#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UPackageTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackageTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UPackageTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackageTools); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPackageTools(UPackageTools&&) = delete; \
	UPackageTools(const UPackageTools&) = delete; \
	UNREALED_API virtual ~UPackageTools();


#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_31_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPackageTools;

// ********** End Class UPackageTools **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h

// ********** Begin Enum EReloadPackagesInteractionMode ********************************************
#define FOREACH_ENUM_ERELOADPACKAGESINTERACTIONMODE(op) \
	op(EReloadPackagesInteractionMode::Interactive) \
	op(EReloadPackagesInteractionMode::AssumePositive) \
	op(EReloadPackagesInteractionMode::AssumeNegative) 

enum class EReloadPackagesInteractionMode : uint8;
template<> struct TIsUEnumClass<EReloadPackagesInteractionMode> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EReloadPackagesInteractionMode>();
// ********** End Enum EReloadPackagesInteractionMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
