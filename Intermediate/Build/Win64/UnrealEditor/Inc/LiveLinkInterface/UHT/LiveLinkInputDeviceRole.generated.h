// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Roles/LiveLinkInputDeviceRole.h"

#ifdef LIVELINKINTERFACE_LiveLinkInputDeviceRole_generated_h
#error "LiveLinkInputDeviceRole.generated.h already included, missing '#pragma once' in LiveLinkInputDeviceRole.h"
#endif
#define LIVELINKINTERFACE_LiveLinkInputDeviceRole_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkInputDeviceRole *************************************************
struct Z_Construct_UClass_ULiveLinkInputDeviceRole_Statics;
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkInputDeviceRole_NoRegister();

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkInputDeviceRole(); \
	friend struct ::Z_Construct_UClass_ULiveLinkInputDeviceRole_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKINTERFACE_API UClass* ::Z_Construct_UClass_ULiveLinkInputDeviceRole_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkInputDeviceRole, ULiveLinkBasicRole, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), Z_Construct_UClass_ULiveLinkInputDeviceRole_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkInputDeviceRole)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKINTERFACE_API ULiveLinkInputDeviceRole(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkInputDeviceRole(ULiveLinkInputDeviceRole&&) = delete; \
	ULiveLinkInputDeviceRole(const ULiveLinkInputDeviceRole&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKINTERFACE_API, ULiveLinkInputDeviceRole); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkInputDeviceRole); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkInputDeviceRole) \
	LIVELINKINTERFACE_API virtual ~ULiveLinkInputDeviceRole();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_18_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkInputDeviceRole;

// ********** End Class ULiveLinkInputDeviceRole ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
