// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/Text3DEditorFontSubsystem.h"

#ifdef TEXT3DEDITOR_Text3DEditorFontSubsystem_generated_h
#error "Text3DEditorFontSubsystem.generated.h already included, missing '#pragma once' in Text3DEditorFontSubsystem.h"
#endif
#define TEXT3DEDITOR_Text3DEditorFontSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FText3DEditorFont *************************************************
struct Z_Construct_UScriptStruct_FText3DEditorFont_Statics;
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3DEditor_Private_Subsystems_Text3DEditorFontSubsystem_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FText3DEditorFont_Statics; \
	TEXT3DEDITOR_API static class UScriptStruct* StaticStruct();


struct FText3DEditorFont;
// ********** End ScriptStruct FText3DEditorFont ***************************************************

// ********** Begin Class UText3DEditorFontSubsystem ***********************************************
struct Z_Construct_UClass_UText3DEditorFontSubsystem_Statics;
TEXT3DEDITOR_API UClass* Z_Construct_UClass_UText3DEditorFontSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3DEditor_Private_Subsystems_Text3DEditorFontSubsystem_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DEditorFontSubsystem(); \
	friend struct ::Z_Construct_UClass_UText3DEditorFontSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3DEDITOR_API UClass* ::Z_Construct_UClass_UText3DEditorFontSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DEditorFontSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Text3DEditor"), Z_Construct_UClass_UText3DEditorFontSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UText3DEditorFontSubsystem)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3DEditor_Private_Subsystems_Text3DEditorFontSubsystem_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UText3DEditorFontSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DEditorFontSubsystem(UText3DEditorFontSubsystem&&) = delete; \
	UText3DEditorFontSubsystem(const UText3DEditorFontSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UText3DEditorFontSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DEditorFontSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UText3DEditorFontSubsystem) \
	NO_API virtual ~UText3DEditorFontSubsystem();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3DEditor_Private_Subsystems_Text3DEditorFontSubsystem_h_52_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3DEditor_Private_Subsystems_Text3DEditorFontSubsystem_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3DEditor_Private_Subsystems_Text3DEditorFontSubsystem_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3DEditor_Private_Subsystems_Text3DEditorFontSubsystem_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DEditorFontSubsystem;

// ********** End Class UText3DEditorFontSubsystem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3DEditor_Private_Subsystems_Text3DEditorFontSubsystem_h

// ********** Begin Enum EText3DEditorFontLocationFlags ********************************************
#define FOREACH_ENUM_ETEXT3DEDITORFONTLOCATIONFLAGS(op) \
	op(EText3DEditorFontLocationFlags::None) \
	op(EText3DEditorFontLocationFlags::Project) \
	op(EText3DEditorFontLocationFlags::System) 

enum class EText3DEditorFontLocationFlags : uint8;
template<> struct TIsUEnumClass<EText3DEditorFontLocationFlags> { enum { Value = true }; };
template<> TEXT3DEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EText3DEditorFontLocationFlags>();
// ********** End Enum EText3DEditorFontLocationFlags **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
