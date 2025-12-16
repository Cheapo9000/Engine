// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/Handlers/PropertyAnimatorCoreHandlerBase.h"

#ifdef PROPERTYANIMATORCORE_PropertyAnimatorCoreHandlerBase_generated_h
#error "PropertyAnimatorCoreHandlerBase.generated.h already included, missing '#pragma once' in PropertyAnimatorCoreHandlerBase.h"
#endif
#define PROPERTYANIMATORCORE_PropertyAnimatorCoreHandlerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorCoreHandlerBase *****************************************
struct Z_Construct_UClass_UPropertyAnimatorCoreHandlerBase_Statics;
PROPERTYANIMATORCORE_API UClass* Z_Construct_UClass_UPropertyAnimatorCoreHandlerBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_Handlers_PropertyAnimatorCoreHandlerBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorCoreHandlerBase(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorCoreHandlerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATORCORE_API UClass* ::Z_Construct_UClass_UPropertyAnimatorCoreHandlerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorCoreHandlerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PropertyAnimatorCore"), Z_Construct_UClass_UPropertyAnimatorCoreHandlerBase_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorCoreHandlerBase)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_Handlers_PropertyAnimatorCoreHandlerBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYANIMATORCORE_API UPropertyAnimatorCoreHandlerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorCoreHandlerBase(UPropertyAnimatorCoreHandlerBase&&) = delete; \
	UPropertyAnimatorCoreHandlerBase(const UPropertyAnimatorCoreHandlerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATORCORE_API, UPropertyAnimatorCoreHandlerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorCoreHandlerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyAnimatorCoreHandlerBase) \
	PROPERTYANIMATORCORE_API virtual ~UPropertyAnimatorCoreHandlerBase();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_Handlers_PropertyAnimatorCoreHandlerBase_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_Handlers_PropertyAnimatorCoreHandlerBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_Handlers_PropertyAnimatorCoreHandlerBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_Handlers_PropertyAnimatorCoreHandlerBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorCoreHandlerBase;

// ********** End Class UPropertyAnimatorCoreHandlerBase *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Properties_Handlers_PropertyAnimatorCoreHandlerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
