// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkRole.h"

#ifdef LIVELINKINTERFACE_LiveLinkRole_generated_h
#error "LiveLinkRole.generated.h already included, missing '#pragma once' in LiveLinkRole.h"
#endif
#define LIVELINKINTERFACE_LiveLinkRole_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkRole ************************************************************
struct Z_Construct_UClass_ULiveLinkRole_Statics;
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkRole(); \
	friend struct ::Z_Construct_UClass_ULiveLinkRole_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKINTERFACE_API UClass* ::Z_Construct_UClass_ULiveLinkRole_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkRole, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), Z_Construct_UClass_ULiveLinkRole_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkRole)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKINTERFACE_API ULiveLinkRole(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkRole(ULiveLinkRole&&) = delete; \
	ULiveLinkRole(const ULiveLinkRole&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKINTERFACE_API, ULiveLinkRole); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkRole); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkRole) \
	LIVELINKINTERFACE_API virtual ~ULiveLinkRole();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h_16_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkRole;

// ********** End Class ULiveLinkRole **************************************************************

// ********** Begin ScriptStruct FLiveLinkSubjectRepresentation ************************************
struct Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics;
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics; \
	LIVELINKINTERFACE_API static class UScriptStruct* StaticStruct();


struct FLiveLinkSubjectRepresentation;
// ********** End ScriptStruct FLiveLinkSubjectRepresentation **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
