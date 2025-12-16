// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceBindingReference.h"

#ifdef DAYSEQUENCE_DaySequenceBindingReference_generated_h
#error "DaySequenceBindingReference.generated.h already included, missing '#pragma once' in DaySequenceBindingReference.h"
#endif
#define DAYSEQUENCE_DaySequenceBindingReference_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDaySequenceBindingReference **************************************
struct Z_Construct_UScriptStruct_FDaySequenceBindingReference_Statics;
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceBindingReference_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDaySequenceBindingReference_Statics; \
	DAYSEQUENCE_API static class UScriptStruct* StaticStruct();


struct FDaySequenceBindingReference;
// ********** End ScriptStruct FDaySequenceBindingReference ****************************************

// ********** Begin ScriptStruct FDaySequenceBindingReferenceArray *********************************
struct Z_Construct_UScriptStruct_FDaySequenceBindingReferenceArray_Statics;
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceBindingReference_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDaySequenceBindingReferenceArray_Statics; \
	DAYSEQUENCE_API static class UScriptStruct* StaticStruct();


struct FDaySequenceBindingReferenceArray;
// ********** End ScriptStruct FDaySequenceBindingReferenceArray ***********************************

// ********** Begin ScriptStruct FDaySequenceBindingReferences *************************************
struct Z_Construct_UScriptStruct_FDaySequenceBindingReferences_Statics;
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceBindingReference_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDaySequenceBindingReferences_Statics; \
	DAYSEQUENCE_API static class UScriptStruct* StaticStruct();


struct FDaySequenceBindingReferences;
// ********** End ScriptStruct FDaySequenceBindingReferences ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceBindingReference_h

// ********** Begin Enum EDaySequenceBindingReferenceSpecialization ********************************
#define FOREACH_ENUM_EDAYSEQUENCEBINDINGREFERENCESPECIALIZATION(op) \
	op(EDaySequenceBindingReferenceSpecialization::None) \
	op(EDaySequenceBindingReferenceSpecialization::Root) \
	op(EDaySequenceBindingReferenceSpecialization::CameraModifier) 

enum class EDaySequenceBindingReferenceSpecialization;
template<> struct TIsUEnumClass<EDaySequenceBindingReferenceSpecialization> { enum { Value = true }; };
template<> DAYSEQUENCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDaySequenceBindingReferenceSpecialization>();
// ********** End Enum EDaySequenceBindingReferenceSpecialization **********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
