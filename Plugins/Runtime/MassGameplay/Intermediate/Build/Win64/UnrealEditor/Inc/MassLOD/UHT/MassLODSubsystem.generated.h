// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassLODSubsystem.h"

#ifdef MASSLOD_MassLODSubsystem_generated_h
#error "MassLODSubsystem.generated.h already included, missing '#pragma once' in MassLODSubsystem.h"
#endif
#define MASSLOD_MassLODSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin ScriptStruct FMassViewerHandle *************************************************
struct Z_Construct_UScriptStruct_FMassViewerHandle_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassViewerHandle_Statics; \
	MASSLOD_API static class UScriptStruct* StaticStruct(); \
	typedef FIndexedHandleBase Super;


struct FMassViewerHandle;
// ********** End ScriptStruct FMassViewerHandle ***************************************************

// ********** Begin ScriptStruct FViewerInfo *******************************************************
struct Z_Construct_UScriptStruct_FViewerInfo_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FViewerInfo_Statics; \
	MASSLOD_API static class UScriptStruct* StaticStruct();


struct FViewerInfo;
// ********** End ScriptStruct FViewerInfo *********************************************************

// ********** Begin Class UMassLODSubsystem ********************************************************
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPlayerControllerEndPlay);


struct Z_Construct_UClass_UMassLODSubsystem_Statics;
MASSLOD_API UClass* Z_Construct_UClass_UMassLODSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassLODSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassLODSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSLOD_API UClass* ::Z_Construct_UClass_UMassLODSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassLODSubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassLOD"), Z_Construct_UClass_UMassLODSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassLODSubsystem)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSLOD_API UMassLODSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassLODSubsystem(UMassLODSubsystem&&) = delete; \
	UMassLODSubsystem(const UMassLODSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSLOD_API, UMassLODSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassLODSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassLODSubsystem) \
	MASSLOD_API virtual ~UMassLODSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_72_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassLODSubsystem;

// ********** End Class UMassLODSubsystem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
