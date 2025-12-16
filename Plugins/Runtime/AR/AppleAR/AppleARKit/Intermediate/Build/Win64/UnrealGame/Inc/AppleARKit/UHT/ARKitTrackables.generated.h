// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARKitTrackables.h"

#ifdef APPLEARKIT_ARKitTrackables_generated_h
#error "ARKitTrackables.generated.h already included, missing '#pragma once' in ARKitTrackables.h"
#endif
#define APPLEARKIT_ARKitTrackables_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UARKitMeshGeometry *******************************************************
struct Z_Construct_UClass_UARKitMeshGeometry_Statics;
APPLEARKIT_API UClass* Z_Construct_UClass_UARKitMeshGeometry_NoRegister();

#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitTrackables_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARKitMeshGeometry(); \
	friend struct ::Z_Construct_UClass_UARKitMeshGeometry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend APPLEARKIT_API UClass* ::Z_Construct_UClass_UARKitMeshGeometry_NoRegister(); \
public: \
	DECLARE_CLASS2(UARKitMeshGeometry, UARMeshGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AppleARKit"), Z_Construct_UClass_UARKitMeshGeometry_NoRegister) \
	DECLARE_SERIALIZER(UARKitMeshGeometry)


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitTrackables_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARKitMeshGeometry(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARKitMeshGeometry(UARKitMeshGeometry&&) = delete; \
	UARKitMeshGeometry(const UARKitMeshGeometry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARKitMeshGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARKitMeshGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARKitMeshGeometry) \
	NO_API virtual ~UARKitMeshGeometry();


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitTrackables_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitTrackables_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitTrackables_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitTrackables_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARKitMeshGeometry;

// ********** End Class UARKitMeshGeometry *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitTrackables_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
