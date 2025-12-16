// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sensors/MLAdapterSensor_Camera.h"

#ifdef MLADAPTER_MLAdapterSensor_Camera_generated_h
#error "MLAdapterSensor_Camera.generated.h already included, missing '#pragma once' in MLAdapterSensor_Camera.h"
#endif
#define MLADAPTER_MLAdapterSensor_Camera_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMLAdapterSensor_Camera **************************************************
struct Z_Construct_UClass_UMLAdapterSensor_Camera_Statics;
MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_Camera_NoRegister();

#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Camera_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLAdapterSensor_Camera(); \
	friend struct ::Z_Construct_UClass_UMLAdapterSensor_Camera_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MLADAPTER_API UClass* ::Z_Construct_UClass_UMLAdapterSensor_Camera_NoRegister(); \
public: \
	DECLARE_CLASS2(UMLAdapterSensor_Camera, UMLAdapterSensor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLAdapter"), Z_Construct_UClass_UMLAdapterSensor_Camera_NoRegister) \
	DECLARE_SERIALIZER(UMLAdapterSensor_Camera)


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Camera_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMLAdapterSensor_Camera(UMLAdapterSensor_Camera&&) = delete; \
	UMLAdapterSensor_Camera(const UMLAdapterSensor_Camera&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLAdapterSensor_Camera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLAdapterSensor_Camera); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLAdapterSensor_Camera) \
	NO_API virtual ~UMLAdapterSensor_Camera();


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Camera_h_17_PROLOG
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Camera_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Camera_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Camera_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMLAdapterSensor_Camera;

// ********** End Class UMLAdapterSensor_Camera ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Camera_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
