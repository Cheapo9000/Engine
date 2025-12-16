// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXPixelMappingActor.h"

#ifdef DMXPIXELMAPPINGRUNTIME_DMXPixelMappingActor_generated_h
#error "DMXPixelMappingActor.generated.h already included, missing '#pragma once' in DMXPixelMappingActor.h"
#endif
#define DMXPIXELMAPPINGRUNTIME_DMXPixelMappingActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDMXPixelMappingResetDMXMode : uint8;

// ********** Begin Class ADMXPixelMappingActor ****************************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_DMXPixelMappingActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetStopMode); \
	DECLARE_FUNCTION(execIsSendingDMX); \
	DECLARE_FUNCTION(execPauseSendingDMX); \
	DECLARE_FUNCTION(execStopSendingDMX); \
	DECLARE_FUNCTION(execStartSendingDMX);


struct Z_Construct_UClass_ADMXPixelMappingActor_Statics;
DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_ADMXPixelMappingActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_DMXPixelMappingActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADMXPixelMappingActor(); \
	friend struct ::Z_Construct_UClass_ADMXPixelMappingActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXPIXELMAPPINGRUNTIME_API UClass* ::Z_Construct_UClass_ADMXPixelMappingActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADMXPixelMappingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXPixelMappingRuntime"), Z_Construct_UClass_ADMXPixelMappingActor_NoRegister) \
	DECLARE_SERIALIZER(ADMXPixelMappingActor)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_DMXPixelMappingActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADMXPixelMappingActor(ADMXPixelMappingActor&&) = delete; \
	ADMXPixelMappingActor(const ADMXPixelMappingActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADMXPixelMappingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADMXPixelMappingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADMXPixelMappingActor) \
	NO_API virtual ~ADMXPixelMappingActor();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_DMXPixelMappingActor_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_DMXPixelMappingActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_DMXPixelMappingActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_DMXPixelMappingActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_DMXPixelMappingActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADMXPixelMappingActor;

// ********** End Class ADMXPixelMappingActor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_DMXPixelMappingActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
