// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Roles/LiveLinkBasicRole.h"

#ifdef LIVELINKINTERFACE_LiveLinkBasicRole_generated_h
#error "LiveLinkBasicRole.generated.h already included, missing '#pragma once' in LiveLinkBasicRole.h"
#endif
#define LIVELINKINTERFACE_LiveLinkBasicRole_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkBasicRole *******************************************************
struct Z_Construct_UClass_ULiveLinkBasicRole_Statics;
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicRole_NoRegister();

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicRole_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkBasicRole(); \
	friend struct ::Z_Construct_UClass_ULiveLinkBasicRole_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKINTERFACE_API UClass* ::Z_Construct_UClass_ULiveLinkBasicRole_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkBasicRole, ULiveLinkRole, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), Z_Construct_UClass_ULiveLinkBasicRole_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkBasicRole)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicRole_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKINTERFACE_API ULiveLinkBasicRole(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkBasicRole(ULiveLinkBasicRole&&) = delete; \
	ULiveLinkBasicRole(const ULiveLinkBasicRole&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKINTERFACE_API, ULiveLinkBasicRole); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkBasicRole); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkBasicRole) \
	LIVELINKINTERFACE_API virtual ~ULiveLinkBasicRole();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicRole_h_19_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicRole_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicRole_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicRole_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkBasicRole;

// ********** End Class ULiveLinkBasicRole *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicRole_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
