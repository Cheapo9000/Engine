// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectionSystem/DataprepFloatFilter.h"

#ifdef DATAPREPCORE_DataprepFloatFilter_generated_h
#error "DataprepFloatFilter.generated.h already included, missing '#pragma once' in DataprepFloatFilter.h"
#endif
#define DATAPREPCORE_DataprepFloatFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataprepFloatFilter *****************************************************
struct Z_Construct_UClass_UDataprepFloatFilter_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFloatFilter_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFilter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepFloatFilter(); \
	friend struct ::Z_Construct_UClass_UDataprepFloatFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepFloatFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepFloatFilter, UDataprepFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepFloatFilter_NoRegister) \
	DECLARE_SERIALIZER(UDataprepFloatFilter)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFilter_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepFloatFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepFloatFilter(UDataprepFloatFilter&&) = delete; \
	UDataprepFloatFilter(const UDataprepFloatFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepFloatFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepFloatFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepFloatFilter) \
	NO_API virtual ~UDataprepFloatFilter();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFilter_h_23_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFilter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFilter_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFilter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepFloatFilter;

// ********** End Class UDataprepFloatFilter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFilter_h

// ********** Begin Enum EDataprepFloatMatchType ***************************************************
#define FOREACH_ENUM_EDATAPREPFLOATMATCHTYPE(op) \
	op(EDataprepFloatMatchType::LessThan) \
	op(EDataprepFloatMatchType::GreatherThan) \
	op(EDataprepFloatMatchType::IsNearlyEqual) 

enum class EDataprepFloatMatchType : uint8;
template<> struct TIsUEnumClass<EDataprepFloatMatchType> { enum { Value = true }; };
template<> DATAPREPCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataprepFloatMatchType>();
// ********** End Enum EDataprepFloatMatchType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
