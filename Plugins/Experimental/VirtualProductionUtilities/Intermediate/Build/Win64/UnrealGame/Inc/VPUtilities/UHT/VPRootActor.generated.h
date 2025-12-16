// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/VPRootActor.h"

#ifdef VPUTILITIES_VPRootActor_generated_h
#error "VPRootActor.generated.h already included, missing '#pragma once' in VPRootActor.h"
#endif
#define VPUTILITIES_VPRootActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACineCameraActor;

// ********** Begin Class AVPRootActor *************************************************************
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual ACineCameraActor* GetCineCameraActor_Implementation() const; \
	DECLARE_FUNCTION(execGetCineCameraActor);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execMoveLevelToRootActor); \
	DECLARE_FUNCTION(execToggleComponentsVisibility);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_25_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AVPRootActor_Statics;
VPUTILITIES_API UClass* Z_Construct_UClass_AVPRootActor_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVPRootActor(); \
	friend struct ::Z_Construct_UClass_AVPRootActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIES_API UClass* ::Z_Construct_UClass_AVPRootActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AVPRootActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilities"), Z_Construct_UClass_AVPRootActor_NoRegister) \
	DECLARE_SERIALIZER(AVPRootActor)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVPRootActor(AVPRootActor&&) = delete; \
	AVPRootActor(const AVPRootActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVPRootActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVPRootActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVPRootActor) \
	NO_API virtual ~AVPRootActor();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_25_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVPRootActor;

// ********** End Class AVPRootActor ***************************************************************

// ********** Begin Class UVPWorldAssetUserData ****************************************************
struct Z_Construct_UClass_UVPWorldAssetUserData_Statics;
VPUTILITIES_API UClass* Z_Construct_UClass_UVPWorldAssetUserData_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPWorldAssetUserData(); \
	friend struct ::Z_Construct_UClass_UVPWorldAssetUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIES_API UClass* ::Z_Construct_UClass_UVPWorldAssetUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPWorldAssetUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPUtilities"), Z_Construct_UClass_UVPWorldAssetUserData_NoRegister) \
	DECLARE_SERIALIZER(UVPWorldAssetUserData)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VPUTILITIES_API UVPWorldAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPWorldAssetUserData(UVPWorldAssetUserData&&) = delete; \
	UVPWorldAssetUserData(const UVPWorldAssetUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VPUTILITIES_API, UVPWorldAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPWorldAssetUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPWorldAssetUserData) \
	VPUTILITIES_API virtual ~UVPWorldAssetUserData();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_87_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_90_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPWorldAssetUserData;

// ********** End Class UVPWorldAssetUserData ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPRootActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
