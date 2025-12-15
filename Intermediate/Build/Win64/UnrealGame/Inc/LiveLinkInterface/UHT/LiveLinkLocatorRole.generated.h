// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Roles/LiveLinkLocatorRole.h"

#ifdef LIVELINKINTERFACE_LiveLinkLocatorRole_generated_h
#error "LiveLinkLocatorRole.generated.h already included, missing '#pragma once' in LiveLinkLocatorRole.h"
#endif
#define LIVELINKINTERFACE_LiveLinkLocatorRole_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkLocatorRole *****************************************************
struct Z_Construct_UClass_ULiveLinkLocatorRole_Statics;
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkLocatorRole_NoRegister();

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLocatorRole_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkLocatorRole(); \
	friend struct ::Z_Construct_UClass_ULiveLinkLocatorRole_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKINTERFACE_API UClass* ::Z_Construct_UClass_ULiveLinkLocatorRole_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkLocatorRole, ULiveLinkBasicRole, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), Z_Construct_UClass_ULiveLinkLocatorRole_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkLocatorRole)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLocatorRole_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKINTERFACE_API ULiveLinkLocatorRole(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkLocatorRole(ULiveLinkLocatorRole&&) = delete; \
	ULiveLinkLocatorRole(const ULiveLinkLocatorRole&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKINTERFACE_API, ULiveLinkLocatorRole); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkLocatorRole); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkLocatorRole) \
	LIVELINKINTERFACE_API virtual ~ULiveLinkLocatorRole();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLocatorRole_h_18_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLocatorRole_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLocatorRole_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLocatorRole_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkLocatorRole;

// ********** End Class ULiveLinkLocatorRole *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLocatorRole_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
