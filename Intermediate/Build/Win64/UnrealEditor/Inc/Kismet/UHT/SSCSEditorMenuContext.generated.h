// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SSCSEditorMenuContext.h"

#ifdef KISMET_SSCSEditorMenuContext_generated_h
#error "SSCSEditorMenuContext.generated.h already included, missing '#pragma once' in SSCSEditorMenuContext.h"
#endif
#define KISMET_SSCSEditorMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USSCSEditorMenuContext ***************************************************
struct Z_Construct_UClass_USSCSEditorMenuContext_Statics;
KISMET_API UClass* Z_Construct_UClass_USSCSEditorMenuContext_NoRegister();

#define FID_Engine_Source_Editor_Kismet_Public_SSCSEditorMenuContext_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSSCSEditorMenuContext(); \
	friend struct ::Z_Construct_UClass_USSCSEditorMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KISMET_API UClass* ::Z_Construct_UClass_USSCSEditorMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(USSCSEditorMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kismet"), Z_Construct_UClass_USSCSEditorMenuContext_NoRegister) \
	DECLARE_SERIALIZER(USSCSEditorMenuContext)


#define FID_Engine_Source_Editor_Kismet_Public_SSCSEditorMenuContext_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KISMET_API USSCSEditorMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USSCSEditorMenuContext(USSCSEditorMenuContext&&) = delete; \
	USSCSEditorMenuContext(const USSCSEditorMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KISMET_API, USSCSEditorMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USSCSEditorMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USSCSEditorMenuContext) \
	KISMET_API virtual ~USSCSEditorMenuContext();


#define FID_Engine_Source_Editor_Kismet_Public_SSCSEditorMenuContext_h_13_PROLOG
#define FID_Engine_Source_Editor_Kismet_Public_SSCSEditorMenuContext_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Kismet_Public_SSCSEditorMenuContext_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Kismet_Public_SSCSEditorMenuContext_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USSCSEditorMenuContext;

// ********** End Class USSCSEditorMenuContext *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Kismet_Public_SSCSEditorMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
