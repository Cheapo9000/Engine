// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChooserPropertyAccess.h"

#ifdef CHOOSER_ChooserPropertyAccess_generated_h
#error "ChooserPropertyAccess.generated.h already included, missing '#pragma once' in ChooserPropertyAccess.h"
#endif
#define CHOOSER_ChooserPropertyAccess_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChooserPropertyBinding *******************************************
struct Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


struct FChooserPropertyBinding;
// ********** End ScriptStruct FChooserPropertyBinding *********************************************

// ********** Begin ScriptStruct FChooserEnumPropertyBinding ***************************************
struct Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_134_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserPropertyBinding Super;


struct FChooserEnumPropertyBinding;
// ********** End ScriptStruct FChooserEnumPropertyBinding *****************************************

// ********** Begin ScriptStruct FChooserObjectPropertyBinding *************************************
struct Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_147_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserPropertyBinding Super;


struct FChooserObjectPropertyBinding;
// ********** End ScriptStruct FChooserObjectPropertyBinding ***************************************

// ********** Begin ScriptStruct FChooserStructPropertyBinding *************************************
struct Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_160_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserPropertyBinding Super;


struct FChooserStructPropertyBinding;
// ********** End ScriptStruct FChooserStructPropertyBinding ***************************************

// ********** Begin ScriptStruct FContextObjectTypeBase ********************************************
struct Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_181_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


struct FContextObjectTypeBase;
// ********** End ScriptStruct FContextObjectTypeBase **********************************************

// ********** Begin ScriptStruct FContextObjectTypeClass *******************************************
struct Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_191_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FContextObjectTypeBase Super;


struct FContextObjectTypeClass;
// ********** End ScriptStruct FContextObjectTypeClass *********************************************

// ********** Begin ScriptStruct FContextObjectTypeStruct ******************************************
struct Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_199_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FContextObjectTypeBase Super;


struct FContextObjectTypeStruct;
// ********** End ScriptStruct FContextObjectTypeStruct ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h

// ********** Begin Enum EContextObjectDirection ***************************************************
#define FOREACH_ENUM_ECONTEXTOBJECTDIRECTION(op) \
	op(EContextObjectDirection::Read) \
	op(EContextObjectDirection::Write) \
	op(EContextObjectDirection::ReadWrite) 

enum class EContextObjectDirection;
template<> struct TIsUEnumClass<EContextObjectDirection> { enum { Value = true }; };
template<> CHOOSER_NON_ATTRIBUTED_API UEnum* StaticEnum<EContextObjectDirection>();
// ********** End Enum EContextObjectDirection *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
