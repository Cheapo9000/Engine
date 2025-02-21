// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChooserPropertyAccess.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSER_ChooserPropertyAccess_generated_h
#error "ChooserPropertyAccess.generated.h already included, missing '#pragma once' in ChooserPropertyAccess.h"
#endif
#define CHOOSER_ChooserPropertyAccess_generated_h

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserPropertyBinding>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserPropertyBinding Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserEnumPropertyBinding>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserPropertyBinding Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserObjectPropertyBinding>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserPropertyBinding Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserStructPropertyBinding>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_163_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FContextObjectTypeBase>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_173_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FContextObjectTypeBase Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FContextObjectTypeClass>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_181_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FContextObjectTypeBase Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FContextObjectTypeStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h


#define FOREACH_ENUM_ECONTEXTOBJECTDIRECTION(op) \
	op(EContextObjectDirection::Read) \
	op(EContextObjectDirection::Write) \
	op(EContextObjectDirection::ReadWrite) 

enum class EContextObjectDirection;
template<> struct TIsUEnumClass<EContextObjectDirection> { enum { Value = true }; };
template<> CHOOSER_API UEnum* StaticEnum<EContextObjectDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
