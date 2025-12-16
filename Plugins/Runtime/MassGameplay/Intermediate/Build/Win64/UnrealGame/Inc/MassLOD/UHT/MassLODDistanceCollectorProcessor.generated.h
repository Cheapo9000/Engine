// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassLODDistanceCollectorProcessor.h"

#ifdef MASSLOD_MassLODDistanceCollectorProcessor_generated_h
#error "MassLODDistanceCollectorProcessor.generated.h already included, missing '#pragma once' in MassLODDistanceCollectorProcessor.h"
#endif
#define MASSLOD_MassLODDistanceCollectorProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassLODDistanceCollectorProcessor ***************************************
struct Z_Construct_UClass_UMassLODDistanceCollectorProcessor_Statics;
MASSLOD_API UClass* Z_Construct_UClass_UMassLODDistanceCollectorProcessor_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODDistanceCollectorProcessor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassLODDistanceCollectorProcessor(); \
	friend struct ::Z_Construct_UClass_UMassLODDistanceCollectorProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSLOD_API UClass* ::Z_Construct_UClass_UMassLODDistanceCollectorProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassLODDistanceCollectorProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassLOD"), Z_Construct_UClass_UMassLODDistanceCollectorProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassLODDistanceCollectorProcessor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODDistanceCollectorProcessor_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassLODDistanceCollectorProcessor(UMassLODDistanceCollectorProcessor&&) = delete; \
	UMassLODDistanceCollectorProcessor(const UMassLODDistanceCollectorProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSLOD_API, UMassLODDistanceCollectorProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassLODDistanceCollectorProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassLODDistanceCollectorProcessor) \
	MASSLOD_API virtual ~UMassLODDistanceCollectorProcessor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODDistanceCollectorProcessor_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODDistanceCollectorProcessor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODDistanceCollectorProcessor_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODDistanceCollectorProcessor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassLODDistanceCollectorProcessor;

// ********** End Class UMassLODDistanceCollectorProcessor *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODDistanceCollectorProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
