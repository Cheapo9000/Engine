// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamBaseActor.h"

#ifdef VCAMCORE_VCamBaseActor_generated_h
#error "VCamBaseActor.generated.h already included, missing '#pragma once' in VCamBaseActor.h"
#endif
#define VCAMCORE_VCamBaseActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVCamComponent;

// ********** Begin Class AVCamBaseActor ***********************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVCamComponent);


struct Z_Construct_UClass_AVCamBaseActor_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_AVCamBaseActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVCamBaseActor(); \
	friend struct ::Z_Construct_UClass_AVCamBaseActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_AVCamBaseActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AVCamBaseActor, ACineCameraActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_AVCamBaseActor_NoRegister) \
	DECLARE_SERIALIZER(AVCamBaseActor)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVCamBaseActor(AVCamBaseActor&&) = delete; \
	AVCamBaseActor(const AVCamBaseActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVCamBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVCamBaseActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVCamBaseActor) \
	NO_API virtual ~AVCamBaseActor();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVCamBaseActor;

// ********** End Class AVCamBaseActor *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
