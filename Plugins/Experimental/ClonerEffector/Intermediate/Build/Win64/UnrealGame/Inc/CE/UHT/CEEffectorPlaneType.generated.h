// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Types/CEEffectorPlaneType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLONEREFFECTOR_CEEffectorPlaneType_generated_h
#error "CEEffectorPlaneType.generated.h already included, missing '#pragma once' in CEEffectorPlaneType.h"
#endif
#define CLONEREFFECTOR_CEEffectorPlaneType_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorPlaneType_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlaneSpacing); \
	DECLARE_FUNCTION(execSetPlaneSpacing);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorPlaneType_h_13_ACCESSORS \
static void GetPlaneSpacing_WrapperImpl(const void* Object, void* OutValue); \
static void SetPlaneSpacing_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorPlaneType_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorPlaneType(); \
	friend struct Z_Construct_UClass_UCEEffectorPlaneType_Statics; \
public: \
	DECLARE_CLASS(UCEEffectorPlaneType, UCEEffectorBoundType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEEffectorPlaneType)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorPlaneType_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEEffectorPlaneType(UCEEffectorPlaneType&&); \
	UCEEffectorPlaneType(const UCEEffectorPlaneType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorPlaneType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorPlaneType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorPlaneType) \
	CLONEREFFECTOR_API virtual ~UCEEffectorPlaneType();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorPlaneType_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorPlaneType_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorPlaneType_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorPlaneType_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorPlaneType_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorPlaneType_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEEffectorPlaneType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorPlaneType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
