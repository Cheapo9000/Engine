// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveToolBuilder.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveToolBuilder_generated_h
#error "InteractiveToolBuilder.generated.h already included, missing '#pragma once' in InteractiveToolBuilder.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveToolBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInteractiveToolBuilder **************************************************
struct Z_Construct_UClass_UInteractiveToolBuilder_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveToolBuilder(); \
	friend struct ::Z_Construct_UClass_UInteractiveToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UInteractiveToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractiveToolBuilder, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UInteractiveToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UInteractiveToolBuilder)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractiveToolBuilder(UInteractiveToolBuilder&&) = delete; \
	UInteractiveToolBuilder(const UInteractiveToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInteractiveToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveToolBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveToolBuilder) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInteractiveToolBuilder();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_26_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractiveToolBuilder;

// ********** End Class UInteractiveToolBuilder ****************************************************

// ********** Begin Class UInteractiveToolWithToolTargetsBuilder ***********************************
struct Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveToolWithToolTargetsBuilder(); \
	friend struct ::Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractiveToolWithToolTargetsBuilder, UInteractiveToolBuilder, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder_NoRegister) \
	DECLARE_SERIALIZER(UInteractiveToolWithToolTargetsBuilder)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolWithToolTargetsBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractiveToolWithToolTargetsBuilder(UInteractiveToolWithToolTargetsBuilder&&) = delete; \
	UInteractiveToolWithToolTargetsBuilder(const UInteractiveToolWithToolTargetsBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInteractiveToolWithToolTargetsBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveToolWithToolTargetsBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveToolWithToolTargetsBuilder) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInteractiveToolWithToolTargetsBuilder();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_85_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractiveToolWithToolTargetsBuilder;

// ********** End Class UInteractiveToolWithToolTargetsBuilder *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
