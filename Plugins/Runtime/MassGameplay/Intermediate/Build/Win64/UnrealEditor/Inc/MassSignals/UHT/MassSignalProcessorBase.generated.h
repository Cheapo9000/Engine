// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSignalProcessorBase.h"

#ifdef MASSSIGNALS_MassSignalProcessorBase_generated_h
#error "MassSignalProcessorBase.generated.h already included, missing '#pragma once' in MassSignalProcessorBase.h"
#endif
#define MASSSIGNALS_MassSignalProcessorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassSignalProcessorBase *************************************************
struct Z_Construct_UClass_UMassSignalProcessorBase_Statics;
MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalProcessorBase_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalProcessorBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSignalProcessorBase(); \
	friend struct ::Z_Construct_UClass_UMassSignalProcessorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSIGNALS_API UClass* ::Z_Construct_UClass_UMassSignalProcessorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSignalProcessorBase, UMassProcessor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSignals"), Z_Construct_UClass_UMassSignalProcessorBase_NoRegister) \
	DECLARE_SERIALIZER(UMassSignalProcessorBase)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalProcessorBase_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSignalProcessorBase(UMassSignalProcessorBase&&) = delete; \
	UMassSignalProcessorBase(const UMassSignalProcessorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSIGNALS_API, UMassSignalProcessorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSignalProcessorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassSignalProcessorBase) \
	MASSSIGNALS_API virtual ~UMassSignalProcessorBase();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalProcessorBase_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalProcessorBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalProcessorBase_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalProcessorBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSignalProcessorBase;

// ********** End Class UMassSignalProcessorBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalProcessorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
