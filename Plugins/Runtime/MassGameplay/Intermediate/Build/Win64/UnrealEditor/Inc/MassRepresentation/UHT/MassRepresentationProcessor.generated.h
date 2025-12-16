// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassRepresentationProcessor.h"

#ifdef MASSREPRESENTATION_MassRepresentationProcessor_generated_h
#error "MassRepresentationProcessor.generated.h already included, missing '#pragma once' in MassRepresentationProcessor.h"
#endif
#define MASSREPRESENTATION_MassRepresentationProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassRepresentationUpdateParams ***********************************
struct Z_Construct_UScriptStruct_FMassRepresentationUpdateParams_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassRepresentationUpdateParams_Statics; \
	MASSREPRESENTATION_API static class UScriptStruct* StaticStruct();


struct FMassRepresentationUpdateParams;
// ********** End ScriptStruct FMassRepresentationUpdateParams *************************************

// ********** Begin Class UMassRepresentationProcessor *********************************************
struct Z_Construct_UClass_UMassRepresentationProcessor_Statics;
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationProcessor_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassRepresentationProcessor(); \
	friend struct ::Z_Construct_UClass_UMassRepresentationProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPRESENTATION_API UClass* ::Z_Construct_UClass_UMassRepresentationProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassRepresentationProcessor, UMassProcessor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassRepresentation"), Z_Construct_UClass_UMassRepresentationProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassRepresentationProcessor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassRepresentationProcessor(UMassRepresentationProcessor&&) = delete; \
	UMassRepresentationProcessor(const UMassRepresentationProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPRESENTATION_API, UMassRepresentationProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassRepresentationProcessor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMassRepresentationProcessor) \
	MASSREPRESENTATION_API virtual ~UMassRepresentationProcessor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_37_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassRepresentationProcessor;

// ********** End Class UMassRepresentationProcessor ***********************************************

// ********** Begin ScriptStruct FMassVisualizationProcessorTag ************************************
struct Z_Construct_UScriptStruct_FMassVisualizationProcessorTag_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassVisualizationProcessorTag_Statics; \
	MASSREPRESENTATION_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassVisualizationProcessorTag;
// ********** End ScriptStruct FMassVisualizationProcessorTag **************************************

// ********** Begin Class UMassVisualizationProcessor **********************************************
struct Z_Construct_UClass_UMassVisualizationProcessor_Statics;
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationProcessor_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassVisualizationProcessor(); \
	friend struct ::Z_Construct_UClass_UMassVisualizationProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPRESENTATION_API UClass* ::Z_Construct_UClass_UMassVisualizationProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassVisualizationProcessor, UMassRepresentationProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassRepresentation"), Z_Construct_UClass_UMassVisualizationProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassVisualizationProcessor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSREPRESENTATION_API UMassVisualizationProcessor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassVisualizationProcessor(UMassVisualizationProcessor&&) = delete; \
	UMassVisualizationProcessor(const UMassVisualizationProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPRESENTATION_API, UMassVisualizationProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassVisualizationProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassVisualizationProcessor) \
	MASSREPRESENTATION_API virtual ~UMassVisualizationProcessor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_95_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassVisualizationProcessor;

// ********** End Class UMassVisualizationProcessor ************************************************

// ********** Begin Class UMassRepresentationFragmentDestructor ************************************
struct Z_Construct_UClass_UMassRepresentationFragmentDestructor_Statics;
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationFragmentDestructor_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_140_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassRepresentationFragmentDestructor(); \
	friend struct ::Z_Construct_UClass_UMassRepresentationFragmentDestructor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPRESENTATION_API UClass* ::Z_Construct_UClass_UMassRepresentationFragmentDestructor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassRepresentationFragmentDestructor, UMassObserverProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassRepresentation"), Z_Construct_UClass_UMassRepresentationFragmentDestructor_NoRegister) \
	DECLARE_SERIALIZER(UMassRepresentationFragmentDestructor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_140_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassRepresentationFragmentDestructor(UMassRepresentationFragmentDestructor&&) = delete; \
	UMassRepresentationFragmentDestructor(const UMassRepresentationFragmentDestructor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPRESENTATION_API, UMassRepresentationFragmentDestructor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassRepresentationFragmentDestructor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassRepresentationFragmentDestructor) \
	MASSREPRESENTATION_API virtual ~UMassRepresentationFragmentDestructor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_137_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_140_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_140_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_140_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassRepresentationFragmentDestructor;

// ********** End Class UMassRepresentationFragmentDestructor **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
