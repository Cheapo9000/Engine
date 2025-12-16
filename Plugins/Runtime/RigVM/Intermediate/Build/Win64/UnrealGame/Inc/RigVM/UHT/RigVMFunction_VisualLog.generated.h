// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Debug/RigVMFunction_VisualLog.h"

#ifdef RIGVM_RigVMFunction_VisualLog_generated_h
#error "RigVMFunction_VisualLog.generated.h already included, missing '#pragma once' in RigVMFunction_VisualLog.h"
#endif
#define RIGVM_RigVMFunction_VisualLog_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_VisualLogBase **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualLogBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualLog_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualLogBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_DebugBaseMutable Super;


struct FRigVMFunction_VisualLogBase;
// ********** End ScriptStruct FRigVMFunction_VisualLogBase ****************************************

// ********** Begin ScriptStruct FRigVMFunction_VisualLogText **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualLogText_Statics;

#define FRigVMFunction_VisualLogText_Execute() \
	void FRigVMFunction_VisualLogText::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualLog_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualLogText_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Text = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Category = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Text, \
			Category, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_VisualLogBase Super;


struct FRigVMFunction_VisualLogText;
// ********** End ScriptStruct FRigVMFunction_VisualLogText ****************************************

// ********** Begin ScriptStruct FRigVMFunction_VisualLogObject ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualLogObject_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualLog_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualLogObject_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_VisualLogBase Super;


struct FRigVMFunction_VisualLogObject;
// ********** End ScriptStruct FRigVMFunction_VisualLogObject **************************************

// ********** Begin ScriptStruct FRigVMFunction_VisualLogLocation **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualLogLocation_Statics;

