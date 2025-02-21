// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Extensions/CEClonerEffectorExtension.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CLONEREFFECTOR_CEClonerEffectorExtension_generated_h
#error "CEClonerEffectorExtension.generated.h already included, missing '#pragma once' in CEClonerEffectorExtension.h"
#endif
#define CLONEREFFECTOR_CEClonerEffectorExtension_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEffectorExtension_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsEffectorLinked); \
	DECLARE_FUNCTION(execUnlinkEffector); \
	DECLARE_FUNCTION(execLinkEffector); \
	DECLARE_FUNCTION(execGetEffectorCount);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEffectorExtension_h_18_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execCreateLinkedEffector);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEffectorExtension_h_18_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEffectorExtension_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerEffectorExtension(); \
	friend struct Z_Construct_UClass_UCEClonerEffectorExtension_Statics; \
public: \
	DECLARE_CLASS(UCEClonerEffectorExtension, UCEClonerExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEClonerEffectorExtension)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEffectorExtension_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEClonerEffectorExtension(UCEClonerEffectorExtension&&); \
	UCEClonerEffectorExtension(const UCEClonerEffectorExtension&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerEffectorExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerEffectorExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerEffectorExtension) \
	CLONEREFFECTOR_API virtual ~UCEClonerEffectorExtension();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEffectorExtension_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEffectorExtension_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEffectorExtension_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEffectorExtension_h_18_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEffectorExtension_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEffectorExtension_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEClonerEffectorExtension>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEffectorExtension_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
