// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/DMXEditorFactoryNew.h"

#ifdef DMXEDITOR_DMXEditorFactoryNew_generated_h
#error "DMXEditorFactoryNew.generated.h already included, missing '#pragma once' in DMXEditorFactoryNew.h"
#endif
#define DMXEDITOR_DMXEditorFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMXEditorFactoryNew *****************************************************
struct Z_Construct_UClass_UDMXEditorFactoryNew_Statics;
DMXEDITOR_API UClass* Z_Construct_UClass_UDMXEditorFactoryNew_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXEditorFactoryNew_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXEditorFactoryNew(); \
	friend struct ::Z_Construct_UClass_UDMXEditorFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXEDITOR_API UClass* ::Z_Construct_UClass_UDMXEditorFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXEditorFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXEditor"), Z_Construct_UClass_UDMXEditorFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UDMXEditorFactoryNew)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXEditorFactoryNew_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXEditorFactoryNew(UDMXEditorFactoryNew&&) = delete; \
	UDMXEditorFactoryNew(const UDMXEditorFactoryNew&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXEditorFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXEditorFactoryNew); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXEditorFactoryNew) \
	NO_API virtual ~UDMXEditorFactoryNew();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXEditorFactoryNew_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXEditorFactoryNew_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXEditorFactoryNew_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXEditorFactoryNew_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXEditorFactoryNew;

// ********** End Class UDMXEditorFactoryNew *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXEditorFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
