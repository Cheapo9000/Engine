// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Layouts/DMXControlConsoleEditorGlobalLayoutBase.h"

#ifdef DMXCONTROLCONSOLEEDITOR_DMXControlConsoleEditorGlobalLayoutBase_generated_h
#error "DMXControlConsoleEditorGlobalLayoutBase.generated.h already included, missing '#pragma once' in DMXControlConsoleEditorGlobalLayoutBase.h"
#endif
#define DMXCONTROLCONSOLEEDITOR_DMXControlConsoleEditorGlobalLayoutBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMXControlConsoleEditorGlobalLayoutBase *********************************
struct Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics;
DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXControlConsoleEditorGlobalLayoutBase(); \
	friend struct ::Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXCONTROLCONSOLEEDITOR_API UClass* ::Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXControlConsoleEditorGlobalLayoutBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXControlConsoleEditor"), Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_NoRegister) \
	DECLARE_SERIALIZER(UDMXControlConsoleEditorGlobalLayoutBase)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXControlConsoleEditorGlobalLayoutBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXControlConsoleEditorGlobalLayoutBase(UDMXControlConsoleEditorGlobalLayoutBase&&) = delete; \
	UDMXControlConsoleEditorGlobalLayoutBase(const UDMXControlConsoleEditorGlobalLayoutBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXControlConsoleEditorGlobalLayoutBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXControlConsoleEditorGlobalLayoutBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXControlConsoleEditorGlobalLayoutBase) \
	NO_API virtual ~UDMXControlConsoleEditorGlobalLayoutBase();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXControlConsoleEditorGlobalLayoutBase;

// ********** End Class UDMXControlConsoleEditorGlobalLayoutBase ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h

// ********** Begin Enum EDMXControlConsoleLayoutMode **********************************************
#define FOREACH_ENUM_EDMXCONTROLCONSOLELAYOUTMODE(op) \
	op(EDMXControlConsoleLayoutMode::Horizontal) \
	op(EDMXControlConsoleLayoutMode::Vertical) \
	op(EDMXControlConsoleLayoutMode::Grid) \
	op(EDMXControlConsoleLayoutMode::None) 

enum class EDMXControlConsoleLayoutMode : uint8;
template<> struct TIsUEnumClass<EDMXControlConsoleLayoutMode> { enum { Value = true }; };
template<> DMXCONTROLCONSOLEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXControlConsoleLayoutMode>();
// ********** End Enum EDMXControlConsoleLayoutMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
