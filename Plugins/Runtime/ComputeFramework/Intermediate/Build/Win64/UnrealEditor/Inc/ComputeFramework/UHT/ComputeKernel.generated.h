// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComputeFramework/ComputeKernel.h"

#ifdef COMPUTEFRAMEWORK_ComputeKernel_generated_h
#error "ComputeKernel.generated.h already included, missing '#pragma once' in ComputeKernel.h"
#endif
#define COMPUTEFRAMEWORK_ComputeKernel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComputeKernel ***********************************************************
struct Z_Construct_UClass_UComputeKernel_Statics;
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernel_NoRegister();

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComputeKernel(); \
	friend struct ::Z_Construct_UClass_UComputeKernel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPUTEFRAMEWORK_API UClass* ::Z_Construct_UClass_UComputeKernel_NoRegister(); \
public: \
	DECLARE_CLASS2(UComputeKernel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ComputeFramework"), Z_Construct_UClass_UComputeKernel_NoRegister) \
	DECLARE_SERIALIZER(UComputeKernel)


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPUTEFRAMEWORK_API UComputeKernel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComputeKernel(UComputeKernel&&) = delete; \
	UComputeKernel(const UComputeKernel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPUTEFRAMEWORK_API, UComputeKernel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComputeKernel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComputeKernel) \
	COMPUTEFRAMEWORK_API virtual ~UComputeKernel();


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h_38_PROLOG
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComputeKernel;

// ********** End Class UComputeKernel *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernel_h

// ********** Begin Enum EComputeKernelFlags *******************************************************
#define FOREACH_ENUM_ECOMPUTEKERNELFLAGS(op) \
	op(EComputeKernelFlags::IsDefaultKernel) \
	op(EComputeKernelFlags::IsolatedMemoryWrites) \
	op(EComputeKernelFlags::TriggerRenderCapture) 

enum class EComputeKernelFlags : uint32;
template<> struct TIsUEnumClass<EComputeKernelFlags> { enum { Value = true }; };
template<> COMPUTEFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EComputeKernelFlags>();
// ********** End Enum EComputeKernelFlags *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
