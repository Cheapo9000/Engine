// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/Text3DEngineSubsystem.h"

#ifdef TEXT3D_Text3DEngineSubsystem_generated_h
#error "Text3DEngineSubsystem.generated.h already included, missing '#pragma once' in Text3DEngineSubsystem.h"
#endif
#define TEXT3D_Text3DEngineSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FText3DFontFaceCache **********************************************
struct Z_Construct_UScriptStruct_FText3DFontFaceCache_Statics;
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Subsystems_Text3DEngineSubsystem_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FText3DFontFaceCache_Statics; \
	TEXT3D_API static class UScriptStruct* StaticStruct();


struct FText3DFontFaceCache;
// ********** End ScriptStruct FText3DFontFaceCache ************************************************

// ********** Begin Class UText3DEngineSubsystem ***************************************************
struct Z_Construct_UClass_UText3DEngineSubsystem_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DEngineSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Subsystems_Text3DEngineSubsystem_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DEngineSubsystem(); \
	friend struct ::Z_Construct_UClass_UText3DEngineSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DEngineSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DEngineSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UText3DEngineSubsystem)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Subsystems_Text3DEngineSubsystem_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UText3DEngineSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DEngineSubsystem(UText3DEngineSubsystem&&) = delete; \
	UText3DEngineSubsystem(const UText3DEngineSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UText3DEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UText3DEngineSubsystem) \
	NO_API virtual ~UText3DEngineSubsystem();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Subsystems_Text3DEngineSubsystem_h_74_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Subsystems_Text3DEngineSubsystem_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Subsystems_Text3DEngineSubsystem_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Subsystems_Text3DEngineSubsystem_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DEngineSubsystem;

// ********** End Class UText3DEngineSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Private_Subsystems_Text3DEngineSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
