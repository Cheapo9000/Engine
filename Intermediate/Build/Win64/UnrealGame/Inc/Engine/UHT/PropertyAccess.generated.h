// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyAccess.h"

#ifdef ENGINE_PropertyAccess_generated_h
#error "PropertyAccess.generated.h already included, missing '#pragma once' in PropertyAccess.h"
#endif
#define ENGINE_PropertyAccess_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPropertyAccessIndirection ****************************************
struct Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_129_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPropertyAccessIndirection;
// ********** End ScriptStruct FPropertyAccessIndirection ******************************************

// ********** Begin ScriptStruct FPropertyAccessIndirectionChain ***********************************
struct Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_173_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPropertyAccessIndirectionChain;
// ********** End ScriptStruct FPropertyAccessIndirectionChain *************************************

// ********** Begin ScriptStruct FPropertyAccessSegment ********************************************
struct Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_240_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPropertyAccessSegment;
// ********** End ScriptStruct FPropertyAccessSegment **********************************************

// ********** Begin ScriptStruct FPropertyAccessPath ***********************************************
struct Z_Construct_UScriptStruct_FPropertyAccessPath_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_278_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyAccessPath_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPropertyAccessPath;
// ********** End ScriptStruct FPropertyAccessPath *************************************************

// ********** Begin ScriptStruct FPropertyAccessCopy ***********************************************
struct Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_360_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPropertyAccessCopy;
// ********** End ScriptStruct FPropertyAccessCopy *************************************************

// ********** Begin ScriptStruct FPropertyAccessCopyBatch ******************************************
struct Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_387_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPropertyAccessCopyBatch;
// ********** End ScriptStruct FPropertyAccessCopyBatch ********************************************

// ********** Begin ScriptStruct FPropertyAccessLibrary ********************************************
struct Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_403_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPropertyAccessLibrary;
// ********** End ScriptStruct FPropertyAccessLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h

// ********** Begin Enum EPropertyAccessCopyBatch **************************************************
#define FOREACH_ENUM_EPROPERTYACCESSCOPYBATCH(op) \
	op(EPropertyAccessCopyBatch::InternalUnbatched) \
	op(EPropertyAccessCopyBatch::ExternalUnbatched) \
	op(EPropertyAccessCopyBatch::InternalBatched) \
	op(EPropertyAccessCopyBatch::ExternalBatched) \
	op(EPropertyAccessCopyBatch::Count) 

enum class EPropertyAccessCopyBatch : uint8;
template<> struct TIsUEnumClass<EPropertyAccessCopyBatch> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAccessCopyBatch>();
// ********** End Enum EPropertyAccessCopyBatch ****************************************************

// ********** Begin Enum EPropertyAccessIndirectionType ********************************************
#define FOREACH_ENUM_EPROPERTYACCESSINDIRECTIONTYPE(op) \
	op(EPropertyAccessIndirectionType::Offset) \
	op(EPropertyAccessIndirectionType::Object) \
	op(EPropertyAccessIndirectionType::Array) \
	op(EPropertyAccessIndirectionType::ScriptFunction) \
	op(EPropertyAccessIndirectionType::NativeFunction) 

enum class EPropertyAccessIndirectionType : uint8;
template<> struct TIsUEnumClass<EPropertyAccessIndirectionType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAccessIndirectionType>();
// ********** End Enum EPropertyAccessIndirectionType **********************************************

// ********** Begin Enum EPropertyAccessObjectType *************************************************
#define FOREACH_ENUM_EPROPERTYACCESSOBJECTTYPE(op) \
	op(EPropertyAccessObjectType::None) \
	op(EPropertyAccessObjectType::Object) \
	op(EPropertyAccessObjectType::WeakObject) \
	op(EPropertyAccessObjectType::SoftObject) 

enum class EPropertyAccessObjectType : uint8;
template<> struct TIsUEnumClass<EPropertyAccessObjectType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAccessObjectType>();
// ********** End Enum EPropertyAccessObjectType ***************************************************

// ********** Begin Enum EPropertyAccessCopyType ***************************************************
#define FOREACH_ENUM_EPROPERTYACCESSCOPYTYPE(op) \
	op(EPropertyAccessCopyType::None) \
	op(EPropertyAccessCopyType::Plain) \
	op(EPropertyAccessCopyType::Complex) \
	op(EPropertyAccessCopyType::Bool) \
	op(EPropertyAccessCopyType::Struct) \
	op(EPropertyAccessCopyType::Object) \
	op(EPropertyAccessCopyType::Name) \
	op(EPropertyAccessCopyType::Array) \
	op(EPropertyAccessCopyType::PromoteBoolToByte) \
	op(EPropertyAccessCopyType::PromoteBoolToInt32) \
	op(EPropertyAccessCopyType::PromoteBoolToInt64) \
	op(EPropertyAccessCopyType::PromoteBoolToFloat) \
	op(EPropertyAccessCopyType::PromoteBoolToDouble) \
	op(EPropertyAccessCopyType::PromoteByteToInt32) \
	op(EPropertyAccessCopyType::PromoteByteToInt64) \
	op(EPropertyAccessCopyType::PromoteByteToFloat) \
	op(EPropertyAccessCopyType::PromoteByteToDouble) \
	op(EPropertyAccessCopyType::PromoteInt32ToInt64) \
	op(EPropertyAccessCopyType::PromoteInt32ToFloat) \
	op(EPropertyAccessCopyType::PromoteInt32ToDouble) \
	op(EPropertyAccessCopyType::PromoteFloatToDouble) \
	op(EPropertyAccessCopyType::DemoteDoubleToFloat) \
	op(EPropertyAccessCopyType::PromoteArrayFloatToDouble) \
	op(EPropertyAccessCopyType::DemoteArrayDoubleToFloat) \
	op(EPropertyAccessCopyType::PromoteMapValueFloatToDouble) \
	op(EPropertyAccessCopyType::DemoteMapValueDoubleToFloat) 

enum class EPropertyAccessCopyType : uint8;
template<> struct TIsUEnumClass<EPropertyAccessCopyType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAccessCopyType>();
// ********** End Enum EPropertyAccessCopyType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
