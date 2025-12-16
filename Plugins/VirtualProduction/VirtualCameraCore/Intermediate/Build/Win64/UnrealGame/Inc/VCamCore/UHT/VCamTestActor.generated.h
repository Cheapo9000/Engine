// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/VCamTestActor.h"

#ifdef VCAMCORE_VCamTestActor_generated_h
#error "VCamTestActor.generated.h already included, missing '#pragma once' in VCamTestActor.h"
#endif
#define VCAMCORE_VCamTestActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVCamTestActor ***********************************************************
struct Z_Construct_UClass_AVCamTestActor_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_AVCamTestActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Private_Tests_VCamTestActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVCamTestActor(); \
	friend struct ::Z_Construct_UClass_AVCamTestActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_AVCamTestActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AVCamTestActor, AVCamBaseActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_AVCamTestActor_NoRegister) \
	DECLARE_SERIALIZER(AVCamTestActor)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Private_Tests_VCamTestActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVCamTestActor(AVCamTestActor&&) = delete; \
	AVCamTestActor(const AVCamTestActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVCamTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVCamTestActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVCamTestActor) \
	NO_API virtual ~AVCamTestActor();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Private_Tests_VCamTestActor_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Private_Tests_VCamTestActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Private_Tests_VCamTestActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Private_Tests_VCamTestActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVCamTestActor;

// ********** End Class AVCamTestActor *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Private_Tests_VCamTestActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
