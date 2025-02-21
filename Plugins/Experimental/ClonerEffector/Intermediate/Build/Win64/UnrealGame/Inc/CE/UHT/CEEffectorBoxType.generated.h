// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Types/CEEffectorBoxType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLONEREFFECTOR_CEEffectorBoxType_generated_h
#error "CEEffectorBoxType.generated.h already included, missing '#pragma once' in CEEffectorBoxType.h"
#endif
#define CLONEREFFECTOR_CEEffectorBoxType_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoxType_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOuterExtent); \
	DECLARE_FUNCTION(execSetOuterExtent); \
	DECLARE_FUNCTION(execGetInnerExtent); \
	DECLARE_FUNCTION(execSetInnerExtent);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoxType_h_13_ACCESSORS \
static void GetInnerExtent_WrapperImpl(const void* Object, void* OutValue); \
static void SetInnerExtent_WrapperImpl(void* Object, const void* InValue); \
static void GetOuterExtent_WrapperImpl(const void* Object, void* OutValue); \
static void SetOuterExtent_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoxType_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorBoxType(); \
	friend struct Z_Construct_UClass_UCEEffectorBoxType_Statics; \
public: \
	DECLARE_CLASS(UCEEffectorBoxType, UCEEffectorBoundType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEEffectorBoxType)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoxType_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEEffectorBoxType(UCEEffectorBoxType&&); \
	UCEEffectorBoxType(const UCEEffectorBoxType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorBoxType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorBoxType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorBoxType) \
	CLONEREFFECTOR_API virtual ~UCEEffectorBoxType();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoxType_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoxType_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoxType_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoxType_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoxType_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoxType_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEEffectorBoxType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoxType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
