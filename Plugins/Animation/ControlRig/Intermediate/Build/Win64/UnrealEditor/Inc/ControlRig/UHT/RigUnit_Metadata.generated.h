// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_Metadata.h"

#ifdef CONTROLRIG_RigUnit_Metadata_generated_h
#error "RigUnit_Metadata.generated.h already included, missing '#pragma once' in RigUnit_Metadata.h"
#endif
#define CONTROLRIG_RigUnit_Metadata_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigDispatch_MetadataBase *****************************************
struct Z_Construct_UScriptStruct_FRigDispatch_MetadataBase_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigDispatch_MetadataBase_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatchFactory Super;


struct FRigDispatch_MetadataBase;
// ********** End ScriptStruct FRigDispatch_MetadataBase *******************************************

// ********** Begin ScriptStruct FRigDispatch_GetMetadata ******************************************
struct Z_Construct_UScriptStruct_FRigDispatch_GetMetadata_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_191_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigDispatch_GetMetadata_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatch_MetadataBase Super;


struct FRigDispatch_GetMetadata;
// ********** End ScriptStruct FRigDispatch_GetMetadata ********************************************

// ********** Begin ScriptStruct FRigDispatch_SetMetadata ******************************************
struct Z_Construct_UScriptStruct_FRigDispatch_SetMetadata_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_265_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigDispatch_SetMetadata_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatch_MetadataBase Super;


struct FRigDispatch_SetMetadata;
// ********** End ScriptStruct FRigDispatch_SetMetadata ********************************************

// ********** Begin ScriptStruct FRigUnit_RemoveMetadata *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics;

#define FRigUnit_RemoveMetadata_Execute() \
	void FRigUnit_RemoveMetadata::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_342_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetInputData(); \
		bool& Removed = *(bool*)RigVMMemoryHandles[3].GetOutputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Name, \
			NameSpace, \
			Removed, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_RemoveMetadata;
// ********** End ScriptStruct FRigUnit_RemoveMetadata *********************************************

// ********** Begin ScriptStruct FRigUnit_RemoveAllMetadata ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics;

#define FRigUnit_RemoveAllMetadata_Execute() \
	void FRigUnit_RemoveAllMetadata::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_388_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Removed = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			NameSpace, \
			Removed, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_RemoveAllMetadata;
// ********** End ScriptStruct FRigUnit_RemoveAllMetadata ******************************************

// ********** Begin ScriptStruct FRigUnit_HasMetadata **********************************************
struct Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics;

#define FRigUnit_HasMetadata_Execute() \
	void FRigUnit_HasMetadata::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		const ERigMetadataType Type, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_427_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		const ERigMetadataType Type, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigMetadataType Type = *(ERigMetadataType*)RigVMMemoryHandles[2].GetInputData(); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[3].GetInputData(); \
		bool& Found = *(bool*)RigVMMemoryHandles[4].GetOutputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Name, \
			Type, \
			NameSpace, \
			Found, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_HasMetadata;
// ********** End ScriptStruct FRigUnit_HasMetadata ************************************************

// ********** Begin ScriptStruct FRigUnit_FindItemsWithMetadata ************************************
struct Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics;

