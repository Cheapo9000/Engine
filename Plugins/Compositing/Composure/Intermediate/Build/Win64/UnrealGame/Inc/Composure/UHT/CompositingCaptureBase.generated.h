// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositingCaptureBase.h"

#ifdef COMPOSURE_CompositingCaptureBase_generated_h
#error "CompositingCaptureBase.generated.h already included, missing '#pragma once' in CompositingCaptureBase.h"
#endif
#define COMPOSURE_CompositingCaptureBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACompositingCaptureBase **************************************************
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingCaptureBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateDistortion);


struct Z_Construct_UClass_ACompositingCaptureBase_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_ACompositingCaptureBase_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingCaptureBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACompositingCaptureBase(); \
	friend struct ::Z_Construct_UClass_ACompositingCaptureBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_ACompositingCaptureBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ACompositingCaptureBase, ACompositingElement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_ACompositingCaptureBase_NoRegister) \
	DECLARE_SERIALIZER(ACompositingCaptureBase)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingCaptureBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACompositingCaptureBase(ACompositingCaptureBase&&) = delete; \
	ACompositingCaptureBase(const ACompositingCaptureBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompositingCaptureBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompositingCaptureBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACompositingCaptureBase) \
	NO_API virtual ~ACompositingCaptureBase();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingCaptureBase_h_19_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingCaptureBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingCaptureBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingCaptureBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingCaptureBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACompositingCaptureBase;

// ********** End Class ACompositingCaptureBase ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingCaptureBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
