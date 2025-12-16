// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInterchangeInstancedFoliageTypeFactoryNode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
FAB_API UClass* Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode();
FAB_API UClass* Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode_NoRegister();
FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_EFoliageScaling();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
UPackage* Z_Construct_UPackage__Script_Fab();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomAffectDistanceFieldLighting 
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAffectDistanceFieldLighting_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCustomAffectDistanceFieldLighting constinit property declarations **
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCustomAffectDistanceFieldLighting constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCustomAffectDistanceFieldLighting Property Definitions *************
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAffectDistanceFieldLighting_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAffectDistanceFieldLighting_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAffectDistanceFieldLighting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAffectDistanceFieldLighting_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::PropPointers) < 2048);
// ********** End Function GetCustomAffectDistanceFieldLighting Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomAffectDistanceFieldLighting", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAffectDistanceFieldLighting_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAffectDistanceFieldLighting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomAffectDistanceFieldLighting)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAffectDistanceFieldLighting(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomAffectDistanceFieldLighting 

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomAlignToNormal 
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAlignToNormal_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCustomAlignToNormal constinit property declarations ****************
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCustomAlignToNormal constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCustomAlignToNormal Property Definitions ***************************
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAlignToNormal_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAlignToNormal_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAlignToNormal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAlignToNormal_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::PropPointers) < 2048);
// ********** End Function GetCustomAlignToNormal Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomAlignToNormal", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAlignToNormal_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAlignToNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomAlignToNormal)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAlignToNormal(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomAlignToNormal 

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomRandomPitchAngle 
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomPitchAngle_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCustomRandomPitchAngle constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCustomRandomPitchAngle constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCustomRandomPitchAngle Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomPitchAngle_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomPitchAngle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomPitchAngle_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::PropPointers) < 2048);
// ********** End Function GetCustomRandomPitchAngle Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomRandomPitchAngle", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomPitchAngle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomPitchAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomRandomPitchAngle)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomRandomPitchAngle(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomRandomPitchAngle 

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomRandomYaw **
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomYaw_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCustomRandomYaw constinit property declarations ********************
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCustomRandomYaw constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCustomRandomYaw Property Definitions *******************************
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomYaw_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomYaw_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomYaw_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomYaw_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::PropPointers) < 2048);
// ********** End Function GetCustomRandomYaw Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomRandomYaw", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomYaw_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomYaw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomRandomYaw)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomRandomYaw(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomRandomYaw ****

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaleX *****
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleX_Parms
	{
		FVector2f AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCustomScaleX constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCustomScaleX constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCustomScaleX Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleX_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleX_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleX_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::PropPointers) < 2048);
// ********** End Function GetCustomScaleX Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomScaleX", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleX_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaleX)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomScaleX(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaleX *******

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaleY *****
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleY_Parms
	{
		FVector2f AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCustomScaleY constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCustomScaleY constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCustomScaleY Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleY_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleY_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleY_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::PropPointers) < 2048);
// ********** End Function GetCustomScaleY Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomScaleY", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleY_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaleY)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomScaleY(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaleY *******

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaleZ *****
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleZ_Parms
	{
		FVector2f AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCustomScaleZ constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCustomScaleZ constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCustomScaleZ Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleZ_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleZ_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleZ_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::PropPointers) < 2048);