#define FRigUnit_FindItemsWithMetadata_Execute() \
	void FRigUnit_FindItemsWithMetadata::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Name, \
		const ERigMetadataType Type, \
		const ERigMetaDataNameSpace NameSpace, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_480_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Name, \
		const ERigMetadataType Type, \
		const ERigMetaDataNameSpace NameSpace, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigMetadataType Type = *(ERigMetadataType*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetInputData(); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Name, \
			Type, \
			NameSpace, \
			Items \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_FindItemsWithMetadata;
// ********** End ScriptStruct FRigUnit_FindItemsWithMetadata **************************************

// ********** Begin ScriptStruct FRigUnit_GetMetadataTags ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics;

#define FRigUnit_GetMetadataTags_Execute() \
	void FRigUnit_GetMetadataTags::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		TArray<FName>& Tags, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_521_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		TArray<FName>& Tags, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetOutputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tags, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetMetadataTags;
// ********** End ScriptStruct FRigUnit_GetMetadataTags ********************************************

// ********** Begin ScriptStruct FRigUnit_SetMetadataTag *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics;

#define FRigUnit_SetMetadataTag_Execute() \
	void FRigUnit_SetMetadataTag::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_555_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Tag = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetInputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tag, \
			NameSpace, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetMetadataTag;
// ********** End ScriptStruct FRigUnit_SetMetadataTag *********************************************

// ********** Begin ScriptStruct FRigUnit_SetMetadataTagArray **************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics;

#define FRigUnit_SetMetadataTagArray_Execute() \
	void FRigUnit_SetMetadataTagArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_596_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetInputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tags, \
			NameSpace, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetMetadataTagArray;
// ********** End ScriptStruct FRigUnit_SetMetadataTagArray ****************************************

// ********** Begin ScriptStruct FRigUnit_RemoveMetadataTag ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics;

#define FRigUnit_RemoveMetadataTag_Execute() \
	void FRigUnit_RemoveMetadataTag::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_637_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Tag = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetInputData(); \
		bool& Removed = *(bool*)RigVMMemoryHandles[3].GetOutputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tag, \
			NameSpace, \
			Removed, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_RemoveMetadataTag;
// ********** End ScriptStruct FRigUnit_RemoveMetadataTag ******************************************

// ********** Begin ScriptStruct FRigUnit_HasMetadataTag *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics;

#define FRigUnit_HasMetadataTag_Execute() \
	void FRigUnit_HasMetadataTag::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_685_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Tag = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetInputData(); \
		bool& Found = *(bool*)RigVMMemoryHandles[3].GetOutputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tag, \
			NameSpace, \
			Found, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_HasMetadataTag;
// ********** End ScriptStruct FRigUnit_HasMetadataTag *********************************************

// ********** Begin ScriptStruct FRigUnit_HasMetadataTagArray **************************************
struct Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics;

#define FRigUnit_HasMetadataTagArray_Execute() \
	void FRigUnit_HasMetadataTagArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_731_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetInputData(); \
		bool& Found = *(bool*)RigVMMemoryHandles[3].GetOutputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tags, \
			NameSpace, \
			Found, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_HasMetadataTagArray;
// ********** End ScriptStruct FRigUnit_HasMetadataTagArray ****************************************

// ********** Begin ScriptStruct FRigUnit_FindItemsWithMetadataTag *********************************
struct Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics;

#define FRigUnit_FindItemsWithMetadataTag_Execute() \
	void FRigUnit_FindItemsWithMetadataTag::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_777_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Tag = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Tag, \
			NameSpace, \
			Items \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_FindItemsWithMetadataTag;
// ********** End ScriptStruct FRigUnit_FindItemsWithMetadataTag ***********************************

// ********** Begin ScriptStruct FRigUnit_FindItemsWithMetadataTagArray ****************************
struct Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics;

#define FRigUnit_FindItemsWithMetadataTagArray_Execute() \
	void FRigUnit_FindItemsWithMetadataTagArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_811_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Tags, \
			NameSpace, \
			Items \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_FindItemsWithMetadataTagArray;
// ********** End ScriptStruct FRigUnit_FindItemsWithMetadataTagArray ******************************

// ********** Begin ScriptStruct FRigUnit_FilterItemsByMetadataTags ********************************
struct Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics;

#define FRigUnit_FilterItemsByMetadataTags_Execute() \
	void FRigUnit_FilterItemsByMetadataTags::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		const bool Inclusive, \
		TArray<FRigElementKey>& Result, \
		TArray<FCachedRigElement>& CachedIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_845_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		const bool Inclusive, \
		TArray<FRigElementKey>& Result, \
		TArray<FCachedRigElement>& CachedIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetInputData(); \
		const bool Inclusive = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		TArray<FRigElementKey>& Result = *(TArray<FRigElementKey>*)RigVMMemoryHandles[4].GetOutputData(); \
		TArray<FCachedRigElement>& CachedIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Tags, \
			NameSpace, \
			Inclusive, \
			Result, \
			CachedIndices \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_FilterItemsByMetadataTags;
// ********** End ScriptStruct FRigUnit_FilterItemsByMetadataTags **********************************

// ********** Begin ScriptStruct FRigDispatch_GetModuleMetadata ************************************
struct Z_Construct_UScriptStruct_FRigDispatch_GetModuleMetadata_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_896_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigDispatch_GetModuleMetadata_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatch_GetMetadata Super;


struct FRigDispatch_GetModuleMetadata;
// ********** End ScriptStruct FRigDispatch_GetModuleMetadata **************************************

// ********** Begin ScriptStruct FRigDispatch_SetModuleMetadata ************************************
struct Z_Construct_UScriptStruct_FRigDispatch_SetModuleMetadata_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_959_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigDispatch_SetModuleMetadata_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatch_SetMetadata Super;


struct FRigDispatch_SetModuleMetadata;
// ********** End ScriptStruct FRigDispatch_SetModuleMetadata **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
