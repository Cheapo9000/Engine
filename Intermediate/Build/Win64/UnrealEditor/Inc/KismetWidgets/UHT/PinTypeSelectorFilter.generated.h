// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PinTypeSelectorFilter.h"

#ifdef KISMETWIDGETS_PinTypeSelectorFilter_generated_h
#error "PinTypeSelectorFilter.generated.h already included, missing '#pragma once' in PinTypeSelectorFilter.h"
#endif
#define KISMETWIDGETS_PinTypeSelectorFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPinTypeSelectorFilter ***************************************************
struct Z_Construct_UClass_UPinTypeSelectorFilter_Statics;
KISMETWIDGETS_API UClass* Z_Construct_UClass_UPinTypeSelectorFilter_NoRegister();

#define FID_Engine_Source_Editor_KismetWidgets_Public_PinTypeSelectorFilter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPinTypeSelectorFilter(); \
	friend struct ::Z_Construct_UClass_UPinTypeSelectorFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KISMETWIDGETS_API UClass* ::Z_Construct_UClass_UPinTypeSelectorFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UPinTypeSelectorFilter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/KismetWidgets"), Z_Construct_UClass_UPinTypeSelectorFilter_NoRegister) \
	DECLARE_SERIALIZER(UPinTypeSelectorFilter) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_KismetWidgets_Public_PinTypeSelectorFilter_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KISMETWIDGETS_API UPinTypeSelectorFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPinTypeSelectorFilter(UPinTypeSelectorFilter&&) = delete; \
	UPinTypeSelectorFilter(const UPinTypeSelectorFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KISMETWIDGETS_API, UPinTypeSelectorFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPinTypeSelectorFilter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPinTypeSelectorFilter) \
	KISMETWIDGETS_API virtual ~UPinTypeSelectorFilter();


#define FID_Engine_Source_Editor_KismetWidgets_Public_PinTypeSelectorFilter_h_10_PROLOG
#define FID_Engine_Source_Editor_KismetWidgets_Public_PinTypeSelectorFilter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_KismetWidgets_Public_PinTypeSelectorFilter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_KismetWidgets_Public_PinTypeSelectorFilter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPinTypeSelectorFilter;

// ********** End Class UPinTypeSelectorFilter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_KismetWidgets_Public_PinTypeSelectorFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
