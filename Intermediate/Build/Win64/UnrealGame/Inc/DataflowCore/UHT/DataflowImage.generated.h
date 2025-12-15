// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowImage.h"

#ifdef DATAFLOWCORE_DataflowImage_generated_h
#error "DataflowImage.generated.h already included, missing '#pragma once' in DataflowImage.h"
#endif
#define DATAFLOWCORE_DataflowImage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataflowImage ****************************************************
struct Z_Construct_UScriptStruct_FDataflowImage_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowImage_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowImage_Statics; \
	DATAFLOWCORE_API static class UScriptStruct* StaticStruct();


struct FDataflowImage;
// ********** End ScriptStruct FDataflowImage ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowImage_h

// ********** Begin Enum EDataflowImageResolution **************************************************
#define FOREACH_ENUM_EDATAFLOWIMAGERESOLUTION(op) \
	op(EDataflowImageResolution::Resolution16) \
	op(EDataflowImageResolution::Resolution32) \
	op(EDataflowImageResolution::Resolution64) \
	op(EDataflowImageResolution::Resolution128) \
	op(EDataflowImageResolution::Resolution256) \
	op(EDataflowImageResolution::Resolution512) \
	op(EDataflowImageResolution::Resolution1024) \
	op(EDataflowImageResolution::Resolution2048) \
	op(EDataflowImageResolution::Resolution4096) \
	op(EDataflowImageResolution::Resolution8192) 

enum class EDataflowImageResolution : int32;
template<> struct TIsUEnumClass<EDataflowImageResolution> { enum { Value = true }; };
template<> DATAFLOWCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowImageResolution>();
// ********** End Enum EDataflowImageResolution ****************************************************

// ********** Begin Enum EDataflowImageChannel *****************************************************
#define FOREACH_ENUM_EDATAFLOWIMAGECHANNEL(op) \
	op(EDataflowImageChannel::Red) \
	op(EDataflowImageChannel::Green) \
	op(EDataflowImageChannel::Blue) \
	op(EDataflowImageChannel::Alpha) 

enum class EDataflowImageChannel : int32;
template<> struct TIsUEnumClass<EDataflowImageChannel> { enum { Value = true }; };
template<> DATAFLOWCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowImageChannel>();
// ********** End Enum EDataflowImageChannel *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
