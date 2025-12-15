// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SubsurfaceProfile.h"

#ifdef ENGINE_SubsurfaceProfile_generated_h
#error "SubsurfaceProfile.generated.h already included, missing '#pragma once' in SubsurfaceProfile.h"
#endif
#define ENGINE_SubsurfaceProfile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSubsurfaceProfileStruct ******************************************
struct Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSubsurfaceProfileStruct;
// ********** End ScriptStruct FSubsurfaceProfileStruct ********************************************

// ********** Begin Class USubsurfaceProfile *******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_171_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USubsurfaceProfile, ENGINE_API)


struct Z_Construct_UClass_USubsurfaceProfile_Statics;
ENGINE_API UClass* Z_Construct_UClass_USubsurfaceProfile_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_171_INCLASS \
private: \
	static void StaticRegisterNativesUSubsurfaceProfile(); \
	friend struct ::Z_Construct_UClass_USubsurfaceProfile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USubsurfaceProfile_NoRegister(); \
public: \
	DECLARE_CLASS2(USubsurfaceProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USubsurfaceProfile_NoRegister) \
	DECLARE_SERIALIZER(USubsurfaceProfile) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_171_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_171_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USubsurfaceProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubsurfaceProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USubsurfaceProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubsurfaceProfile); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubsurfaceProfile(USubsurfaceProfile&&) = delete; \
	USubsurfaceProfile(const USubsurfaceProfile&) = delete; \
	ENGINE_API virtual ~USubsurfaceProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_168_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_171_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_171_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_171_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubsurfaceProfile;

// ********** End Class USubsurfaceProfile *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h

// ********** Begin Enum ESubsurfaceImplementationTechniqueHint ************************************
#define FOREACH_ENUM_ESUBSURFACEIMPLEMENTATIONTECHNIQUEHINT(op) \
	op(ESubsurfaceImplementationTechniqueHint::SIH_AFIS) \
	op(ESubsurfaceImplementationTechniqueHint::SIH_Separable) 

enum class ESubsurfaceImplementationTechniqueHint : uint8;
template<> struct TIsUEnumClass<ESubsurfaceImplementationTechniqueHint> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubsurfaceImplementationTechniqueHint>();
// ********** End Enum ESubsurfaceImplementationTechniqueHint **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
