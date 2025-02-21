// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CineCameraAttachMount.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTickableParentConstraint;
struct FTransformFilter;
#ifdef CINECAMERARIGS_CineCameraAttachMount_generated_h
#error "CineCameraAttachMount.generated.h already included, missing '#pragma once' in CineCameraAttachMount.h"
#endif
#define CINECAMERARIGS_CineCameraAttachMount_generated_h

#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraAttachMount_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execZeroTilt); \
	DECLARE_FUNCTION(execZeroRoll); \
	DECLARE_FUNCTION(execResetRotationOffset); \
	DECLARE_FUNCTION(execResetLocationOffset); \
	DECLARE_FUNCTION(execGetConstraint); \
	DECLARE_FUNCTION(execSetTransformFilter); \
	DECLARE_FUNCTION(execSetRotationLagSpeed); \
	DECLARE_FUNCTION(execSetLocationLagSpeed); \
	DECLARE_FUNCTION(execSetEnableRotationLag); \
	DECLARE_FUNCTION(execSetEnableLocationLag);


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraAttachMount_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACineCameraAttachMount(); \
	friend struct Z_Construct_UClass_ACineCameraAttachMount_Statics; \
public: \
	DECLARE_CLASS(ACineCameraAttachMount, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CineCameraRigs"), NO_API) \
	DECLARE_SERIALIZER(ACineCameraAttachMount)


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraAttachMount_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACineCameraAttachMount(ACineCameraAttachMount&&); \
	ACineCameraAttachMount(const ACineCameraAttachMount&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACineCameraAttachMount); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACineCameraAttachMount); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACineCameraAttachMount) \
	NO_API virtual ~ACineCameraAttachMount();


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraAttachMount_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraAttachMount_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraAttachMount_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraAttachMount_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraAttachMount_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINECAMERARIGS_API UClass* StaticClass<class ACineCameraAttachMount>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraAttachMount_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
