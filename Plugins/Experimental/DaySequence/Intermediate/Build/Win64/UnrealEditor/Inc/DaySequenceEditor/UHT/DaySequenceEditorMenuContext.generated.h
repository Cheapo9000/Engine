// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceEditorMenuContext.h"

#ifdef DAYSEQUENCEEDITOR_DaySequenceEditorMenuContext_generated_h
#error "DaySequenceEditorMenuContext.generated.h already included, missing '#pragma once' in DaySequenceEditorMenuContext.h"
#endif
#define DAYSEQUENCEEDITOR_DaySequenceEditorMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDaySequenceEditorMenuContext ********************************************
struct Z_Construct_UClass_UDaySequenceEditorMenuContext_Statics;
DAYSEQUENCEEDITOR_API UClass* Z_Construct_UClass_UDaySequenceEditorMenuContext_NoRegister();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorMenuContext_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceEditorMenuContext(); \
	friend struct ::Z_Construct_UClass_UDaySequenceEditorMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DAYSEQUENCEEDITOR_API UClass* ::Z_Construct_UClass_UDaySequenceEditorMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UDaySequenceEditorMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DaySequenceEditor"), Z_Construct_UClass_UDaySequenceEditorMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UDaySequenceEditorMenuContext)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorMenuContext_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDaySequenceEditorMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDaySequenceEditorMenuContext(UDaySequenceEditorMenuContext&&) = delete; \
	UDaySequenceEditorMenuContext(const UDaySequenceEditorMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDaySequenceEditorMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceEditorMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDaySequenceEditorMenuContext) \
	NO_API virtual ~UDaySequenceEditorMenuContext();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorMenuContext_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorMenuContext_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorMenuContext_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorMenuContext_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDaySequenceEditorMenuContext;

// ********** End Class UDaySequenceEditorMenuContext **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequenceEditor_Private_DaySequenceEditorMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
