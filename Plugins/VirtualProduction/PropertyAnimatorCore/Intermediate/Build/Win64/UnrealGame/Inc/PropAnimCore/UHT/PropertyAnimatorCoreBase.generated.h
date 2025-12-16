// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animators/PropertyAnimatorCoreBase.h"

#ifdef PROPERTYANIMATORCORE_PropertyAnimatorCoreBase_generated_h
#error "PropertyAnimatorCoreBase.generated.h already included, missing '#pragma once' in PropertyAnimatorCoreBase.h"
#endif
#define PROPERTYANIMATORCORE_PropertyAnimatorCoreBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorCoreBase ************************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Animators_PropertyAnimatorCoreBase_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTimeSourceNames);


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Animators_PropertyAnimatorCoreBase_h_45_ACCESSORS \
static void GetbAnimatorEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAnimatorEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetbOverrideTimeSource_WrapperImpl(const void* Object, void* OutValue); \
static void SetbOverrideTimeSource_WrapperImpl(void* Object, const void* InValue); \
static void GetTimeSourceName_WrapperImpl(const void* Object, void* OutValue); \
static void SetTimeSourceName_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorCoreBase_Statics;
PROPERTYANIMATORCORE_API UClass* Z_Construct_UClass_UPropertyAnimatorCoreBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Animators_PropertyAnimatorCoreBase_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorCoreBase(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorCoreBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATORCORE_API UClass* ::Z_Construct_UClass_UPropertyAnimatorCoreBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorCoreBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PropertyAnimatorCore"), Z_Construct_UClass_UPropertyAnimatorCoreBase_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorCoreBase) \
	virtual UObject* _getUObject() const override { return const_cast<UPropertyAnimatorCoreBase*>(this); }


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Animators_PropertyAnimatorCoreBase_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorCoreBase(UPropertyAnimatorCoreBase&&) = delete; \
	UPropertyAnimatorCoreBase(const UPropertyAnimatorCoreBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATORCORE_API, UPropertyAnimatorCoreBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorCoreBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorCoreBase) \
	PROPERTYANIMATORCORE_API virtual ~UPropertyAnimatorCoreBase();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Animators_PropertyAnimatorCoreBase_h_42_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Animators_PropertyAnimatorCoreBase_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Animators_PropertyAnimatorCoreBase_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Animators_PropertyAnimatorCoreBase_h_45_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Animators_PropertyAnimatorCoreBase_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Animators_PropertyAnimatorCoreBase_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorCoreBase;

// ********** End Class UPropertyAnimatorCoreBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Animators_PropertyAnimatorCoreBase_h

// ********** Begin Enum EPropertyAnimatorPropertySupport ******************************************
#define FOREACH_ENUM_EPROPERTYANIMATORPROPERTYSUPPORT(op) \
	op(EPropertyAnimatorPropertySupport::None) \
	op(EPropertyAnimatorPropertySupport::Incomplete) \
	op(EPropertyAnimatorPropertySupport::Complete) \
	op(EPropertyAnimatorPropertySupport::All) 

enum class EPropertyAnimatorPropertySupport : uint8;
template<> struct TIsUEnumClass<EPropertyAnimatorPropertySupport> { enum { Value = true }; };
template<> PROPERTYANIMATORCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAnimatorPropertySupport>();
// ********** End Enum EPropertyAnimatorPropertySupport ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
