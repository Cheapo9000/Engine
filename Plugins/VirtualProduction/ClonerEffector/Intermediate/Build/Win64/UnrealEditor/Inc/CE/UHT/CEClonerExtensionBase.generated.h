// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Extensions/CEClonerExtensionBase.h"

#ifdef CLONEREFFECTOR_CEClonerExtensionBase_generated_h
#error "CEClonerExtensionBase.generated.h already included, missing '#pragma once' in CEClonerExtensionBase.h"
#endif
#define CLONEREFFECTOR_CEClonerExtensionBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCEClonerExtensionBase ***************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerExtensionBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsExtensionActive); \
	DECLARE_FUNCTION(execGetExtensionName);


struct Z_Construct_UClass_UCEClonerExtensionBase_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerExtensionBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerExtensionBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerExtensionBase(); \
	friend struct ::Z_Construct_UClass_UCEClonerExtensionBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerExtensionBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerExtensionBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerExtensionBase_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerExtensionBase) \
	DECLARE_WITHIN(UCEClonerComponent)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerExtensionBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerExtensionBase(UCEClonerExtensionBase&&) = delete; \
	UCEClonerExtensionBase(const UCEClonerExtensionBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerExtensionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerExtensionBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCEClonerExtensionBase) \
	CLONEREFFECTOR_API virtual ~UCEClonerExtensionBase();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerExtensionBase_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerExtensionBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerExtensionBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerExtensionBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerExtensionBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerExtensionBase;

// ********** End Class UCEClonerExtensionBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerExtensionBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
