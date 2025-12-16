// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ColorCorrectRegionsSubsystem.h"

#ifdef COLORCORRECTREGIONS_ColorCorrectRegionsSubsystem_generated_h
#error "ColorCorrectRegionsSubsystem.generated.h already included, missing '#pragma once' in ColorCorrectRegionsSubsystem.h"
#endif
#define COLORCORRECTREGIONS_ColorCorrectRegionsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UColorCorrectRegionsSubsystem ********************************************
#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegionsSubsystem_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshStenciIdAssignmentForAllCCR);


struct Z_Construct_UClass_UColorCorrectRegionsSubsystem_Statics;
COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_UColorCorrectRegionsSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegionsSubsystem_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorCorrectRegionsSubsystem(); \
	friend struct ::Z_Construct_UClass_UColorCorrectRegionsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COLORCORRECTREGIONS_API UClass* ::Z_Construct_UClass_UColorCorrectRegionsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UColorCorrectRegionsSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ColorCorrectRegions"), Z_Construct_UClass_UColorCorrectRegionsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UColorCorrectRegionsSubsystem)


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegionsSubsystem_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorCorrectRegionsSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UColorCorrectRegionsSubsystem(UColorCorrectRegionsSubsystem&&) = delete; \
	UColorCorrectRegionsSubsystem(const UColorCorrectRegionsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorCorrectRegionsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorCorrectRegionsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UColorCorrectRegionsSubsystem) \
	NO_API virtual ~UColorCorrectRegionsSubsystem();


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegionsSubsystem_h_34_PROLOG
#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegionsSubsystem_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegionsSubsystem_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegionsSubsystem_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegionsSubsystem_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UColorCorrectRegionsSubsystem;

// ********** End Class UColorCorrectRegionsSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegionsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
