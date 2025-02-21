// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Types/CEEffectorSphereType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLONEREFFECTOR_CEEffectorSphereType_generated_h
#error "CEEffectorSphereType.generated.h already included, missing '#pragma once' in CEEffectorSphereType.h"
#endif
#define CLONEREFFECTOR_CEEffectorSphereType_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorSphereType_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInnerRadius); \
	DECLARE_FUNCTION(execSetInnerRadius); \
	DECLARE_FUNCTION(execGetOuterRadius); \
	DECLARE_FUNCTION(execSetOuterRadius);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorSphereType_h_13_ACCESSORS \
static void GetInnerRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetInnerRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetOuterRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetOuterRadius_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorSphereType_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorSphereType(); \
	friend struct Z_Construct_UClass_UCEEffectorSphereType_Statics; \
public: \
	DECLARE_CLASS(UCEEffectorSphereType, UCEEffectorBoundType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEEffectorSphereType)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorSphereType_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEEffectorSphereType(UCEEffectorSphereType&&); \
	UCEEffectorSphereType(const UCEEffectorSphereType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorSphereType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorSphereType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorSphereType) \
	CLONEREFFECTOR_API virtual ~UCEEffectorSphereType();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorSphereType_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorSphereType_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorSphereType_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorSphereType_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorSphereType_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorSphereType_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEEffectorSphereType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorSphereType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
