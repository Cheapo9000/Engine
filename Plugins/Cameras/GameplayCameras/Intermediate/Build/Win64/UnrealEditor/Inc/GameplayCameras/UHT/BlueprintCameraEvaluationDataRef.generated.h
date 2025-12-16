// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/BlueprintCameraEvaluationDataRef.h"

#ifdef GAMEPLAYCAMERAS_BlueprintCameraEvaluationDataRef_generated_h
#error "BlueprintCameraEvaluationDataRef.generated.h already included, missing '#pragma once' in BlueprintCameraEvaluationDataRef.h"
#endif
#define GAMEPLAYCAMERAS_BlueprintCameraEvaluationDataRef_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBooleanCameraVariable;
class UCameraRigAsset;
class UClass;
class UDoubleCameraVariable;
class UEnum;
class UFloatCameraVariable;
class UInteger32CameraVariable;
class UObject;
class URotator3dCameraVariable;
class UScriptStruct;
class UTransform3dCameraVariable;
class UVector2dCameraVariable;
class UVector3dCameraVariable;
class UVector4dCameraVariable;
struct FBlueprintCameraEvaluationDataRef;
struct FBlueprintCameraPose;
struct FCameraContextDataID;
struct FInstancedStruct;

// ********** Begin ScriptStruct FBlueprintCameraEvaluationDataRef *********************************
struct Z_Construct_UScriptStruct_FBlueprintCameraEvaluationDataRef_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintCameraEvaluationDataRef_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FBlueprintCameraEvaluationDataRef;
// ********** End ScriptStruct FBlueprintCameraEvaluationDataRef ***********************************

// ********** Begin Class UBlueprintCameraEvaluationDataFunctionLibrary ****************************
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDefaultCameraRigParameters); \
	DECLARE_FUNCTION(execBlendCameraEvaluationData); \
	DECLARE_FUNCTION(execSetCameraPose); \
	DECLARE_FUNCTION(execGetCameraPose); \
	DECLARE_FUNCTION(execMakeCameraEvaluationData);


struct Z_Construct_UClass_UBlueprintCameraEvaluationDataFunctionLibrary_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraEvaluationDataFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCameraEvaluationDataFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UBlueprintCameraEvaluationDataFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UBlueprintCameraEvaluationDataFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintCameraEvaluationDataFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UBlueprintCameraEvaluationDataFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintCameraEvaluationDataFunctionLibrary)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintCameraEvaluationDataFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintCameraEvaluationDataFunctionLibrary(UBlueprintCameraEvaluationDataFunctionLibrary&&) = delete; \
	UBlueprintCameraEvaluationDataFunctionLibrary(const UBlueprintCameraEvaluationDataFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintCameraEvaluationDataFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCameraEvaluationDataFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCameraEvaluationDataFunctionLibrary) \
	NO_API virtual ~UBlueprintCameraEvaluationDataFunctionLibrary();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_59_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintCameraEvaluationDataFunctionLibrary;

// ********** End Class UBlueprintCameraEvaluationDataFunctionLibrary ******************************

// ********** Begin Class UBlueprintCameraVariableTableFunctionLibrary *****************************
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTransformCameraVariable); \
	DECLARE_FUNCTION(execSetRotatorCameraVariable); \
	DECLARE_FUNCTION(execSetVector4CameraVariable); \
	DECLARE_FUNCTION(execSetVector3CameraVariable); \
	DECLARE_FUNCTION(execSetVector2CameraVariable); \
	DECLARE_FUNCTION(execSetDoubleCameraVariable); \
	DECLARE_FUNCTION(execSetFloatCameraVariable); \
	DECLARE_FUNCTION(execSetInteger32CameraVariable); \
	DECLARE_FUNCTION(execSetBooleanCameraVariable); \
	DECLARE_FUNCTION(execGetTransformCameraVariable); \
	DECLARE_FUNCTION(execGetRotatorCameraVariable); \
	DECLARE_FUNCTION(execGetVector4CameraVariable); \
	DECLARE_FUNCTION(execGetVector3CameraVariable); \
	DECLARE_FUNCTION(execGetVector2CameraVariable); \
	DECLARE_FUNCTION(execGetDoubleCameraVariable); \
	DECLARE_FUNCTION(execGetFloatCameraVariable); \
	DECLARE_FUNCTION(execGetInteger32CameraVariable); \
	DECLARE_FUNCTION(execGetBooleanCameraVariable);


struct Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCameraVariableTableFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintCameraVariableTableFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintCameraVariableTableFunctionLibrary)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintCameraVariableTableFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintCameraVariableTableFunctionLibrary(UBlueprintCameraVariableTableFunctionLibrary&&) = delete; \
	UBlueprintCameraVariableTableFunctionLibrary(const UBlueprintCameraVariableTableFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintCameraVariableTableFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCameraVariableTableFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCameraVariableTableFunctionLibrary) \
	NO_API virtual ~UBlueprintCameraVariableTableFunctionLibrary();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_94_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintCameraVariableTableFunctionLibrary;

// ********** End Class UBlueprintCameraVariableTableFunctionLibrary *******************************

// ********** Begin Class UBlueprintCameraContextDataTableFunctionLibrary **************************
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetClassData); \
	DECLARE_FUNCTION(execSetObjectData); \
	DECLARE_FUNCTION(execSetStructData); \
	DECLARE_FUNCTION(execSetEnumData); \
	DECLARE_FUNCTION(execSetStringData); \
	DECLARE_FUNCTION(execSetNameData); \
	DECLARE_FUNCTION(execGetClassData); \
	DECLARE_FUNCTION(execGetObjectData); \
	DECLARE_FUNCTION(execGetStructData); \
	DECLARE_FUNCTION(execGetEnumData); \
	DECLARE_FUNCTION(execGetStringData); \
	DECLARE_FUNCTION(execGetNameData);


struct Z_Construct_UClass_UBlueprintCameraContextDataTableFunctionLibrary_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlueprintCameraContextDataTableFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCameraContextDataTableFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UBlueprintCameraContextDataTableFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UBlueprintCameraContextDataTableFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintCameraContextDataTableFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UBlueprintCameraContextDataTableFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintCameraContextDataTableFunctionLibrary)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintCameraContextDataTableFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintCameraContextDataTableFunctionLibrary(UBlueprintCameraContextDataTableFunctionLibrary&&) = delete; \
	UBlueprintCameraContextDataTableFunctionLibrary(const UBlueprintCameraContextDataTableFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintCameraContextDataTableFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCameraContextDataTableFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCameraContextDataTableFunctionLibrary) \
	NO_API virtual ~UBlueprintCameraContextDataTableFunctionLibrary();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_179_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_182_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintCameraContextDataTableFunctionLibrary;

// ********** End Class UBlueprintCameraContextDataTableFunctionLibrary ****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
