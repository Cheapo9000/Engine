// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaIOCoreSubsystem.h"

#ifdef MEDIAIOCORE_MediaIOCoreSubsystem_generated_h
#error "MediaIOCoreSubsystem.generated.h already included, missing '#pragma once' in MediaIOCoreSubsystem.h"
#endif
#define MEDIAIOCORE_MediaIOCoreSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaIOCoreSubsystem ****************************************************
struct Z_Construct_UClass_UMediaIOCoreSubsystem_Statics;
MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaIOCoreSubsystem_NoRegister();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreSubsystem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaIOCoreSubsystem(); \
	friend struct ::Z_Construct_UClass_UMediaIOCoreSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAIOCORE_API UClass* ::Z_Construct_UClass_UMediaIOCoreSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaIOCoreSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaIOCore"), Z_Construct_UClass_UMediaIOCoreSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMediaIOCoreSubsystem)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreSubsystem_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAIOCORE_API UMediaIOCoreSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaIOCoreSubsystem(UMediaIOCoreSubsystem&&) = delete; \
	UMediaIOCoreSubsystem(const UMediaIOCoreSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAIOCORE_API, UMediaIOCoreSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaIOCoreSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMediaIOCoreSubsystem) \
	MEDIAIOCORE_API virtual ~UMediaIOCoreSubsystem();


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreSubsystem_h_15_PROLOG
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreSubsystem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreSubsystem_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreSubsystem_h_31_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaIOCoreSubsystem;

// ********** End Class UMediaIOCoreSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
