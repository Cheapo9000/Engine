// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/PropertyAnimatorCoreSubsystem.h"

#ifdef PROPERTYANIMATORCORE_PropertyAnimatorCoreSubsystem_generated_h
#error "PropertyAnimatorCoreSubsystem.generated.h already included, missing '#pragma once' in PropertyAnimatorCoreSubsystem.h"
#endif
#define PROPERTYANIMATORCORE_PropertyAnimatorCoreSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorCoreSubsystem *******************************************
struct Z_Construct_UClass_UPropertyAnimatorCoreSubsystem_Statics;
PROPERTYANIMATORCORE_API UClass* Z_Construct_UClass_UPropertyAnimatorCoreSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Subsystems_PropertyAnimatorCoreSubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorCoreSubsystem(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorCoreSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATORCORE_API UClass* ::Z_Construct_UClass_UPropertyAnimatorCoreSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorCoreSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimatorCore"), Z_Construct_UClass_UPropertyAnimatorCoreSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorCoreSubsystem)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Subsystems_PropertyAnimatorCoreSubsystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyAnimatorCoreSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorCoreSubsystem(UPropertyAnimatorCoreSubsystem&&) = delete; \
	UPropertyAnimatorCoreSubsystem(const UPropertyAnimatorCoreSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyAnimatorCoreSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorCoreSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorCoreSubsystem) \
	NO_API virtual ~UPropertyAnimatorCoreSubsystem();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Subsystems_PropertyAnimatorCoreSubsystem_h_21_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Subsystems_PropertyAnimatorCoreSubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Subsystems_PropertyAnimatorCoreSubsystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Subsystems_PropertyAnimatorCoreSubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorCoreSubsystem;

// ********** End Class UPropertyAnimatorCoreSubsystem *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Subsystems_PropertyAnimatorCoreSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
