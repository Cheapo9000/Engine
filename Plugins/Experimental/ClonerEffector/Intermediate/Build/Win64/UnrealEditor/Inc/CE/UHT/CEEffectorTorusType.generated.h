// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Types/CEEffectorTorusType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLONEREFFECTOR_CEEffectorTorusType_generated_h
#error "CEEffectorTorusType.generated.h already included, missing '#pragma once' in CEEffectorTorusType.h"
#endif
#define CLONEREFFECTOR_CEEffectorTorusType_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorTorusType_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTorusOuterRadius); \
	DECLARE_FUNCTION(execSetTorusOuterRadius); \
	DECLARE_FUNCTION(execGetTorusInnerRadius); \
	DECLARE_FUNCTION(execSetTorusInnerRadius); \
	DECLARE_FUNCTION(execGetTorusRadius); \
	DECLARE_FUNCTION(execSetTorusRadius);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorTorusType_h_13_ACCESSORS \
static void GetTorusRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetTorusRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetTorusInnerRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetTorusInnerRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetTorusOuterRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetTorusOuterRadius_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorTorusType_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorTorusType(); \
	friend struct Z_Construct_UClass_UCEEffectorTorusType_Statics; \
public: \
	DECLARE_CLASS(UCEEffectorTorusType, UCEEffectorBoundType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEEffectorTorusType)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorTorusType_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEEffectorTorusType(UCEEffectorTorusType&&); \
	UCEEffectorTorusType(const UCEEffectorTorusType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorTorusType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorTorusType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorTorusType) \
	CLONEREFFECTOR_API virtual ~UCEEffectorTorusType();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorTorusType_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorTorusType_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorTorusType_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorTorusType_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorTorusType_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorTorusType_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEEffectorTorusType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorTorusType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
