// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/ExposedValueHandler.h"

#ifdef ENGINE_ExposedValueHandler_generated_h
#error "ExposedValueHandler.generated.h already included, missing '#pragma once' in ExposedValueHandler.h"
#endif
#define ENGINE_ExposedValueHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FExposedValueCopyRecord *******************************************
struct Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FExposedValueCopyRecord;
// ********** End ScriptStruct FExposedValueCopyRecord *********************************************

// ********** Begin ScriptStruct FExposedValueHandler **********************************************
struct Z_Construct_UScriptStruct_FExposedValueHandler_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FExposedValueHandler_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FExposedValueHandler;
// ********** End ScriptStruct FExposedValueHandler ************************************************

// ********** Begin ScriptStruct FAnimNodeExposedValueHandler **************************************
struct Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimNodeExposedValueHandler;
// ********** End ScriptStruct FAnimNodeExposedValueHandler ****************************************

// ********** Begin ScriptStruct FAnimNodeExposedValueHandler_Base *********************************
struct Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_113_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_Base_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeExposedValueHandler Super;


struct FAnimNodeExposedValueHandler_Base;
// ********** End ScriptStruct FAnimNodeExposedValueHandler_Base ***********************************

// ********** Begin ScriptStruct FAnimNodeExposedValueHandler_PropertyAccess ***********************
struct Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeExposedValueHandler_Base Super;


struct FAnimNodeExposedValueHandler_PropertyAccess;
// ********** End ScriptStruct FAnimNodeExposedValueHandler_PropertyAccess *************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h

// ********** Begin Enum EPostCopyOperation ********************************************************
#define FOREACH_ENUM_EPOSTCOPYOPERATION(op) \
	op(EPostCopyOperation::None) \
	op(EPostCopyOperation::LogicalNegateBool) 

enum class EPostCopyOperation : uint8;
template<> struct TIsUEnumClass<EPostCopyOperation> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPostCopyOperation>();
// ********** End Enum EPostCopyOperation **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
