// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Modes/CEEffectorModeBase.h"

#ifdef CLONEREFFECTOR_CEEffectorModeBase_generated_h
#error "CEEffectorModeBase.generated.h already included, missing '#pragma once' in CEEffectorModeBase.h"
#endif
#define CLONEREFFECTOR_CEEffectorModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCEEffectorModeBase ******************************************************
struct Z_Construct_UClass_UCEEffectorModeBase_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEEffectorModeBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorModeBase(); \
	friend struct ::Z_Construct_UClass_UCEEffectorModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEEffectorModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEEffectorModeBase, UCEEffectorExtensionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEEffectorModeBase_NoRegister) \
	DECLARE_SERIALIZER(UCEEffectorModeBase)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEEffectorModeBase(UCEEffectorModeBase&&) = delete; \
	UCEEffectorModeBase(const UCEEffectorModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorModeBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorModeBase) \
	CLONEREFFECTOR_API virtual ~UCEEffectorModeBase();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorModeBase_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEEffectorModeBase;

// ********** End Class UCEEffectorModeBase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
