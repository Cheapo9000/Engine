// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorMode/Tools/Paint/PCGEdModeBrushBase.h"

#ifdef PCGEDITOR_PCGEdModeBrushBase_generated_h
#error "PCGEdModeBrushBase.generated.h already included, missing '#pragma once' in PCGEdModeBrushBase.h"
#endif
#define PCGEDITOR_PCGEdModeBrushBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGEdModeBrushBase ******************************************************
struct Z_Construct_UClass_UPCGEdModeBrushBase_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEdModeBrushBase_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_Paint_PCGEdModeBrushBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGEdModeBrushBase(); \
	friend struct ::Z_Construct_UClass_UPCGEdModeBrushBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGEdModeBrushBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGEdModeBrushBase, UBrushBaseProperties, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGEdModeBrushBase_NoRegister) \
	DECLARE_SERIALIZER(UPCGEdModeBrushBase)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_Paint_PCGEdModeBrushBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGEdModeBrushBase(UPCGEdModeBrushBase&&) = delete; \
	UPCGEdModeBrushBase(const UPCGEdModeBrushBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGEdModeBrushBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGEdModeBrushBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGEdModeBrushBase) \
	NO_API virtual ~UPCGEdModeBrushBase();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_Paint_PCGEdModeBrushBase_h_9_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_Paint_PCGEdModeBrushBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_Paint_PCGEdModeBrushBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_Paint_PCGEdModeBrushBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGEdModeBrushBase;

// ********** End Class UPCGEdModeBrushBase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_Paint_PCGEdModeBrushBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
