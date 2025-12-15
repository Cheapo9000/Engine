// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DrawPrimitiveDebuggerConfig.h"

#ifdef DRAWPRIMITIVEDEBUGGER_DrawPrimitiveDebuggerConfig_generated_h
#error "DrawPrimitiveDebuggerConfig.generated.h already included, missing '#pragma once' in DrawPrimitiveDebuggerConfig.h"
#endif
#define DRAWPRIMITIVEDEBUGGER_DrawPrimitiveDebuggerConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDrawPrimitiveDebuggerUserSettings ***************************************
struct Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics;
DRAWPRIMITIVEDEBUGGER_API UClass* Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_NoRegister();

#define FID_Engine_Source_Developer_DrawPrimitiveDebugger_Public_DrawPrimitiveDebuggerConfig_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDrawPrimitiveDebuggerUserSettings(); \
	friend struct ::Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DRAWPRIMITIVEDEBUGGER_API UClass* ::Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDrawPrimitiveDebuggerUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DrawPrimitiveDebugger"), Z_Construct_UClass_UDrawPrimitiveDebuggerUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UDrawPrimitiveDebuggerUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Developer_DrawPrimitiveDebugger_Public_DrawPrimitiveDebuggerConfig_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DRAWPRIMITIVEDEBUGGER_API UDrawPrimitiveDebuggerUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDrawPrimitiveDebuggerUserSettings(UDrawPrimitiveDebuggerUserSettings&&) = delete; \
	UDrawPrimitiveDebuggerUserSettings(const UDrawPrimitiveDebuggerUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DRAWPRIMITIVEDEBUGGER_API, UDrawPrimitiveDebuggerUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDrawPrimitiveDebuggerUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDrawPrimitiveDebuggerUserSettings) \
	DRAWPRIMITIVEDEBUGGER_API virtual ~UDrawPrimitiveDebuggerUserSettings();


#define FID_Engine_Source_Developer_DrawPrimitiveDebugger_Public_DrawPrimitiveDebuggerConfig_h_11_PROLOG
#define FID_Engine_Source_Developer_DrawPrimitiveDebugger_Public_DrawPrimitiveDebuggerConfig_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_DrawPrimitiveDebugger_Public_DrawPrimitiveDebuggerConfig_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_DrawPrimitiveDebugger_Public_DrawPrimitiveDebuggerConfig_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDrawPrimitiveDebuggerUserSettings;

// ********** End Class UDrawPrimitiveDebuggerUserSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_DrawPrimitiveDebugger_Public_DrawPrimitiveDebuggerConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
