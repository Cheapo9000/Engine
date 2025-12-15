// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MouseCursorInteractor.h"

#ifdef VIEWPORTINTERACTION_MouseCursorInteractor_generated_h
#error "MouseCursorInteractor.generated.h already included, missing '#pragma once' in MouseCursorInteractor.h"
#endif
#define VIEWPORTINTERACTION_MouseCursorInteractor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMouseCursorInteractor ***************************************************
struct Z_Construct_UClass_UMouseCursorInteractor_Statics;
VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UMouseCursorInteractor_NoRegister();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_MouseCursorInteractor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMouseCursorInteractor(); \
	friend struct ::Z_Construct_UClass_UMouseCursorInteractor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIEWPORTINTERACTION_API UClass* ::Z_Construct_UClass_UMouseCursorInteractor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMouseCursorInteractor, UViewportInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), Z_Construct_UClass_UMouseCursorInteractor_NoRegister) \
	DECLARE_SERIALIZER(UMouseCursorInteractor)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_MouseCursorInteractor_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMouseCursorInteractor(UMouseCursorInteractor&&) = delete; \
	UMouseCursorInteractor(const UMouseCursorInteractor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIEWPORTINTERACTION_API, UMouseCursorInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMouseCursorInteractor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMouseCursorInteractor) \
	VIEWPORTINTERACTION_API virtual ~UMouseCursorInteractor();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_MouseCursorInteractor_h_16_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_MouseCursorInteractor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_MouseCursorInteractor_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_MouseCursorInteractor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMouseCursorInteractor;

// ********** End Class UMouseCursorInteractor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_MouseCursorInteractor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
