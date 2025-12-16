// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SGeometryCollectionHistogram.h"

#ifdef FRACTUREEDITOR_SGeometryCollectionHistogram_generated_h
#error "SGeometryCollectionHistogram.generated.h already included, missing '#pragma once' in SGeometryCollectionHistogram.h"
#endif
#define FRACTUREEDITOR_SGeometryCollectionHistogram_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHistogramSettings *******************************************************
struct Z_Construct_UClass_UHistogramSettings_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UHistogramSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHistogramSettings(); \
	friend struct ::Z_Construct_UClass_UHistogramSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UHistogramSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UHistogramSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UHistogramSettings_NoRegister) \
	DECLARE_SERIALIZER(UHistogramSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHistogramSettings(UHistogramSettings&&) = delete; \
	UHistogramSettings(const UHistogramSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHistogramSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHistogramSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHistogramSettings) \
	NO_API virtual ~UHistogramSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_36_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHistogramSettings;

// ********** End Class UHistogramSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h

// ********** Begin Enum EInspectedAttributeEnum ***************************************************
#define FOREACH_ENUM_EINSPECTEDATTRIBUTEENUM(op) \
	op(EInspectedAttributeEnum::Volume) \
	op(EInspectedAttributeEnum::Level) \
	op(EInspectedAttributeEnum::InitialDynamicState) \
	op(EInspectedAttributeEnum::Size) 

enum class EInspectedAttributeEnum : uint8;
template<> struct TIsUEnumClass<EInspectedAttributeEnum> { enum { Value = true }; };
template<> FRACTUREEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EInspectedAttributeEnum>();
// ********** End Enum EInspectedAttributeEnum *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
