// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QosEvaluator.h"

#ifdef QOS_QosEvaluator_generated_h
#error "QosEvaluator.generated.h already included, missing '#pragma once' in QosEvaluator.h"
#endif
#define QOS_QosEvaluator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UQosEvaluator ************************************************************
struct Z_Construct_UClass_UQosEvaluator_Statics;
QOS_API UClass* Z_Construct_UClass_UQosEvaluator_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUQosEvaluator(); \
	friend struct ::Z_Construct_UClass_UQosEvaluator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QOS_API UClass* ::Z_Construct_UClass_UQosEvaluator_NoRegister(); \
public: \
	DECLARE_CLASS2(UQosEvaluator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Qos"), Z_Construct_UClass_UQosEvaluator_NoRegister) \
	DECLARE_SERIALIZER(UQosEvaluator)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QOS_API UQosEvaluator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQosEvaluator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QOS_API, UQosEvaluator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQosEvaluator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQosEvaluator(UQosEvaluator&&) = delete; \
	UQosEvaluator(const UQosEvaluator&) = delete; \
	QOS_API virtual ~UQosEvaluator();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h_51_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h_54_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQosEvaluator;

// ********** End Class UQosEvaluator **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
