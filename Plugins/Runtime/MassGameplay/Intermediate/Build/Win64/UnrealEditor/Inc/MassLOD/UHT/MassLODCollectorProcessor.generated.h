// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassLODCollectorProcessor.h"

#ifdef MASSLOD_MassLODCollectorProcessor_generated_h
#error "MassLODCollectorProcessor.generated.h already included, missing '#pragma once' in MassLODCollectorProcessor.h"
#endif
#define MASSLOD_MassLODCollectorProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassLODCollectorProcessor ***********************************************
struct Z_Construct_UClass_UMassLODCollectorProcessor_Statics;
MASSLOD_API UClass* Z_Construct_UClass_UMassLODCollectorProcessor_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODCollectorProcessor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassLODCollectorProcessor(); \
	friend struct ::Z_Construct_UClass_UMassLODCollectorProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSLOD_API UClass* ::Z_Construct_UClass_UMassLODCollectorProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassLODCollectorProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassLOD"), Z_Construct_UClass_UMassLODCollectorProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassLODCollectorProcessor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODCollectorProcessor_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassLODCollectorProcessor(UMassLODCollectorProcessor&&) = delete; \
	UMassLODCollectorProcessor(const UMassLODCollectorProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSLOD_API, UMassLODCollectorProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassLODCollectorProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassLODCollectorProcessor) \
	MASSLOD_API virtual ~UMassLODCollectorProcessor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODCollectorProcessor_h_25_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODCollectorProcessor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODCollectorProcessor_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODCollectorProcessor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassLODCollectorProcessor;

// ********** End Class UMassLODCollectorProcessor *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODCollectorProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
