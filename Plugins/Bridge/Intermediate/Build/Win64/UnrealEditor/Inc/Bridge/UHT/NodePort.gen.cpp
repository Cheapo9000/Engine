// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NodePort.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNodePort() {}

// ********** Begin Cross Module References ********************************************************
BRIDGE_API UClass* Z_Construct_UClass_UNodePort();
BRIDGE_API UClass* Z_Construct_UClass_UNodePort_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_Bridge();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNodePort Function GetNodePort *******************************************
struct Z_Construct_UFunction_UNodePort_GetNodePort_Statics
{
	struct NodePort_eventGetNodePort_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NodePort.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodePort constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodePort constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodePort Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNodePort_GetNodePort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NodePort_eventGetNodePort_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNodePort_GetNodePort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNodePort_GetNodePort_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNodePort_GetNodePort_Statics::PropPointers) < 2048);
// ********** End Function GetNodePort Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNodePort_GetNodePort_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNodePort, nullptr, "GetNodePort", 	Z_Construct_UFunction_UNodePort_GetNodePort_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNodePort_GetNodePort_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNodePort_GetNodePort_Statics::NodePort_eventGetNodePort_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNodePort_GetNodePort_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNodePort_GetNodePort_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNodePort_GetNodePort_Statics::NodePort_eventGetNodePort_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNodePort_GetNodePort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNodePort_GetNodePort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNodePort::execGetNodePort)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetNodePort();
	P_NATIVE_END;
}
// ********** End Class UNodePort Function GetNodePort *********************************************

// ********** Begin Class UNodePort Function IsNodeRunning *****************************************
struct Z_Construct_UFunction_UNodePort_IsNodeRunning_Statics
{
	struct NodePort_eventIsNodeRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NodePort.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsNodeRunning constinit property declarations *************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsNodeRunning constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsNodeRunning Property Definitions ************************************
void Z_Construct_UFunction_UNodePort_IsNodeRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NodePort_eventIsNodeRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNodePort_IsNodeRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NodePort_eventIsNodeRunning_Parms), &Z_Construct_UFunction_UNodePort_IsNodeRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNodePort_IsNodeRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNodePort_IsNodeRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNodePort_IsNodeRunning_Statics::PropPointers) < 2048);
// ********** End Function IsNodeRunning Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNodePort_IsNodeRunning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNodePort, nullptr, "IsNodeRunning", 	Z_Construct_UFunction_UNodePort_IsNodeRunning_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNodePort_IsNodeRunning_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNodePort_IsNodeRunning_Statics::NodePort_eventIsNodeRunning_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNodePort_IsNodeRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNodePort_IsNodeRunning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNodePort_IsNodeRunning_Statics::NodePort_eventIsNodeRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNodePort_IsNodeRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNodePort_IsNodeRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNodePort::execIsNodeRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsNodeRunning();
	P_NATIVE_END;
}
// ********** End Class UNodePort Function IsNodeRunning *******************************************

// ********** Begin Class UNodePort ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UNodePort;
UClass* UNodePort::GetPrivateStaticClass()
{
	using TClass = UNodePort;
	if (!Z_Registration_Info_UClass_UNodePort.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NodePort"),
			Z_Registration_Info_UClass_UNodePort.InnerSingleton,
			StaticRegisterNativesUNodePort,
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
	return Z_Registration_Info_UClass_UNodePort.InnerSingleton;
}
UClass* Z_Construct_UClass_UNodePort_NoRegister()
{
	return UNodePort::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNodePort_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NodePort.h" },
		{ "ModuleRelativePath", "Private/NodePort.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UNodePort constinit property declarations ********************************
// ********** End Class UNodePort constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNodePort"), .Pointer = &UNodePort::execGetNodePort },
		{ .NameUTF8 = UTF8TEXT("IsNodeRunning"), .Pointer = &UNodePort::execIsNodeRunning },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNodePort_GetNodePort, "GetNodePort" }, // 2558828927
		{ &Z_Construct_UFunction_UNodePort_IsNodeRunning, "IsNodeRunning" }, // 3142797104
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNodePort>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UNodePort_Statics
UObject* (*const Z_Construct_UClass_UNodePort_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Bridge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNodePort_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNodePort_Statics::ClassParams = {
	&UNodePort::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNodePort_Statics::Class_MetaDataParams), Z_Construct_UClass_UNodePort_Statics::Class_MetaDataParams)
};
void UNodePort::StaticRegisterNativesUNodePort()
{
	UClass* Class = UNodePort::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UNodePort_Statics::Funcs));
}
UClass* Z_Construct_UClass_UNodePort()
{
	if (!Z_Registration_Info_UClass_UNodePort.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNodePort.OuterSingleton, Z_Construct_UClass_UNodePort_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNodePort.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNodePort);
UNodePort::~UNodePort() {}
// ********** End Class UNodePort ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_Bridge_Private_NodePort_h__Script_Bridge_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNodePort, UNodePort::StaticClass, TEXT("UNodePort"), &Z_Registration_Info_UClass_UNodePort, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNodePort), 1670259286U) },
	};
}; // Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_Bridge_Private_NodePort_h__Script_Bridge_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_Bridge_Private_NodePort_h__Script_Bridge_2693050457{
	TEXT("/Script/Bridge"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_Bridge_Private_NodePort_h__Script_Bridge_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_1_HostProject_Plugins_Bridge_Source_Bridge_Private_NodePort_h__Script_Bridge_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
