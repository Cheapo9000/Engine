// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXControlConsoleEditorData.h"

#ifdef DMXCONTROLCONSOLEEDITOR_DMXControlConsoleEditorData_generated_h
#error "DMXControlConsoleEditorData.generated.h already included, missing '#pragma once' in DMXControlConsoleEditorData.h"
#endif
#define DMXCONTROLCONSOLEEDITOR_DMXControlConsoleEditorData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDMXControlConsoleEditorUserFilter ********************************
struct Z_Construct_UScriptStruct_FDMXControlConsoleEditorUserFilter_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_DMXControlConsoleEditorData_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXControlConsoleEditorUserFilter_Statics; \
	DMXCONTROLCONSOLEEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMXControlConsoleEditorUserFilter;
// ********** End ScriptStruct FDMXControlConsoleEditorUserFilter **********************************

// ********** Begin ScriptStruct FDMXControlConsoleEditorFiltersCollection *************************
struct Z_Construct_UScriptStruct_FDMXControlConsoleEditorFiltersCollection_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_DMXControlConsoleEditorData_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXControlConsoleEditorFiltersCollection_Statics; \
	DMXCONTROLCONSOLEEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMXControlConsoleEditorFiltersCollection;
// ********** End ScriptStruct FDMXControlConsoleEditorFiltersCollection ***************************

// ********** Begin Class UDMXControlConsoleEditorData *********************************************
struct Z_Construct_UClass_UDMXControlConsoleEditorData_Statics;
DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorData_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_DMXControlConsoleEditorData_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXControlConsoleEditorData(); \
	friend struct ::Z_Construct_UClass_UDMXControlConsoleEditorData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXCONTROLCONSOLEEDITOR_API UClass* ::Z_Construct_UClass_UDMXControlConsoleEditorData_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXControlConsoleEditorData, UDMXControlConsoleEditorDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXControlConsoleEditor"), Z_Construct_UClass_UDMXControlConsoleEditorData_NoRegister) \
	DECLARE_SERIALIZER(UDMXControlConsoleEditorData)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_DMXControlConsoleEditorData_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXControlConsoleEditorData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXControlConsoleEditorData(UDMXControlConsoleEditorData&&) = delete; \
	UDMXControlConsoleEditorData(const UDMXControlConsoleEditorData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXControlConsoleEditorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXControlConsoleEditorData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXControlConsoleEditorData) \
	NO_API virtual ~UDMXControlConsoleEditorData();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_DMXControlConsoleEditorData_h_86_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_DMXControlConsoleEditorData_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_DMXControlConsoleEditorData_h_90_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_DMXControlConsoleEditorData_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXControlConsoleEditorData;

// ********** End Class UDMXControlConsoleEditorData ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_DMXControlConsoleEditorData_h

// ********** Begin Enum EDMXControlConsoleEditorControlMode ***************************************
#define FOREACH_ENUM_EDMXCONTROLCONSOLEEDITORCONTROLMODE(op) \
	op(EDMXControlConsoleEditorControlMode::Relative) \
	op(EDMXControlConsoleEditorControlMode::Absolute) 

enum class EDMXControlConsoleEditorControlMode : uint8;
template<> struct TIsUEnumClass<EDMXControlConsoleEditorControlMode> { enum { Value = true }; };
template<> DMXCONTROLCONSOLEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXControlConsoleEditorControlMode>();
// ********** End Enum EDMXControlConsoleEditorControlMode *****************************************

// ********** Begin Enum EDMXControlConsoleEditorViewMode ******************************************
#define FOREACH_ENUM_EDMXCONTROLCONSOLEEDITORVIEWMODE(op) \
	op(EDMXControlConsoleEditorViewMode::Collapsed) \
	op(EDMXControlConsoleEditorViewMode::Expanded) 

enum class EDMXControlConsoleEditorViewMode : uint8;
template<> struct TIsUEnumClass<EDMXControlConsoleEditorViewMode> { enum { Value = true }; };
template<> DMXCONTROLCONSOLEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXControlConsoleEditorViewMode>();
// ********** End Enum EDMXControlConsoleEditorViewMode ********************************************

// ********** Begin Enum EDMXControlConsoleEditorValueType *****************************************
#define FOREACH_ENUM_EDMXCONTROLCONSOLEEDITORVALUETYPE(op) \
	op(EDMXControlConsoleEditorValueType::DMX) \
	op(EDMXControlConsoleEditorValueType::Normalized) \
	op(EDMXControlConsoleEditorValueType::Physical) 

enum class EDMXControlConsoleEditorValueType : uint8;
template<> struct TIsUEnumClass<EDMXControlConsoleEditorValueType> { enum { Value = true }; };
template<> DMXCONTROLCONSOLEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXControlConsoleEditorValueType>();
// ********** End Enum EDMXControlConsoleEditorValueType *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
