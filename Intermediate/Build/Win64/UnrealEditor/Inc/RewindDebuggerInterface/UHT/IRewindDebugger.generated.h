// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IRewindDebugger.h"

#ifdef REWINDDEBUGGERINTERFACE_IRewindDebugger_generated_h
#error "IRewindDebugger.generated.h already included, missing '#pragma once' in IRewindDebugger.h"
#endif
#define REWINDDEBUGGERINTERFACE_IRewindDebugger_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URewindDebuggerTrackContextMenuContext ***********************************
struct Z_Construct_UClass_URewindDebuggerTrackContextMenuContext_Statics;
REWINDDEBUGGERINTERFACE_API UClass* Z_Construct_UClass_URewindDebuggerTrackContextMenuContext_NoRegister();

#define FID_Engine_Source_Editor_RewindDebuggerInterface_Public_IRewindDebugger_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURewindDebuggerTrackContextMenuContext(); \
	friend struct ::Z_Construct_UClass_URewindDebuggerTrackContextMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REWINDDEBUGGERINTERFACE_API UClass* ::Z_Construct_UClass_URewindDebuggerTrackContextMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(URewindDebuggerTrackContextMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RewindDebuggerInterface"), Z_Construct_UClass_URewindDebuggerTrackContextMenuContext_NoRegister) \
	DECLARE_SERIALIZER(URewindDebuggerTrackContextMenuContext)


#define FID_Engine_Source_Editor_RewindDebuggerInterface_Public_IRewindDebugger_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REWINDDEBUGGERINTERFACE_API URewindDebuggerTrackContextMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URewindDebuggerTrackContextMenuContext(URewindDebuggerTrackContextMenuContext&&) = delete; \
	URewindDebuggerTrackContextMenuContext(const URewindDebuggerTrackContextMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REWINDDEBUGGERINTERFACE_API, URewindDebuggerTrackContextMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URewindDebuggerTrackContextMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URewindDebuggerTrackContextMenuContext) \
	REWINDDEBUGGERINTERFACE_API virtual ~URewindDebuggerTrackContextMenuContext();


#define FID_Engine_Source_Editor_RewindDebuggerInterface_Public_IRewindDebugger_h_50_PROLOG
#define FID_Engine_Source_Editor_RewindDebuggerInterface_Public_IRewindDebugger_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_RewindDebuggerInterface_Public_IRewindDebugger_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_RewindDebuggerInterface_Public_IRewindDebugger_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URewindDebuggerTrackContextMenuContext;

// ********** End Class URewindDebuggerTrackContextMenuContext *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_RewindDebuggerInterface_Public_IRewindDebugger_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
