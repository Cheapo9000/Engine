// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectZoneAnnotations.h"

#ifdef MASSSMARTOBJECTS_SmartObjectZoneAnnotations_generated_h
#error "SmartObjectZoneAnnotations.generated.h already included, missing '#pragma once' in SmartObjectZoneAnnotations.h"
#endif
#define MASSSMARTOBJECTS_SmartObjectZoneAnnotations_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSmartObjectLaneLocation ******************************************
struct Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectLaneLocation_Statics; \
	MASSSMARTOBJECTS_API static class UScriptStruct* StaticStruct();


struct FSmartObjectLaneLocation;
// ********** End ScriptStruct FSmartObjectLaneLocation ********************************************

// ********** Begin ScriptStruct FSmartObjectLaneLocationIndices ***********************************
struct Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectLaneLocationIndices_Statics; \
	MASSSMARTOBJECTS_API static class UScriptStruct* StaticStruct();


struct FSmartObjectLaneLocationIndices;
// ********** End ScriptStruct FSmartObjectLaneLocationIndices *************************************

// ********** Begin ScriptStruct FSmartObjectAnnotationData ****************************************
struct Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectAnnotationData_Statics; \
	MASSSMARTOBJECTS_API static class UScriptStruct* StaticStruct();


struct FSmartObjectAnnotationData;
// ********** End ScriptStruct FSmartObjectAnnotationData ******************************************

// ********** Begin Class USmartObjectZoneAnnotations **********************************************
#if WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_97_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USmartObjectZoneAnnotations, MASSSMARTOBJECTS_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_97_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_USmartObjectZoneAnnotations_Statics;
MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_USmartObjectZoneAnnotations_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectZoneAnnotations(); \
	friend struct ::Z_Construct_UClass_USmartObjectZoneAnnotations_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSMARTOBJECTS_API UClass* ::Z_Construct_UClass_USmartObjectZoneAnnotations_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectZoneAnnotations, UZoneGraphAnnotationComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSmartObjects"), Z_Construct_UClass_USmartObjectZoneAnnotations_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectZoneAnnotations) \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_97_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSSMARTOBJECTS_API USmartObjectZoneAnnotations(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectZoneAnnotations(USmartObjectZoneAnnotations&&) = delete; \
	USmartObjectZoneAnnotations(const USmartObjectZoneAnnotations&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSMARTOBJECTS_API, USmartObjectZoneAnnotations); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectZoneAnnotations); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectZoneAnnotations) \
	MASSSMARTOBJECTS_API virtual ~USmartObjectZoneAnnotations();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_94_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectZoneAnnotations;

// ********** End Class USmartObjectZoneAnnotations ************************************************

// ********** Begin ScriptStruct FSmartObjectZoneAnnotationsInstanceData ***************************
struct Z_Construct_UScriptStruct_FSmartObjectZoneAnnotationsInstanceData_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h_162_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectZoneAnnotationsInstanceData_Statics; \
	MASSSMARTOBJECTS_API static class UScriptStruct* StaticStruct(); \
	typedef FActorComponentInstanceData Super;


struct FSmartObjectZoneAnnotationsInstanceData;
// ********** End ScriptStruct FSmartObjectZoneAnnotationsInstanceData *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_SmartObjectZoneAnnotations_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
