// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/IO/PCGLoadAssetElement.h"

#ifdef PCG_PCGLoadAssetElement_generated_h
#error "PCGLoadAssetElement.generated.h already included, missing '#pragma once' in PCGLoadAssetElement.h"
#endif
#define PCG_PCGLoadAssetElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGLoadDataAssetSettings ************************************************
struct Z_Construct_UClass_UPCGLoadDataAssetSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGLoadDataAssetSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGLoadAssetElement_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGLoadDataAssetSettings(); \
	friend struct ::Z_Construct_UClass_UPCGLoadDataAssetSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGLoadDataAssetSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGLoadDataAssetSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGLoadDataAssetSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGLoadDataAssetSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGLoadAssetElement_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGLoadDataAssetSettings(UPCGLoadDataAssetSettings&&) = delete; \
	UPCGLoadDataAssetSettings(const UPCGLoadDataAssetSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGLoadDataAssetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGLoadDataAssetSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGLoadDataAssetSettings) \
	PCG_API virtual ~UPCGLoadDataAssetSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGLoadAssetElement_h_18_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGLoadAssetElement_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGLoadAssetElement_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGLoadAssetElement_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGLoadDataAssetSettings;

// ********** End Class UPCGLoadDataAssetSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_IO_PCGLoadAssetElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
