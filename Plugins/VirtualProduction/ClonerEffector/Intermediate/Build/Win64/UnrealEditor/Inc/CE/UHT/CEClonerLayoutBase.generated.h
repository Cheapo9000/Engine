// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Layouts/CEClonerLayoutBase.h"

#ifdef CLONEREFFECTOR_CEClonerLayoutBase_generated_h
#error "CEClonerLayoutBase.generated.h already included, missing '#pragma once' in CEClonerLayoutBase.h"
#endif
#define CLONEREFFECTOR_CEClonerLayoutBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCEClonerLayoutBase ******************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsLayoutActive); \
	DECLARE_FUNCTION(execGetLayoutName);


struct Z_Construct_UClass_UCEClonerLayoutBase_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerLayoutBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerLayoutBase(); \
	friend struct ::Z_Construct_UClass_UCEClonerLayoutBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerLayoutBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerLayoutBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerLayoutBase_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerLayoutBase)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerLayoutBase(UCEClonerLayoutBase&&) = delete; \
	UCEClonerLayoutBase(const UCEClonerLayoutBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerLayoutBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerLayoutBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCEClonerLayoutBase) \
	CLONEREFFECTOR_API virtual ~UCEClonerLayoutBase();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_23_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerLayoutBase;

// ********** End Class UCEClonerLayoutBase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLayoutBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
