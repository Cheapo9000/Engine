// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/CustomAttributes.h"

#ifdef ENGINE_CustomAttributes_generated_h
#error "CustomAttributes.generated.h already included, missing '#pragma once' in CustomAttributes.h"
#endif
#define ENGINE_CustomAttributes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomAttributeSetting *******************************************
struct Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCustomAttributeSetting;
// ********** End ScriptStruct FCustomAttributeSetting *********************************************

// ********** Begin ScriptStruct FTimecodeCustomAttributeNameSettings ******************************
struct Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTimecodeCustomAttributeNameSettings;
// ********** End ScriptStruct FTimecodeCustomAttributeNameSettings ********************************

// ********** Begin ScriptStruct FCustomAttribute **************************************************
struct Z_Construct_UScriptStruct_FCustomAttribute_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCustomAttribute;
// ********** End ScriptStruct FCustomAttribute ****************************************************

// ********** Begin ScriptStruct FCustomAttributePerBoneData ***************************************
struct Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_134_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCustomAttributePerBoneData;
// ********** End ScriptStruct FCustomAttributePerBoneData *****************************************

// ********** Begin ScriptStruct FBakedStringCustomAttribute ***************************************
struct Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_153_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBakedStringCustomAttribute;
// ********** End ScriptStruct FBakedStringCustomAttribute *****************************************

// ********** Begin ScriptStruct FBakedIntegerCustomAttribute **************************************
struct Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_170_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBakedIntegerCustomAttribute;
// ********** End ScriptStruct FBakedIntegerCustomAttribute ****************************************

// ********** Begin ScriptStruct FBakedFloatCustomAttribute ****************************************
struct Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_187_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBakedFloatCustomAttribute;
// ********** End ScriptStruct FBakedFloatCustomAttribute ******************************************

// ********** Begin ScriptStruct FBakedCustomAttributePerBoneData **********************************
struct Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_204_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBakedCustomAttributePerBoneData;
// ********** End ScriptStruct FBakedCustomAttributePerBoneData ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h

// ********** Begin Enum ECustomAttributeBlendType *************************************************
#define FOREACH_ENUM_ECUSTOMATTRIBUTEBLENDTYPE(op) \
	op(ECustomAttributeBlendType::Override) \
	op(ECustomAttributeBlendType::Blend) 

enum class ECustomAttributeBlendType : uint8;
template<> struct TIsUEnumClass<ECustomAttributeBlendType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomAttributeBlendType>();
// ********** End Enum ECustomAttributeBlendType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
