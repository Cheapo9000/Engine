// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Types/CEEffectorBoundType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECEClonerEasing : uint8;
#ifdef CLONEREFFECTOR_CEEffectorBoundType_generated_h
#error "CEEffectorBoundType.generated.h already included, missing '#pragma once' in CEEffectorBoundType.h"
#endif
#define CLONEREFFECTOR_CEEffectorBoundType_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoundType_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEasing); \
	DECLARE_FUNCTION(execSetEasing); \
	DECLARE_FUNCTION(execGetInvertType); \
	DECLARE_FUNCTION(execSetInvertType);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoundType_h_13_ACCESSORS \
static void GetbInvertType_WrapperImpl(const void* Object, void* OutValue); \
static void SetbInvertType_WrapperImpl(void* Object, const void* InValue); \
static void GetEasing_WrapperImpl(const void* Object, void* OutValue); \
static void SetEasing_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoundType_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorBoundType(); \
	friend struct Z_Construct_UClass_UCEEffectorBoundType_Statics; \
public: \
	DECLARE_CLASS(UCEEffectorBoundType, UCEEffectorTypeBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEEffectorBoundType)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoundType_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEEffectorBoundType(UCEEffectorBoundType&&); \
	UCEEffectorBoundType(const UCEEffectorBoundType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorBoundType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorBoundType); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorBoundType) \
	CLONEREFFECTOR_API virtual ~UCEEffectorBoundType();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoundType_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoundType_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoundType_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoundType_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoundType_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoundType_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEEffectorBoundType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorBoundType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
