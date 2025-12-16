// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectionSystem/DataprepStringFilter.h"

#ifdef DATAPREPCORE_DataprepStringFilter_generated_h
#error "DataprepStringFilter.generated.h already included, missing '#pragma once' in DataprepStringFilter.h"
#endif
#define DATAPREPCORE_DataprepStringFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataprepStringFilterMatchingArray ***************************************
struct Z_Construct_UClass_UDataprepStringFilterMatchingArray_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepStringFilterMatchingArray_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepStringFilterMatchingArray(); \
	friend struct ::Z_Construct_UClass_UDataprepStringFilterMatchingArray_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepStringFilterMatchingArray_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepStringFilterMatchingArray, UDataprepParameterizableObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepStringFilterMatchingArray_NoRegister) \
	DECLARE_SERIALIZER(UDataprepStringFilterMatchingArray)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepStringFilterMatchingArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepStringFilterMatchingArray(UDataprepStringFilterMatchingArray&&) = delete; \
	UDataprepStringFilterMatchingArray(const UDataprepStringFilterMatchingArray&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepStringFilterMatchingArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepStringFilterMatchingArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepStringFilterMatchingArray) \
	NO_API virtual ~UDataprepStringFilterMatchingArray();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_23_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepStringFilterMatchingArray;

// ********** End Class UDataprepStringFilterMatchingArray *****************************************

// ********** Begin Class UDataprepStringFilter ****************************************************
struct Z_Construct_UClass_UDataprepStringFilter_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepStringFilter_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepStringFilter(); \
	friend struct ::Z_Construct_UClass_UDataprepStringFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepStringFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepStringFilter, UDataprepFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepStringFilter_NoRegister) \
	DECLARE_SERIALIZER(UDataprepStringFilter)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepStringFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepStringFilter(UDataprepStringFilter&&) = delete; \
	UDataprepStringFilter(const UDataprepStringFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepStringFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepStringFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepStringFilter) \
	NO_API virtual ~UDataprepStringFilter();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_37_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepStringFilter;

// ********** End Class UDataprepStringFilter ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h

// ********** Begin Enum EDataprepStringMatchType **************************************************
#define FOREACH_ENUM_EDATAPREPSTRINGMATCHTYPE(op) \
	op(EDataprepStringMatchType::Contains) \
	op(EDataprepStringMatchType::MatchesWildcard) \
	op(EDataprepStringMatchType::ExactMatch) 

enum class EDataprepStringMatchType : uint8;
template<> struct TIsUEnumClass<EDataprepStringMatchType> { enum { Value = true }; };
template<> DATAPREPCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataprepStringMatchType>();
// ********** End Enum EDataprepStringMatchType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
