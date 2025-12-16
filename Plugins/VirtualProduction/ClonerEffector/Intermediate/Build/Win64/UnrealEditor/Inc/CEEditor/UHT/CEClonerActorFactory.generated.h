// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/CEClonerActorFactory.h"

#ifdef CLONEREFFECTOREDITOR_CEClonerActorFactory_generated_h
#error "CEClonerActorFactory.generated.h already included, missing '#pragma once' in CEClonerActorFactory.h"
#endif
#define CLONEREFFECTOREDITOR_CEClonerActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCEClonerActorFactory ****************************************************
struct Z_Construct_UClass_UCEClonerActorFactory_Statics;
CLONEREFFECTOREDITOR_API UClass* Z_Construct_UClass_UCEClonerActorFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffectorEditor_Public_Cloner_CEClonerActorFactory_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerActorFactory(); \
	friend struct ::Z_Construct_UClass_UCEClonerActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOREDITOR_API UClass* ::Z_Construct_UClass_UCEClonerActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClonerEffectorEditor"), Z_Construct_UClass_UCEClonerActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerActorFactory)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffectorEditor_Public_Cloner_CEClonerActorFactory_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerActorFactory(UCEClonerActorFactory&&) = delete; \
	UCEClonerActorFactory(const UCEClonerActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOREDITOR_API, UCEClonerActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerActorFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerActorFactory) \
	CLONEREFFECTOREDITOR_API virtual ~UCEClonerActorFactory();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffectorEditor_Public_Cloner_CEClonerActorFactory_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffectorEditor_Public_Cloner_CEClonerActorFactory_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffectorEditor_Public_Cloner_CEClonerActorFactory_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffectorEditor_Public_Cloner_CEClonerActorFactory_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerActorFactory;

// ********** End Class UCEClonerActorFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffectorEditor_Public_Cloner_CEClonerActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
