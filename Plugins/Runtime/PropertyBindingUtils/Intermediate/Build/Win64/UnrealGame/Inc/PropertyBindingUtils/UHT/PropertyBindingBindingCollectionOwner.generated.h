// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyBindingBindingCollectionOwner.h"

#ifdef PROPERTYBINDINGUTILS_PropertyBindingBindingCollectionOwner_generated_h
#error "PropertyBindingBindingCollectionOwner.generated.h already included, missing '#pragma once' in PropertyBindingBindingCollectionOwner.h"
#endif
#define PROPERTYBINDINGUTILS_PropertyBindingBindingCollectionOwner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPropertyBindingBindingCollectionOwner *******************************
struct Z_Construct_UClass_UPropertyBindingBindingCollectionOwner_Statics;
PROPERTYBINDINGUTILS_API UClass* Z_Construct_UClass_UPropertyBindingBindingCollectionOwner_NoRegister();

#define FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingBindingCollectionOwner_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYBINDINGUTILS_API UPropertyBindingBindingCollectionOwner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyBindingBindingCollectionOwner(UPropertyBindingBindingCollectionOwner&&) = delete; \
	UPropertyBindingBindingCollectionOwner(const UPropertyBindingBindingCollectionOwner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYBINDINGUTILS_API, UPropertyBindingBindingCollectionOwner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyBindingBindingCollectionOwner); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyBindingBindingCollectionOwner) \
	virtual ~UPropertyBindingBindingCollectionOwner() = default;


#define FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingBindingCollectionOwner_h_24_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPropertyBindingBindingCollectionOwner(); \
	friend struct ::Z_Construct_UClass_UPropertyBindingBindingCollectionOwner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYBINDINGUTILS_API UClass* ::Z_Construct_UClass_UPropertyBindingBindingCollectionOwner_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyBindingBindingCollectionOwner, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PropertyBindingUtils"), Z_Construct_UClass_UPropertyBindingBindingCollectionOwner_NoRegister) \
	DECLARE_SERIALIZER(UPropertyBindingBindingCollectionOwner)


#define FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingBindingCollectionOwner_h_24_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingBindingCollectionOwner_h_24_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingBindingCollectionOwner_h_24_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingBindingCollectionOwner_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPropertyBindingBindingCollectionOwner() {} \
public: \
	typedef UPropertyBindingBindingCollectionOwner UClassType; \
	typedef IPropertyBindingBindingCollectionOwner ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingBindingCollectionOwner_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingBindingCollectionOwner_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingBindingCollectionOwner_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyBindingBindingCollectionOwner;

// ********** End Interface UPropertyBindingBindingCollectionOwner *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_PropertyBindingUtils_Source_PropertyBindingUtils_Public_PropertyBindingBindingCollectionOwner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
