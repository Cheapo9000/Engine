// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComputeFramework/ComputeDataInterface.h"

#ifdef COMPUTEFRAMEWORK_ComputeDataInterface_generated_h
#error "ComputeDataInterface.generated.h already included, missing '#pragma once' in ComputeDataInterface.h"
#endif
#define COMPUTEFRAMEWORK_ComputeDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComputeDataInterface ****************************************************
struct Z_Construct_UClass_UComputeDataInterface_Statics;
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataInterface_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComputeDataInterface(); \
	friend struct ::Z_Construct_UClass_UComputeDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPUTEFRAMEWORK_API UClass* ::Z_Construct_UClass_UComputeDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UComputeDataInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ComputeFramework"), Z_Construct_UClass_UComputeDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UComputeDataInterface)


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataInterface_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPUTEFRAMEWORK_API UComputeDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComputeDataInterface(UComputeDataInterface&&) = delete; \
	UComputeDataInterface(const UComputeDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPUTEFRAMEWORK_API, UComputeDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComputeDataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComputeDataInterface) \
	COMPUTEFRAMEWORK_API virtual ~UComputeDataInterface();


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataInterface_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataInterface_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataInterface_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComputeDataInterface;

// ********** End Class UComputeDataInterface ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
