// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FieldNotification/FieldNotificationLibrary.h"

#ifdef ENGINE_FieldNotificationLibrary_generated_h
#error "FieldNotificationLibrary.generated.h already included, missing '#pragma once' in FieldNotificationLibrary.h"
#endif
#define ENGINE_FieldNotificationLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FFieldNotificationId;

// ********** Begin Class UFieldNotificationLibrary ************************************************
#define FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBroadcastFieldsValueChanged); \
	DECLARE_FUNCTION(execBroadcastFieldValueChanged);


struct Z_Construct_UClass_UFieldNotificationLibrary_Statics;
	struct Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics; \
	struct Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics; \
ENGINE_API UClass* Z_Construct_UClass_UFieldNotificationLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFieldNotificationLibrary(); \
	friend struct ::Z_Construct_UClass_UFieldNotificationLibrary_Statics; \
	friend struct ::Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics; \
	friend struct ::Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UFieldNotificationLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UFieldNotificationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UFieldNotificationLibrary_NoRegister) \
	DECLARE_SERIALIZER(UFieldNotificationLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFieldNotificationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFieldNotificationLibrary(UFieldNotificationLibrary&&) = delete; \
	UFieldNotificationLibrary(const UFieldNotificationLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFieldNotificationLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldNotificationLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldNotificationLibrary) \
	ENGINE_API virtual ~UFieldNotificationLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFieldNotificationLibrary;

// ********** End Class UFieldNotificationLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
