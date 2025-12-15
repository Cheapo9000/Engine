// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SpecularProfile.h"

#ifdef ENGINE_SpecularProfile_generated_h
#error "SpecularProfile.generated.h already included, missing '#pragma once' in SpecularProfile.h"
#endif
#define ENGINE_SpecularProfile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSpecularProfileStruct ********************************************
struct Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSpecularProfileStruct;
// ********** End ScriptStruct FSpecularProfileStruct **********************************************

// ********** Begin Class USpecularProfile *********************************************************
struct Z_Construct_UClass_USpecularProfile_Statics;
ENGINE_API UClass* Z_Construct_UClass_USpecularProfile_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUSpecularProfile(); \
	friend struct ::Z_Construct_UClass_USpecularProfile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USpecularProfile_NoRegister(); \
public: \
	DECLARE_CLASS2(USpecularProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USpecularProfile_NoRegister) \
	DECLARE_SERIALIZER(USpecularProfile)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USpecularProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpecularProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USpecularProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpecularProfile); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpecularProfile(USpecularProfile&&) = delete; \
	USpecularProfile(const USpecularProfile&) = delete; \
	ENGINE_API virtual ~USpecularProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_72_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_75_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpecularProfile;

// ********** End Class USpecularProfile ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h

// ********** Begin Enum ESpecularProfileFormat ****************************************************
#define FOREACH_ENUM_ESPECULARPROFILEFORMAT(op) \
	op(ESpecularProfileFormat::ViewLightVector) \
	op(ESpecularProfileFormat::HalfVector) 

enum class ESpecularProfileFormat : uint8;
template<> struct TIsUEnumClass<ESpecularProfileFormat> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESpecularProfileFormat>();
// ********** End Enum ESpecularProfileFormat ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