#define FRigVMFunction_VisualLogLocation_Execute() \
	void FRigVMFunction_VisualLogLocation::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Location, \
		const float Radius, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualLog_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualLogLocation_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Location, \
		const float Radius, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Location = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const float Radius = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const FLinearColor& ObjectColor = *(FLinearColor*)RigVMMemoryHandles[2].GetInputData(); \
		const FString& Text = *(FString*)RigVMMemoryHandles[3].GetInputData(); \
		const FName& Category = *(FName*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[5].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Location, \
			Radius, \
			ObjectColor, \
			Text, \
			Category, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_VisualLogObject Super;


struct FRigVMFunction_VisualLogLocation;
// ********** End ScriptStruct FRigVMFunction_VisualLogLocation ************************************

// ********** Begin ScriptStruct FRigVMFunction_VisualLogWireframeOptional *************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualLogWireframeOptional_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualLog_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualLogWireframeOptional_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_VisualLogObject Super;


struct FRigVMFunction_VisualLogWireframeOptional;
// ********** End ScriptStruct FRigVMFunction_VisualLogWireframeOptional ***************************

// ********** Begin ScriptStruct FRigVMFunction_VisualLogSphere ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualLogSphere_Statics;

#define FRigVMFunction_VisualLogSphere_Execute() \
	void FRigVMFunction_VisualLogSphere::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Center, \
		const float Radius, \
		const bool bWireframe, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualLog_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualLogSphere_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Center, \
		const float Radius, \
		const bool bWireframe, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Center = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const float Radius = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bWireframe = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const FLinearColor& ObjectColor = *(FLinearColor*)RigVMMemoryHandles[3].GetInputData(); \
		const FString& Text = *(FString*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Category = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[6].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Center, \
			Radius, \
			bWireframe, \
			ObjectColor, \
			Text, \
			Category, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_VisualLogWireframeOptional Super;


struct FRigVMFunction_VisualLogSphere;
// ********** End ScriptStruct FRigVMFunction_VisualLogSphere **************************************

// ********** Begin ScriptStruct FRigVMFunction_VisualLogCone **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualLogCone_Statics;

#define FRigVMFunction_VisualLogCone_Execute() \
	void FRigVMFunction_VisualLogCone::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Origin, \
		const FVector& Direction, \
		const float Length, \
		const float Angle, \
		const bool bWireframe, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualLog_h_95_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualLogCone_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Origin, \
		const FVector& Direction, \
		const float Length, \
		const float Angle, \
		const bool bWireframe, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Origin = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Direction = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const float Length = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Angle = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bWireframe = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		const FLinearColor& ObjectColor = *(FLinearColor*)RigVMMemoryHandles[5].GetInputData(); \
		const FString& Text = *(FString*)RigVMMemoryHandles[6].GetInputData(); \
		const FName& Category = *(FName*)RigVMMemoryHandles[7].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[8].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Origin, \
			Direction, \
			Length, \
			Angle, \
			bWireframe, \
			ObjectColor, \
			Text, \
			Category, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_VisualLogWireframeOptional Super;


struct FRigVMFunction_VisualLogCone;
// ********** End ScriptStruct FRigVMFunction_VisualLogCone ****************************************

// ********** Begin ScriptStruct FRigVMFunction_VisualLogCylinder **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualLogCylinder_Statics;

#define FRigVMFunction_VisualLogCylinder_Execute() \
	void FRigVMFunction_VisualLogCylinder::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const float Radius, \
		const bool bWireframe, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualLog_h_121_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualLogCylinder_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const float Radius, \
		const bool bWireframe, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Start = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& End = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const float Radius = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bWireframe = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		const FLinearColor& ObjectColor = *(FLinearColor*)RigVMMemoryHandles[4].GetInputData(); \
		const FString& Text = *(FString*)RigVMMemoryHandles[5].GetInputData(); \
		const FName& Category = *(FName*)RigVMMemoryHandles[6].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[7].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Start, \
			End, \
			Radius, \
			bWireframe, \
			ObjectColor, \
			Text, \
			Category, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_VisualLogWireframeOptional Super;


struct FRigVMFunction_VisualLogCylinder;
// ********** End ScriptStruct FRigVMFunction_VisualLogCylinder ************************************

// ********** Begin ScriptStruct FRigVMFunction_VisualLogCapsule ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualLogCapsule_Statics;

#define FRigVMFunction_VisualLogCapsule_Execute() \
	void FRigVMFunction_VisualLogCapsule::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Base, \
		const float HalfHeight, \
		const float Radius, \
		const FQuat& Rotation, \
		const bool bWireframe, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualLog_h_143_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualLogCapsule_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Base, \
		const float HalfHeight, \
		const float Radius, \
		const FQuat& Rotation, \
		const bool bWireframe, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Base = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const float HalfHeight = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float Radius = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const FQuat& Rotation = *(FQuat*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bWireframe = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		const FLinearColor& ObjectColor = *(FLinearColor*)RigVMMemoryHandles[5].GetInputData(); \
		const FString& Text = *(FString*)RigVMMemoryHandles[6].GetInputData(); \
		const FName& Category = *(FName*)RigVMMemoryHandles[7].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[8].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Base, \
			HalfHeight, \
			Radius, \
			Rotation, \
			bWireframe, \
			ObjectColor, \
			Text, \
			Category, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_VisualLogWireframeOptional Super;


struct FRigVMFunction_VisualLogCapsule;
// ********** End ScriptStruct FRigVMFunction_VisualLogCapsule *************************************

// ********** Begin ScriptStruct FRigVMFunction_VisualLogBox ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualLogBox_Statics;

#define FRigVMFunction_VisualLogBox_Execute() \
	void FRigVMFunction_VisualLogBox::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const bool bWireframe, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualLog_h_169_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualLogBox_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const bool bWireframe, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bWireframe = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const FLinearColor& ObjectColor = *(FLinearColor*)RigVMMemoryHandles[2].GetInputData(); \
		const FString& Text = *(FString*)RigVMMemoryHandles[3].GetInputData(); \
		const FName& Category = *(FName*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[5].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			bWireframe, \
			ObjectColor, \
			Text, \
			Category, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_VisualLogWireframeOptional Super;


struct FRigVMFunction_VisualLogBox;
// ********** End ScriptStruct FRigVMFunction_VisualLogBox *****************************************

// ********** Begin ScriptStruct FRigVMFunction_VisualLogOrientedBox *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualLogOrientedBox_Statics;

#define FRigVMFunction_VisualLogOrientedBox_Execute() \
	void FRigVMFunction_VisualLogOrientedBox::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FTransform& Transform, \
		const bool bWireframe, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualLog_h_183_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualLogOrientedBox_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FTransform& Transform, \
		const bool bWireframe, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bWireframe = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const FLinearColor& ObjectColor = *(FLinearColor*)RigVMMemoryHandles[3].GetInputData(); \
		const FString& Text = *(FString*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Category = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[6].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Transform, \
			bWireframe, \
			ObjectColor, \
			Text, \
			Category, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_VisualLogWireframeOptional Super;


struct FRigVMFunction_VisualLogOrientedBox;
// ********** End ScriptStruct FRigVMFunction_VisualLogOrientedBox *********************************

// ********** Begin ScriptStruct FRigVMFunction_VisualLogArrow *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualLogArrow_Statics;

#define FRigVMFunction_VisualLogArrow_Execute() \
	void FRigVMFunction_VisualLogArrow::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& SegmentStart, \
		const FVector& SegmentEnd, \
		const float ArrowHeadSize, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualLog_h_201_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualLogArrow_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& SegmentStart, \
		const FVector& SegmentEnd, \
		const float ArrowHeadSize, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& SegmentStart = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& SegmentEnd = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const float ArrowHeadSize = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const FLinearColor& ObjectColor = *(FLinearColor*)RigVMMemoryHandles[3].GetInputData(); \
		const FString& Text = *(FString*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Category = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[6].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			SegmentStart, \
			SegmentEnd, \
			ArrowHeadSize, \
			ObjectColor, \
			Text, \
			Category, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_VisualLogObject Super;


struct FRigVMFunction_VisualLogArrow;
// ********** End ScriptStruct FRigVMFunction_VisualLogArrow ***************************************

// ********** Begin ScriptStruct FRigVMFunction_VisualLogCircle ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualLogCircle_Statics;

#define FRigVMFunction_VisualLogCircle_Execute() \
	void FRigVMFunction_VisualLogCircle::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Center, \
		const FVector& UpAxis, \
		const float Radius, \
		const float Thickness, \
		const bool bWireframe, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualLog_h_223_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualLogCircle_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Center, \
		const FVector& UpAxis, \
		const float Radius, \
		const float Thickness, \
		const bool bWireframe, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Center = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& UpAxis = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const float Radius = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bWireframe = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		const FLinearColor& ObjectColor = *(FLinearColor*)RigVMMemoryHandles[5].GetInputData(); \
		const FString& Text = *(FString*)RigVMMemoryHandles[6].GetInputData(); \
		const FName& Category = *(FName*)RigVMMemoryHandles[7].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[8].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Center, \
			UpAxis, \
			Radius, \
			Thickness, \
			bWireframe, \
			ObjectColor, \
			Text, \
			Category, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_VisualLogWireframeOptional Super;


struct FRigVMFunction_VisualLogCircle;
// ********** End ScriptStruct FRigVMFunction_VisualLogCircle **************************************

// ********** Begin ScriptStruct FRigVMFunction_VisualLogSegment ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualLogSegment_Statics;

#define FRigVMFunction_VisualLogSegment_Execute() \
	void FRigVMFunction_VisualLogSegment::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& SegmentStart, \
		const FVector& SegmentEnd, \
		const float Thickness, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualLog_h_249_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualLogSegment_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& SegmentStart, \
		const FVector& SegmentEnd, \
		const float Thickness, \
		const FLinearColor& ObjectColor, \
		const FString& Text, \
		const FName& Category, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& SegmentStart = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& SegmentEnd = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const FLinearColor& ObjectColor = *(FLinearColor*)RigVMMemoryHandles[3].GetInputData(); \
		const FString& Text = *(FString*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Category = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[6].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			SegmentStart, \
			SegmentEnd, \
			Thickness, \
			ObjectColor, \
			Text, \
			Category, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_VisualLogObject Super;


struct FRigVMFunction_VisualLogSegment;
// ********** End ScriptStruct FRigVMFunction_VisualLogSegment *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualLog_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
