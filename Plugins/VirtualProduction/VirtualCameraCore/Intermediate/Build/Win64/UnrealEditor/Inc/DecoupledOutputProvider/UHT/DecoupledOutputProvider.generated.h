// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DecoupledOutputProvider.h"

#ifdef DECOUPLEDOUTPUTPROVIDER_DecoupledOutputProvider_generated_h
#error "DecoupledOutputProvider.generated.h already included, missing '#pragma once' in DecoupledOutputProvider.h"
#endif
#define DECOUPLEDOUTPUTPROVIDER_DecoupledOutputProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDecoupledOutputProvider *************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_DecoupledOutputProvider_Public_DecoupledOutputProvider_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDecoupledOutputProvider, NO_API)


struct Z_Construct_UClass_UDecoupledOutputProvider_Statics;
DECOUPLEDOUTPUTPROVIDER_API UClass* Z_Construct_UClass_UDecoupledOutputProvider_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_DecoupledOutputProvider_Public_DecoupledOutputProvider_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDecoupledOutputProvider(); \
	friend struct ::Z_Construct_UClass_UDecoupledOutputProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DECOUPLEDOUTPUTPROVIDER_API UClass* ::Z_Construct_UClass_UDecoupledOutputProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UDecoupledOutputProvider, UVCamOutputProviderBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DecoupledOutputProvider"), Z_Construct_UClass_UDecoupledOutputProvider_NoRegister) \
	DECLARE_SERIALIZER(UDecoupledOutputProvider) \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_DecoupledOutputProvider_Public_DecoupledOutputProvider_h_23_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_DecoupledOutputProvider_Public_DecoupledOutputProvider_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDecoupledOutputProvider(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDecoupledOutputProvider(UDecoupledOutputProvider&&) = delete; \
	UDecoupledOutputProvider(const UDecoupledOutputProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDecoupledOutputProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDecoupledOutputProvider); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDecoupledOutputProvider) \
	NO_API virtual ~UDecoupledOutputProvider();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_DecoupledOutputProvider_Public_DecoupledOutputProvider_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_DecoupledOutputProvider_Public_DecoupledOutputProvider_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_DecoupledOutputProvider_Public_DecoupledOutputProvider_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_DecoupledOutputProvider_Public_DecoupledOutputProvider_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDecoupledOutputProvider;

// ********** End Class UDecoupledOutputProvider ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_DecoupledOutputProvider_Public_DecoupledOutputProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
