// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actuators/MLAdapterActuator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MLADAPTER_MLAdapterActuator_generated_h
#error "MLAdapterActuator.generated.h already included, missing '#pragma once' in MLAdapterActuator.h"
#endif
#define MLADAPTER_MLAdapterActuator_generated_h

#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLAdapterActuator(); \
	friend struct Z_Construct_UClass_UMLAdapterActuator_Statics; \
public: \
	DECLARE_CLASS(UMLAdapterActuator, UMLAdapterAgentElement, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MLAdapter"), NO_API) \
	DECLARE_SERIALIZER(UMLAdapterActuator)


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMLAdapterActuator(UMLAdapterActuator&&); \
	UMLAdapterActuator(const UMLAdapterActuator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLAdapterActuator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLAdapterActuator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLAdapterActuator) \
	NO_API virtual ~UMLAdapterActuator();


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_h_17_PROLOG
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLADAPTER_API UClass* StaticClass<class UMLAdapterActuator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
