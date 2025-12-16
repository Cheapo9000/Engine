// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkLensRole.h"

#ifdef LIVELINKLENS_LiveLinkLensRole_generated_h
#error "LiveLinkLensRole.generated.h already included, missing '#pragma once' in LiveLinkLensRole.h"
#endif
#define LIVELINKLENS_LiveLinkLensRole_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkLensRole ********************************************************
struct Z_Construct_UClass_ULiveLinkLensRole_Statics;
LIVELINKLENS_API UClass* Z_Construct_UClass_ULiveLinkLensRole_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensRole_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkLensRole(); \
	friend struct ::Z_Construct_UClass_ULiveLinkLensRole_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKLENS_API UClass* ::Z_Construct_UClass_ULiveLinkLensRole_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkLensRole, ULiveLinkCameraRole, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkLens"), Z_Construct_UClass_ULiveLinkLensRole_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkLensRole)


#define FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensRole_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkLensRole(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkLensRole(ULiveLinkLensRole&&) = delete; \
	ULiveLinkLensRole(const ULiveLinkLensRole&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkLensRole); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkLensRole); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkLensRole) \
	NO_API virtual ~ULiveLinkLensRole();


#define FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensRole_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensRole_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensRole_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensRole_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkLensRole;

// ********** End Class ULiveLinkLensRole **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensRole_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
