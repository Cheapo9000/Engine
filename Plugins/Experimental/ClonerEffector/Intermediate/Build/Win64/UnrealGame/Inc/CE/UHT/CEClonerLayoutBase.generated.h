// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Layouts/CEClonerLayoutBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLONEREFFECTOR_CEClonerLayoutBase_generated_h
#error "CEClonerLayoutBase.generated.h already included, missing '#pragma once' in CEClonerLayoutBase.h"
#endif
#define CLONEREFFECTOR_CEClonerLayoutBase_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsLayoutActive); \
	DECLARE_FUNCTION(execGetLayoutName);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerLayoutBase(); \
	friend struct Z_Construct_UClass_UCEClonerLayoutBase_Statics; \
public: \
	DECLARE_CLASS(UCEClonerLayoutBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEClonerLayoutBase)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEClonerLayoutBase(UCEClonerLayoutBase&&); \
	UCEClonerLayoutBase(const UCEClonerLayoutBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerLayoutBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerLayoutBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCEClonerLayoutBase) \
	CLONEREFFECTOR_API virtual ~UCEClonerLayoutBase();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEClonerLayoutBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h


#define FOREACH_ENUM_ECECLONERLAYOUTASSETVERSION(op) \
	op(ECEClonerLayoutAssetVersion::PreVersioning) \
	op(ECEClonerLayoutAssetVersion::CachedVersion) \
	op(ECEClonerLayoutAssetVersion::LatestVersionPlusOne) \
	op(ECEClonerLayoutAssetVersion::LatestVersion) 

enum class ECEClonerLayoutAssetVersion : uint8;
template<> struct TIsUEnumClass<ECEClonerLayoutAssetVersion> { enum { Value = true }; };
template<> CLONEREFFECTOR_API UEnum* StaticEnum<ECEClonerLayoutAssetVersion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
