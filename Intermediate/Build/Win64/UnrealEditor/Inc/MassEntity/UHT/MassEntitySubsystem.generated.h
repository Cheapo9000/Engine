// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassEntitySubsystem.h"

#ifdef MASSENTITY_MassEntitySubsystem_generated_h
#error "MassEntitySubsystem.generated.h already included, missing '#pragma once' in MassEntitySubsystem.h"
#endif
#define MASSENTITY_MassEntitySubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassEntitySubsystem *****************************************************
struct Z_Construct_UClass_UMassEntitySubsystem_Statics;
MASSENTITY_API UClass* Z_Construct_UClass_UMassEntitySubsystem_NoRegister();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassEntitySubsystem(); \
	friend struct ::Z_Construct_UClass_UMassEntitySubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITY_API UClass* ::Z_Construct_UClass_UMassEntitySubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassEntitySubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassEntity"), Z_Construct_UClass_UMassEntitySubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassEntitySubsystem)


#define FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassEntitySubsystem(UMassEntitySubsystem&&) = delete; \
	UMassEntitySubsystem(const UMassEntitySubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSENTITY_API, UMassEntitySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEntitySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassEntitySubsystem) \
	MASSENTITY_API virtual ~UMassEntitySubsystem();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySubsystem_h_17_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassEntitySubsystem;

// ********** End Class UMassEntitySubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