// ********** End Function GetCustomScaleZ Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomScaleZ", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleZ_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaleZ)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomScaleZ(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaleZ *******

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaling ****
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaling_Parms
	{
		EFoliageScaling AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCustomScaling constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCustomScaling constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCustomScaling Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaling_Parms, AttributeValue), Z_Construct_UEnum_Foliage_EFoliageScaling, METADATA_PARAMS(0, nullptr) }; // 908242069
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaling_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::PropPointers) < 2048);
// ********** End Function GetCustomScaling Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomScaling", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaling_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaling)
{
	P_GET_ENUM_REF(EFoliageScaling,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomScaling((EFoliageScaling&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaling ******

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomStaticMesh *
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomStaticMesh_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCustomStaticMesh constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCustomStaticMesh constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCustomStaticMesh Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomStaticMesh_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomStaticMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomStaticMesh_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::PropPointers) < 2048);
// ********** End Function GetCustomStaticMesh Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomStaticMesh", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomStaticMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomStaticMesh)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomStaticMesh(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomStaticMesh ***

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomWorldPositionOffsetDisableDistance 
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomWorldPositionOffsetDisableDistance_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCustomWorldPositionOffsetDisableDistance constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCustomWorldPositionOffsetDisableDistance constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCustomWorldPositionOffsetDisableDistance Property Definitions ******
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomWorldPositionOffsetDisableDistance_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomWorldPositionOffsetDisableDistance_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomWorldPositionOffsetDisableDistance_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers) < 2048);
// ********** End Function GetCustomWorldPositionOffsetDisableDistance Property Definitions ********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomWorldPositionOffsetDisableDistance", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomWorldPositionOffsetDisableDistance_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventGetCustomWorldPositionOffsetDisableDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomWorldPositionOffsetDisableDistance)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomWorldPositionOffsetDisableDistance(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function GetCustomWorldPositionOffsetDisableDistance 

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomAffectDistanceFieldLighting 
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddApplyDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCustomAffectDistanceFieldLighting constinit property declarations **
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCustomAffectDistanceFieldLighting constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCustomAffectDistanceFieldLighting Property Definitions *************
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddApplyDelegate_MetaData), NewProp_bAddApplyDelegate_MetaData) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::PropPointers) < 2048);
// ********** End Function SetCustomAffectDistanceFieldLighting Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomAffectDistanceFieldLighting", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomAffectDistanceFieldLighting)
{
	P_GET_UBOOL(Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomAffectDistanceFieldLighting(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomAffectDistanceFieldLighting 

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomAlignToNormal 
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddApplyDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCustomAlignToNormal constinit property declarations ****************
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCustomAlignToNormal constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCustomAlignToNormal Property Definitions ***************************
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddApplyDelegate_MetaData), NewProp_bAddApplyDelegate_MetaData) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::PropPointers) < 2048);
// ********** End Function SetCustomAlignToNormal Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomAlignToNormal", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomAlignToNormal)
{
	P_GET_UBOOL(Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomAlignToNormal(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomAlignToNormal 

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomRandomPitchAngle 
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddApplyDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCustomRandomPitchAngle constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCustomRandomPitchAngle constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCustomRandomPitchAngle Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddApplyDelegate_MetaData), NewProp_bAddApplyDelegate_MetaData) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::PropPointers) < 2048);
// ********** End Function SetCustomRandomPitchAngle Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomRandomPitchAngle", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomRandomPitchAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomRandomPitchAngle(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomRandomPitchAngle 

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomRandomYaw **
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddApplyDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCustomRandomYaw constinit property declarations ********************
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCustomRandomYaw constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCustomRandomYaw Property Definitions *******************************
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddApplyDelegate_MetaData), NewProp_bAddApplyDelegate_MetaData) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::PropPointers) < 2048);
// ********** End Function SetCustomRandomYaw Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomRandomYaw", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomRandomYaw)
{
	P_GET_UBOOL(Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomRandomYaw(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomRandomYaw ****

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaleX *****
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleX_Parms
	{
		FVector2f AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCustomScaleX constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCustomScaleX constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCustomScaleX Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleX_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleX_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleX_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::PropPointers) < 2048);
// ********** End Function SetCustomScaleX Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomScaleX", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleX_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaleX)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomScaleX(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaleX *******

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaleY *****
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleY_Parms
	{
		FVector2f AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCustomScaleY constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCustomScaleY constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCustomScaleY Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleY_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleY_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleY_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::PropPointers) < 2048);
// ********** End Function SetCustomScaleY Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomScaleY", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleY_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaleY)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomScaleY(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaleY *******

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaleZ *****
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleZ_Parms
	{
		FVector2f AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCustomScaleZ constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCustomScaleZ constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCustomScaleZ Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleZ_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleZ_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleZ_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::PropPointers) < 2048);
