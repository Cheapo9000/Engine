// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/GeometryCollectionMaterialNodes.h"

#ifdef GEOMETRYCOLLECTIONNODES_GeometryCollectionMaterialNodes_generated_h
#error "GeometryCollectionMaterialNodes.generated.h already included, missing '#pragma once' in GeometryCollectionMaterialNodes.h"
#endif
#define GEOMETRYCOLLECTIONNODES_GeometryCollectionMaterialNodes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAddMaterialToCollectionDataflowNode ******************************
struct Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FAddMaterialToCollectionDataflowNode;
// ********** End ScriptStruct FAddMaterialToCollectionDataflowNode ********************************

// ********** Begin ScriptStruct FReAssignMaterialInCollectionDataflowNode *************************
struct Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FReAssignMaterialInCollectionDataflowNode;
// ********** End ScriptStruct FReAssignMaterialInCollectionDataflowNode ***************************

// ********** Begin ScriptStruct FMaterialsInfoDataflowNode ****************************************
struct Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_152_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FMaterialsInfoDataflowNode;
// ********** End ScriptStruct FMaterialsInfoDataflowNode ******************************************

// ********** Begin ScriptStruct FGetMaterialFromMaterialsArrayDataflowNode ************************
struct Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_185_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FGetMaterialFromMaterialsArrayDataflowNode;
// ********** End ScriptStruct FGetMaterialFromMaterialsArrayDataflowNode **************************

// ********** Begin ScriptStruct FSetMaterialInMaterialsArrayDataflowNode **************************
struct Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_233_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FSetMaterialInMaterialsArrayDataflowNode;
// ********** End ScriptStruct FSetMaterialInMaterialsArrayDataflowNode ****************************

// ********** Begin ScriptStruct FMakeMaterialDataflowNode *****************************************
struct Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_277_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FMakeMaterialDataflowNode;
// ********** End ScriptStruct FMakeMaterialDataflowNode *******************************************

// ********** Begin ScriptStruct FMakeMaterialsArrayDataflowNode ***********************************
struct Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_308_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FMakeMaterialsArrayDataflowNode;
// ********** End ScriptStruct FMakeMaterialsArrayDataflowNode *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h

// ********** Begin Enum ESetMaterialOperationTypeEnum *********************************************
#define FOREACH_ENUM_ESETMATERIALOPERATIONTYPEENUM(op) \
	op(ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Add) \
	op(ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Insert) \
	op(ESetMaterialOperationTypeEnum::Dataflow_Max) 

enum class ESetMaterialOperationTypeEnum : uint8;
template<> struct TIsUEnumClass<ESetMaterialOperationTypeEnum> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<ESetMaterialOperationTypeEnum>();
// ********** End Enum ESetMaterialOperationTypeEnum ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
