// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/CEEffectorExtensionBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLONEREFFECTOR_CEEffectorExtensionBase_generated_h
#error "CEEffectorExtensionBase.generated.h already included, missing '#pragma once' in CEEffectorExtensionBase.h"
#endif
#define CLONEREFFECTOR_CEEffectorExtensionBase_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorExtensionBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsExtensionActive); \
	DECLARE_FUNCTION(execGetExtensionName);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorExtensionBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorExtensionBase(); \
	friend struct Z_Construct_UClass_UCEEffectorExtensionBase_Statics; \
public: \
	DECLARE_CLASS(UCEEffectorExtensionBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEEffectorExtensionBase) \
	DECLARE_WITHIN(UCEEffectorComponent)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorExtensionBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEEffectorExtensionBase(UCEEffectorExtensionBase&&); \
	UCEEffectorExtensionBase(const UCEEffectorExtensionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorExtensionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorExtensionBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorExtensionBase) \
	CLONEREFFECTOR_API virtual ~UCEEffectorExtensionBase();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorExtensionBase_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorExtensionBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorExtensionBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorExtensionBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorExtensionBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEEffectorExtensionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorExtensionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
