// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassUpdateISMProcessor.h"

#ifdef MASSREPRESENTATION_MassUpdateISMProcessor_generated_h
#error "MassUpdateISMProcessor.generated.h already included, missing '#pragma once' in MassUpdateISMProcessor.h"
#endif
#define MASSREPRESENTATION_MassUpdateISMProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassUpdateISMProcessor **************************************************
struct Z_Construct_UClass_UMassUpdateISMProcessor_Statics;
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassUpdateISMProcessor_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassUpdateISMProcessor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassUpdateISMProcessor(); \
	friend struct ::Z_Construct_UClass_UMassUpdateISMProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPRESENTATION_API UClass* ::Z_Construct_UClass_UMassUpdateISMProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassUpdateISMProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassRepresentation"), Z_Construct_UClass_UMassUpdateISMProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassUpdateISMProcessor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassUpdateISMProcessor_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassUpdateISMProcessor(UMassUpdateISMProcessor&&) = delete; \
	UMassUpdateISMProcessor(const UMassUpdateISMProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPRESENTATION_API, UMassUpdateISMProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassUpdateISMProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassUpdateISMProcessor) \
	MASSREPRESENTATION_API virtual ~UMassUpdateISMProcessor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassUpdateISMProcessor_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassUpdateISMProcessor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassUpdateISMProcessor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassUpdateISMProcessor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassUpdateISMProcessor;

// ********** End Class UMassUpdateISMProcessor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassUpdateISMProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