// ********** End Function SetCustomScaleZ Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomScaleZ", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleZ_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaleZ)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomScaleZ(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaleZ *******

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaling ****
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms
	{
		EFoliageScaling AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddApplyDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCustomScaling constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCustomScaling constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCustomScaling Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms, AttributeValue), Z_Construct_UEnum_Foliage_EFoliageScaling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) }; // 908242069
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddApplyDelegate_MetaData), NewProp_bAddApplyDelegate_MetaData) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::PropPointers) < 2048);
// ********** End Function SetCustomScaling Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomScaling", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaling)
{
	P_GET_ENUM(EFoliageScaling,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomScaling(EFoliageScaling(Z_Param_AttributeValue),Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaling ******

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomStaticMesh *
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomStaticMesh_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCustomStaticMesh constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCustomStaticMesh constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCustomStaticMesh Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomStaticMesh_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomStaticMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomStaticMesh_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::PropPointers) < 2048);
// ********** End Function SetCustomStaticMesh Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomStaticMesh", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomStaticMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomStaticMesh)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomStaticMesh(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomStaticMesh ***

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomWorldPositionOffsetDisableDistance 
struct Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics
{
	struct InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms
	{
		int32 AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | InstancedFoliageTypeFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddApplyDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCustomWorldPositionOffsetDisableDistance constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCustomWorldPositionOffsetDisableDistance constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCustomWorldPositionOffsetDisableDistance Property Definitions ******
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddApplyDelegate_MetaData), NewProp_bAddApplyDelegate_MetaData) };
void Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms), &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers) < 2048);
// ********** End Function SetCustomWorldPositionOffsetDisableDistance Property Definitions ********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomWorldPositionOffsetDisableDistance", 	Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::InterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomWorldPositionOffsetDisableDistance)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomWorldPositionOffsetDisableDistance(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode Function SetCustomWorldPositionOffsetDisableDistance 

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode ******************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactoryNode;
UClass* UInterchangeInstancedFoliageTypeFactoryNode::GetPrivateStaticClass()
{
	using TClass = UInterchangeInstancedFoliageTypeFactoryNode;
	if (!Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactoryNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InterchangeInstancedFoliageTypeFactoryNode"),
			Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactoryNode.InnerSingleton,
			StaticRegisterNativesUInterchangeInstancedFoliageTypeFactoryNode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactoryNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode_NoRegister()
{
	return UInterchangeInstancedFoliageTypeFactoryNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/InterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInterchangeInstancedFoliageTypeFactoryNode constinit property declarations 
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCustomAffectDistanceFieldLighting"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomAffectDistanceFieldLighting },
		{ .NameUTF8 = UTF8TEXT("GetCustomAlignToNormal"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomAlignToNormal },
		{ .NameUTF8 = UTF8TEXT("GetCustomRandomPitchAngle"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomRandomPitchAngle },
		{ .NameUTF8 = UTF8TEXT("GetCustomRandomYaw"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomRandomYaw },
		{ .NameUTF8 = UTF8TEXT("GetCustomScaleX"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaleX },
		{ .NameUTF8 = UTF8TEXT("GetCustomScaleY"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaleY },
		{ .NameUTF8 = UTF8TEXT("GetCustomScaleZ"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaleZ },
		{ .NameUTF8 = UTF8TEXT("GetCustomScaling"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaling },
		{ .NameUTF8 = UTF8TEXT("GetCustomStaticMesh"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomStaticMesh },
		{ .NameUTF8 = UTF8TEXT("GetCustomWorldPositionOffsetDisableDistance"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execGetCustomWorldPositionOffsetDisableDistance },
		{ .NameUTF8 = UTF8TEXT("SetCustomAffectDistanceFieldLighting"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomAffectDistanceFieldLighting },
		{ .NameUTF8 = UTF8TEXT("SetCustomAlignToNormal"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomAlignToNormal },
		{ .NameUTF8 = UTF8TEXT("SetCustomRandomPitchAngle"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomRandomPitchAngle },
		{ .NameUTF8 = UTF8TEXT("SetCustomRandomYaw"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomRandomYaw },
		{ .NameUTF8 = UTF8TEXT("SetCustomScaleX"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaleX },
		{ .NameUTF8 = UTF8TEXT("SetCustomScaleY"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaleY },
		{ .NameUTF8 = UTF8TEXT("SetCustomScaleZ"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaleZ },
		{ .NameUTF8 = UTF8TEXT("SetCustomScaling"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaling },
		{ .NameUTF8 = UTF8TEXT("SetCustomStaticMesh"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomStaticMesh },
		{ .NameUTF8 = UTF8TEXT("SetCustomWorldPositionOffsetDisableDistance"), .Pointer = &UInterchangeInstancedFoliageTypeFactoryNode::execSetCustomWorldPositionOffsetDisableDistance },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting, "GetCustomAffectDistanceFieldLighting" }, // 3747556305
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal, "GetCustomAlignToNormal" }, // 3928838536
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle, "GetCustomRandomPitchAngle" }, // 1255062203
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw, "GetCustomRandomYaw" }, // 3344090329
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX, "GetCustomScaleX" }, // 3516107835
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY, "GetCustomScaleY" }, // 4113444169
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ, "GetCustomScaleZ" }, // 3612022302
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling, "GetCustomScaling" }, // 3872357343
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh, "GetCustomStaticMesh" }, // 1687607946
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance, "GetCustomWorldPositionOffsetDisableDistance" }, // 3078886704
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting, "SetCustomAffectDistanceFieldLighting" }, // 1952712745
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal, "SetCustomAlignToNormal" }, // 1521279510
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle, "SetCustomRandomPitchAngle" }, // 2974582563
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw, "SetCustomRandomYaw" }, // 1107817697
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX, "SetCustomScaleX" }, // 2925689201
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY, "SetCustomScaleY" }, // 1527387094
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ, "SetCustomScaleZ" }, // 25042464
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling, "SetCustomScaling" }, // 1643373874
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh, "SetCustomStaticMesh" }, // 2705616809
		{ &Z_Construct_UFunction_UInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance, "SetCustomWorldPositionOffsetDisableDistance" }, // 1970401648
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeInstancedFoliageTypeFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode_Statics
UObject* (*const Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode_Statics::ClassParams = {
	&UInterchangeInstancedFoliageTypeFactoryNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode_Statics::Class_MetaDataParams)
};
void UInterchangeInstancedFoliageTypeFactoryNode::StaticRegisterNativesUInterchangeInstancedFoliageTypeFactoryNode()
{
	UClass* Class = UInterchangeInstancedFoliageTypeFactoryNode::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactoryNode.OuterSingleton;
}
UInterchangeInstancedFoliageTypeFactoryNode::UInterchangeInstancedFoliageTypeFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInterchangeInstancedFoliageTypeFactoryNode);
UInterchangeInstancedFoliageTypeFactoryNode::~UInterchangeInstancedFoliageTypeFactoryNode() {}
// ********** End Class UInterchangeInstancedFoliageTypeFactoryNode ********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_Nodes_InterchangeInstancedFoliageTypeFactoryNode_h__Script_Fab_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeInstancedFoliageTypeFactoryNode, UInterchangeInstancedFoliageTypeFactoryNode::StaticClass, TEXT("UInterchangeInstancedFoliageTypeFactoryNode"), &Z_Registration_Info_UClass_UInterchangeInstancedFoliageTypeFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeInstancedFoliageTypeFactoryNode), 3008402413U) },
	};
}; // Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_Nodes_InterchangeInstancedFoliageTypeFactoryNode_h__Script_Fab_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_Nodes_InterchangeInstancedFoliageTypeFactoryNode_h__Script_Fab_204081983{
	TEXT("/Script/Fab"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_Nodes_InterchangeInstancedFoliageTypeFactoryNode_h__Script_Fab_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_Nodes_InterchangeInstancedFoliageTypeFactoryNode_h__Script_Fab_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
