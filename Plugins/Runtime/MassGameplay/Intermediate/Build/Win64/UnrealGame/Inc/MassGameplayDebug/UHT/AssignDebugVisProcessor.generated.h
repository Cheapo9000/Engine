// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssignDebugVisProcessor.h"

#ifdef MASSGAMEPLAYDEBUG_AssignDebugVisProcessor_generated_h
#error "AssignDebugVisProcessor.generated.h already included, missing '#pragma once' in AssignDebugVisProcessor.h"
#endif
#define MASSGAMEPLAYDEBUG_AssignDebugVisProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssignDebugVisProcessor *************************************************
struct Z_Construct_UClass_UAssignDebugVisProcessor_Statics;
MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UAssignDebugVisProcessor_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_AssignDebugVisProcessor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssignDebugVisProcessor(); \
	friend struct ::Z_Construct_UClass_UAssignDebugVisProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSGAMEPLAYDEBUG_API UClass* ::Z_Construct_UClass_UAssignDebugVisProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssignDebugVisProcessor, UMassObserverProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassGameplayDebug"), Z_Construct_UClass_UAssignDebugVisProcessor_NoRegister) \
	DECLARE_SERIALIZER(UAssignDebugVisProcessor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_AssignDebugVisProcessor_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssignDebugVisProcessor(UAssignDebugVisProcessor&&) = delete; \
	UAssignDebugVisProcessor(const UAssignDebugVisProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSGAMEPLAYDEBUG_API, UAssignDebugVisProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssignDebugVisProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssignDebugVisProcessor) \
	MASSGAMEPLAYDEBUG_API virtual ~UAssignDebugVisProcessor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_AssignDebugVisProcessor_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_AssignDebugVisProcessor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_AssignDebugVisProcessor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_AssignDebugVisProcessor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssignDebugVisProcessor;

// ********** End Class UAssignDebugVisProcessor ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_AssignDebugVisProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
