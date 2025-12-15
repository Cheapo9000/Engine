// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeGizmoActiveActor.h"

#ifdef LANDSCAPE_LandscapeGizmoActiveActor_generated_h
#error "LandscapeGizmoActiveActor.generated.h already included, missing '#pragma once' in LandscapeGizmoActiveActor.h"
#endif
#define LANDSCAPE_LandscapeGizmoActiveActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGizmoSelectData **************************************************
struct Z_Construct_UScriptStruct_FGizmoSelectData_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGizmoSelectData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FGizmoSelectData;
// ********** End ScriptStruct FGizmoSelectData ****************************************************

// ********** Begin Class ALandscapeGizmoActiveActor ***********************************************
struct Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_64_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeGizmoActiveActor(); \
	friend struct ::Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ALandscapeGizmoActiveActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ALandscapeGizmoActiveActor, ALandscapeGizmoActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ALandscapeGizmoActiveActor_NoRegister) \
	DECLARE_SERIALIZER(ALandscapeGizmoActiveActor)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeGizmoActiveActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeGizmoActiveActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeGizmoActiveActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeGizmoActiveActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALandscapeGizmoActiveActor(ALandscapeGizmoActiveActor&&) = delete; \
	ALandscapeGizmoActiveActor(const ALandscapeGizmoActiveActor&) = delete; \
	LANDSCAPE_API virtual ~ALandscapeGizmoActiveActor();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_61_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_64_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALandscapeGizmoActiveActor;

// ********** End Class ALandscapeGizmoActiveActor *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h

// ********** Begin Enum ELandscapeGizmoType *******************************************************
#define FOREACH_ENUM_ELANDSCAPEGIZMOTYPE(op) \
	op(LGT_None) \
	op(LGT_Height) \
	op(LGT_Weight) 

enum ELandscapeGizmoType : int;
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeGizmoType>();
// ********** End Enum ELandscapeGizmoType *********************************************************

// ********** Begin Enum ELandscapeGizmoSnapType ***************************************************
#define FOREACH_ENUM_ELANDSCAPEGIZMOSNAPTYPE(op) \
	op(ELandscapeGizmoSnapType::None) \
	op(ELandscapeGizmoSnapType::Component) \
	op(ELandscapeGizmoSnapType::Texel) 

enum class ELandscapeGizmoSnapType;
template<> struct TIsUEnumClass<ELandscapeGizmoSnapType> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeGizmoSnapType>();
// ********** End Enum ELandscapeGizmoSnapType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
