// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/GameInstanceSubsystem.h"

#ifdef ENGINE_GameInstanceSubsystem_generated_h
#error "GameInstanceSubsystem.generated.h already included, missing '#pragma once' in GameInstanceSubsystem.h"
#endif
#define ENGINE_GameInstanceSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameInstanceSubsystem ***************************************************
struct Z_Construct_UClass_UGameInstanceSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInstanceSubsystem(); \
	friend struct ::Z_Construct_UClass_UGameInstanceSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UGameInstanceSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameInstanceSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UGameInstanceSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UGameInstanceSubsystem) \
	DECLARE_WITHIN(UGameInstance)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameInstanceSubsystem(UGameInstanceSubsystem&&) = delete; \
	UGameInstanceSubsystem(const UGameInstanceSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UGameInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstanceSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGameInstanceSubsystem) \
	ENGINE_API virtual ~UGameInstanceSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameInstanceSubsystem;

// ********** End Class UGameInstanceSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
