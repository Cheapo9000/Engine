// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComputeFramework/ComputeGraphFromText.h"

#ifdef COMPUTEFRAMEWORK_ComputeGraphFromText_generated_h
#error "ComputeGraphFromText.generated.h already included, missing '#pragma once' in ComputeGraphFromText.h"
#endif
#define COMPUTEFRAMEWORK_ComputeGraphFromText_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComputeGraphFromText ****************************************************
struct Z_Construct_UClass_UComputeGraphFromText_Statics;
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeGraphFromText_NoRegister();

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphFromText_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComputeGraphFromText(); \
	friend struct ::Z_Construct_UClass_UComputeGraphFromText_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPUTEFRAMEWORK_API UClass* ::Z_Construct_UClass_UComputeGraphFromText_NoRegister(); \
public: \
	DECLARE_CLASS2(UComputeGraphFromText, UComputeGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ComputeFramework"), Z_Construct_UClass_UComputeGraphFromText_NoRegister) \
	DECLARE_SERIALIZER(UComputeGraphFromText)


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphFromText_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPUTEFRAMEWORK_API UComputeGraphFromText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComputeGraphFromText(UComputeGraphFromText&&) = delete; \
	UComputeGraphFromText(const UComputeGraphFromText&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPUTEFRAMEWORK_API, UComputeGraphFromText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComputeGraphFromText); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComputeGraphFromText) \
	COMPUTEFRAMEWORK_API virtual ~UComputeGraphFromText();


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphFromText_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphFromText_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphFromText_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphFromText_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComputeGraphFromText;

// ********** End Class UComputeGraphFromText ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphFromText_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
