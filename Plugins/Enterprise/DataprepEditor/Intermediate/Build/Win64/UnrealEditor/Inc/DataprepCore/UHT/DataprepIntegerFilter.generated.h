// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectionSystem/DataprepIntegerFilter.h"

#ifdef DATAPREPCORE_DataprepIntegerFilter_generated_h
#error "DataprepIntegerFilter.generated.h already included, missing '#pragma once' in DataprepIntegerFilter.h"
#endif
#define DATAPREPCORE_DataprepIntegerFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataprepIntegerFilter ***************************************************
struct Z_Construct_UClass_UDataprepIntegerFilter_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepIntegerFilter_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFilter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepIntegerFilter(); \
	friend struct ::Z_Construct_UClass_UDataprepIntegerFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepIntegerFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepIntegerFilter, UDataprepFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepIntegerFilter_NoRegister) \
	DECLARE_SERIALIZER(UDataprepIntegerFilter)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFilter_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepIntegerFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepIntegerFilter(UDataprepIntegerFilter&&) = delete; \
	UDataprepIntegerFilter(const UDataprepIntegerFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepIntegerFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepIntegerFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepIntegerFilter) \
	NO_API virtual ~UDataprepIntegerFilter();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFilter_h_24_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFilter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFilter_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFilter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepIntegerFilter;

// ********** End Class UDataprepIntegerFilter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFilter_h

// ********** Begin Enum EDataprepIntegerMatchType *************************************************
#define FOREACH_ENUM_EDATAPREPINTEGERMATCHTYPE(op) \
	op(EDataprepIntegerMatchType::LessThan) \
	op(EDataprepIntegerMatchType::GreatherThan) \
	op(EDataprepIntegerMatchType::IsEqual) \
	op(EDataprepIntegerMatchType::InBetween) 

enum class EDataprepIntegerMatchType : uint8;
template<> struct TIsUEnumClass<EDataprepIntegerMatchType> { enum { Value = true }; };
template<> DATAPREPCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataprepIntegerMatchType>();
// ********** End Enum EDataprepIntegerMatchType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
