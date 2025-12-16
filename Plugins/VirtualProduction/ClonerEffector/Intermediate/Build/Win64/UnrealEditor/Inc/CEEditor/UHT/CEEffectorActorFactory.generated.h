// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/CEEffectorActorFactory.h"

#ifdef CLONEREFFECTOREDITOR_CEEffectorActorFactory_generated_h
#error "CEEffectorActorFactory.generated.h already included, missing '#pragma once' in CEEffectorActorFactory.h"
#endif
#define CLONEREFFECTOREDITOR_CEEffectorActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCEEffectorActorFactory **************************************************
struct Z_Construct_UClass_UCEEffectorActorFactory_Statics;
CLONEREFFECTOREDITOR_API UClass* Z_Construct_UClass_UCEEffectorActorFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffectorEditor_Public_Effector_CEEffectorActorFactory_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorActorFactory(); \
	friend struct ::Z_Construct_UClass_UCEEffectorActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOREDITOR_API UClass* ::Z_Construct_UClass_UCEEffectorActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEEffectorActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClonerEffectorEditor"), Z_Construct_UClass_UCEEffectorActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UCEEffectorActorFactory)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffectorEditor_Public_Effector_CEEffectorActorFactory_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEEffectorActorFactory(UCEEffectorActorFactory&&) = delete; \
	UCEEffectorActorFactory(const UCEEffectorActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOREDITOR_API, UCEEffectorActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorActorFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorActorFactory) \
	CLONEREFFECTOREDITOR_API virtual ~UCEEffectorActorFactory();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffectorEditor_Public_Effector_CEEffectorActorFactory_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffectorEditor_Public_Effector_CEEffectorActorFactory_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffectorEditor_Public_Effector_CEEffectorActorFactory_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffectorEditor_Public_Effector_CEEffectorActorFactory_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEEffectorActorFactory;

// ********** End Class UCEEffectorActorFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffectorEditor_Public_Effector_CEEffectorActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
