// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGComponent.h"

#ifdef PCG_PCGComponent_generated_h
#error "PCGComponent.generated.h already included, missing '#pragma once' in PCGComponent.h"
#endif
#define PCG_PCGComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UClass;
class UObject;
class UPCGComponent;
class UPCGGraphInterface;
class UPCGManagedResource;
enum class EPCGEditorDirtyMode : uint8;
struct FPCGDataCollection;

// ********** Begin Delegate FOnPCGGraphStartGeneratingExternal ************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_55_DELEGATE \
PCG_API void FOnPCGGraphStartGeneratingExternal_DelegateWrapper(const FMulticastScriptDelegate& OnPCGGraphStartGeneratingExternal, UPCGComponent* PCGComponent);


// ********** End Delegate FOnPCGGraphStartGeneratingExternal **************************************

// ********** Begin Delegate FOnPCGGraphCancelledExternal ******************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_56_DELEGATE \
PCG_API void FOnPCGGraphCancelledExternal_DelegateWrapper(const FMulticastScriptDelegate& OnPCGGraphCancelledExternal, UPCGComponent* PCGComponent);


// ********** End Delegate FOnPCGGraphCancelledExternal ********************************************

// ********** Begin Delegate FOnPCGGraphGeneratedExternal ******************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_57_DELEGATE \
PCG_API void FOnPCGGraphGeneratedExternal_DelegateWrapper(const FMulticastScriptDelegate& OnPCGGraphGeneratedExternal, UPCGComponent* PCGComponent);


// ********** End Delegate FOnPCGGraphGeneratedExternal ********************************************

// ********** Begin Delegate FOnPCGGraphCleanedExternal ********************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_58_DELEGATE \
PCG_API void FOnPCGGraphCleanedExternal_DelegateWrapper(const FMulticastScriptDelegate& OnPCGGraphCleanedExternal, UPCGComponent* PCGComponent);


// ********** End Delegate FOnPCGGraphCleanedExternal **********************************************

// ********** Begin Class UPCGComponent ************************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	PCG_API virtual void Cleanup_Implementation(bool bRemoveComponents); \
	PCG_API virtual void Generate_Implementation(bool bForce); \
	PCG_API virtual void SetGraph_Implementation(UPCGGraphInterface* InGraph); \
	DECLARE_FUNCTION(execGetSerializedEditingMode); \
	DECLARE_FUNCTION(execGetEditingMode); \
	DECLARE_FUNCTION(execSetEditingMode); \
	DECLARE_FUNCTION(execClearPCGLink); \
	DECLARE_FUNCTION(execGetGeneratedGraphOutput); \
	DECLARE_FUNCTION(execNotifyPropertiesChangedFromBlueprint); \
	DECLARE_FUNCTION(execCleanup); \
	DECLARE_FUNCTION(execGenerate); \
	DECLARE_FUNCTION(execCleanupLocal); \
	DECLARE_FUNCTION(execGenerateLocal); \
	DECLARE_FUNCTION(execAddActorsToManagedResources); \
	DECLARE_FUNCTION(execAddComponentsToManagedResources); \
	DECLARE_FUNCTION(execAddToManagedResources); \
	DECLARE_FUNCTION(execSetGraph);


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_154_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_154_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPCGComponent, PCG_API)


struct Z_Construct_UClass_UPCGComponent_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGComponent_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGComponent(); \
	friend struct ::Z_Construct_UClass_UPCGComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGComponent_NoRegister) \
	DECLARE_SERIALIZER(UPCGComponent) \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_154_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UPCGComponent*>(this); }


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_154_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGComponent(UPCGComponent&&) = delete; \
	UPCGComponent(const UPCGComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGComponent) \
	PCG_API virtual ~UPCGComponent();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_149_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_154_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_154_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGComponent;

// ********** End Class UPCGComponent **************************************************************

// ********** Begin ScriptStruct FDynamicTrackedKeyInstanceData ************************************
struct Z_Construct_UScriptStruct_FDynamicTrackedKeyInstanceData_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_866_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDynamicTrackedKeyInstanceData_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FDynamicTrackedKeyInstanceData;
// ********** End ScriptStruct FDynamicTrackedKeyInstanceData **************************************

// ********** Begin ScriptStruct FPCGComponentInstanceData *****************************************
struct Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h_882_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FActorComponentInstanceData Super;


struct FPCGComponentInstanceData;
// ********** End ScriptStruct FPCGComponentInstanceData *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGComponent_h

// ********** Begin Enum EPCGComponentInput ********************************************************
#define FOREACH_ENUM_EPCGCOMPONENTINPUT(op) \
	op(EPCGComponentInput::Actor) \
	op(EPCGComponentInput::Landscape) \
	op(EPCGComponentInput::Other) 

enum class EPCGComponentInput : uint8;
template<> struct TIsUEnumClass<EPCGComponentInput> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGComponentInput>();
// ********** End Enum EPCGComponentInput **********************************************************

// ********** Begin Enum EPCGComponentGenerationTrigger ********************************************
#define FOREACH_ENUM_EPCGCOMPONENTGENERATIONTRIGGER(op) \
	op(EPCGComponentGenerationTrigger::GenerateOnLoad) \
	op(EPCGComponentGenerationTrigger::GenerateOnDemand) \
	op(EPCGComponentGenerationTrigger::GenerateAtRuntime) 

enum class EPCGComponentGenerationTrigger : uint8;
template<> struct TIsUEnumClass<EPCGComponentGenerationTrigger> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGComponentGenerationTrigger>();
// ********** End Enum EPCGComponentGenerationTrigger **********************************************

// ********** Begin Enum EPCGComponentDirtyFlag ****************************************************
#define FOREACH_ENUM_EPCGCOMPONENTDIRTYFLAG(op) \
	op(EPCGComponentDirtyFlag::None) \
	op(EPCGComponentDirtyFlag::Actor) \
	op(EPCGComponentDirtyFlag::Landscape) \
	op(EPCGComponentDirtyFlag::Input) \
	op(EPCGComponentDirtyFlag::Data) \
	op(EPCGComponentDirtyFlag::All) 

enum class EPCGComponentDirtyFlag : uint8;
template<> struct TIsUEnumClass<EPCGComponentDirtyFlag> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGComponentDirtyFlag>();
// ********** End Enum EPCGComponentDirtyFlag ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
