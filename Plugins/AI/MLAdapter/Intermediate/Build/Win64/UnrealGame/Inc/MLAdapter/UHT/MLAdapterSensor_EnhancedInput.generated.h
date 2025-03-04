// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sensors/MLAdapterSensor_EnhancedInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionInstance;
#ifdef MLADAPTER_MLAdapterSensor_EnhancedInput_generated_h
#error "MLAdapterSensor_EnhancedInput.generated.h already included, missing '#pragma once' in MLAdapterSensor_EnhancedInput.h"
#endif
#define MLADAPTER_MLAdapterSensor_EnhancedInput_generated_h

#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_EnhancedInput_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnInputAction);


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_EnhancedInput_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLAdapterSensor_EnhancedInput(); \
	friend struct Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics; \
public: \
	DECLARE_CLASS(UMLAdapterSensor_EnhancedInput, UMLAdapterSensor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLAdapter"), NO_API) \
	DECLARE_SERIALIZER(UMLAdapterSensor_EnhancedInput)


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_EnhancedInput_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMLAdapterSensor_EnhancedInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMLAdapterSensor_EnhancedInput(UMLAdapterSensor_EnhancedInput&&); \
	UMLAdapterSensor_EnhancedInput(const UMLAdapterSensor_EnhancedInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLAdapterSensor_EnhancedInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLAdapterSensor_EnhancedInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLAdapterSensor_EnhancedInput) \
	NO_API virtual ~UMLAdapterSensor_EnhancedInput();


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_EnhancedInput_h_11_PROLOG
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_EnhancedInput_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_EnhancedInput_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_EnhancedInput_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_EnhancedInput_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLADAPTER_API UClass* StaticClass<class UMLAdapterSensor_EnhancedInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_EnhancedInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
