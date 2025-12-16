// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComputeFramework/ComputeGraphComponent.h"

#ifdef COMPUTEFRAMEWORK_ComputeGraphComponent_generated_h
#error "ComputeGraphComponent.generated.h already included, missing '#pragma once' in ComputeGraphComponent.h"
#endif
#define COMPUTEFRAMEWORK_ComputeGraphComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class UComputeGraphComponent ***************************************************
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQueueExecute); \
	DECLARE_FUNCTION(execDestroyDataProviders); \
	DECLARE_FUNCTION(execCreateDataProviders);


struct Z_Construct_UClass_UComputeGraphComponent_Statics;
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeGraphComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComputeGraphComponent(); \
	friend struct ::Z_Construct_UClass_UComputeGraphComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPUTEFRAMEWORK_API UClass* ::Z_Construct_UClass_UComputeGraphComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UComputeGraphComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComputeFramework"), Z_Construct_UClass_UComputeGraphComponent_NoRegister) \
	DECLARE_SERIALIZER(UComputeGraphComponent)


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComputeGraphComponent(UComputeGraphComponent&&) = delete; \
	UComputeGraphComponent(const UComputeGraphComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPUTEFRAMEWORK_API, UComputeGraphComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComputeGraphComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComputeGraphComponent) \
	COMPUTEFRAMEWORK_API virtual ~UComputeGraphComponent();


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComputeGraphComponent;

// ********** End Class UComputeGraphComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
