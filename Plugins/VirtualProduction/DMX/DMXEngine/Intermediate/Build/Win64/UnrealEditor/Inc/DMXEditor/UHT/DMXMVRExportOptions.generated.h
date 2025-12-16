// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/DMXMVRExportOptions.h"

#ifdef DMXEDITOR_DMXMVRExportOptions_generated_h
#error "DMXMVRExportOptions.generated.h already included, missing '#pragma once' in DMXMVRExportOptions.h"
#endif
#define DMXEDITOR_DMXMVRExportOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMXMVRExportOptions *****************************************************
struct Z_Construct_UClass_UDMXMVRExportOptions_Statics;
DMXEDITOR_API UClass* Z_Construct_UClass_UDMXMVRExportOptions_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Exporters_DMXMVRExportOptions_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXMVRExportOptions(); \
	friend struct ::Z_Construct_UClass_UDMXMVRExportOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXEDITOR_API UClass* ::Z_Construct_UClass_UDMXMVRExportOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXMVRExportOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXEditor"), Z_Construct_UClass_UDMXMVRExportOptions_NoRegister) \
	DECLARE_SERIALIZER(UDMXMVRExportOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("DMXEditor");} \



#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Exporters_DMXMVRExportOptions_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXMVRExportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXMVRExportOptions(UDMXMVRExportOptions&&) = delete; \
	UDMXMVRExportOptions(const UDMXMVRExportOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXMVRExportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXMVRExportOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXMVRExportOptions) \
	NO_API virtual ~UDMXMVRExportOptions();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Exporters_DMXMVRExportOptions_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Exporters_DMXMVRExportOptions_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Exporters_DMXMVRExportOptions_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Exporters_DMXMVRExportOptions_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXMVRExportOptions;

// ********** End Class UDMXMVRExportOptions *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Exporters_DMXMVRExportOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
