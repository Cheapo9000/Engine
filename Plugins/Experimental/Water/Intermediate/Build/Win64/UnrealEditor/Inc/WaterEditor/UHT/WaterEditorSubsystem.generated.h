// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterEditorSubsystem.h"

#ifdef WATEREDITOR_WaterEditorSubsystem_generated_h
#error "WaterEditorSubsystem.generated.h already included, missing '#pragma once' in WaterEditorSubsystem.h"
#endif
#define WATEREDITOR_WaterEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterEditorSubsystem ****************************************************
struct Z_Construct_UClass_UWaterEditorSubsystem_Statics;
WATEREDITOR_API UClass* Z_Construct_UClass_UWaterEditorSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_UWaterEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATEREDITOR_API UClass* ::Z_Construct_UClass_UWaterEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaterEditor"), Z_Construct_UClass_UWaterEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UWaterEditorSubsystem)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterEditorSubsystem(UWaterEditorSubsystem&&) = delete; \
	UWaterEditorSubsystem(const UWaterEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaterEditorSubsystem) \
	NO_API virtual ~UWaterEditorSubsystem();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSubsystem_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterEditorSubsystem;

// ********** End Class UWaterEditorSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
