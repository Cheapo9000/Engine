// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Output/VCamOutputRemoteSession.h"

#ifdef VCAMCORE_VCamOutputRemoteSession_generated_h
#error "VCamOutputRemoteSession.generated.h already included, missing '#pragma once' in VCamOutputRemoteSession.h"
#endif
#define VCAMCORE_VCamOutputRemoteSession_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVCamOutputRemoteSession *************************************************
struct Z_Construct_UClass_UVCamOutputRemoteSession_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputRemoteSession_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputRemoteSession_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamOutputRemoteSession(); \
	friend struct ::Z_Construct_UClass_UVCamOutputRemoteSession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamOutputRemoteSession_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamOutputRemoteSession, UVCamOutputProviderBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamOutputRemoteSession_NoRegister) \
	DECLARE_SERIALIZER(UVCamOutputRemoteSession)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputRemoteSession_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamOutputRemoteSession(UVCamOutputRemoteSession&&) = delete; \
	UVCamOutputRemoteSession(const UVCamOutputRemoteSession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamOutputRemoteSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamOutputRemoteSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVCamOutputRemoteSession) \
	NO_API virtual ~UVCamOutputRemoteSession();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputRemoteSession_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputRemoteSession_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputRemoteSession_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputRemoteSession_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamOutputRemoteSession;

// ********** End Class UVCamOutputRemoteSession ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputRemoteSession_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
