// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGGetPropertyFromObjectPath.h"

#ifdef PCG_PCGGetPropertyFromObjectPath_generated_h
#error "PCGGetPropertyFromObjectPath.generated.h already included, missing '#pragma once' in PCGGetPropertyFromObjectPath.h"
#endif
#define PCG_PCGGetPropertyFromObjectPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGetPropertyFromObjectPathSettings ************************************
struct Z_Construct_UClass_UPCGGetPropertyFromObjectPathSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGetPropertyFromObjectPathSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetPropertyFromObjectPath_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGetPropertyFromObjectPathSettings(); \
	friend struct ::Z_Construct_UClass_UPCGGetPropertyFromObjectPathSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGetPropertyFromObjectPathSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGetPropertyFromObjectPathSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGetPropertyFromObjectPathSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGGetPropertyFromObjectPathSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetPropertyFromObjectPath_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGetPropertyFromObjectPathSettings(UPCGGetPropertyFromObjectPathSettings&&) = delete; \
	UPCGGetPropertyFromObjectPathSettings(const UPCGGetPropertyFromObjectPathSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGetPropertyFromObjectPathSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGetPropertyFromObjectPathSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGGetPropertyFromObjectPathSettings) \
	PCG_API virtual ~UPCGGetPropertyFromObjectPathSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetPropertyFromObjectPath_h_13_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetPropertyFromObjectPath_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetPropertyFromObjectPath_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetPropertyFromObjectPath_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGetPropertyFromObjectPathSettings;

// ********** End Class UPCGGetPropertyFromObjectPathSettings **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetPropertyFromObjectPath_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
