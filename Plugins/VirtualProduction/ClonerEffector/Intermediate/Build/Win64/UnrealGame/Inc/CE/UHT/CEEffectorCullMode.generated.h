// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Modes/CEEffectorCullMode.h"

#ifdef CLONEREFFECTOR_CEEffectorCullMode_generated_h
#error "CEEffectorCullMode.generated.h already included, missing '#pragma once' in CEEffectorCullMode.h"
#endif
#define CLONEREFFECTOR_CEEffectorCullMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECEEffectorCullModeBehavior : uint8;

// ********** Begin Class UCEEffectorCullMode ******************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorCullMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execGetBehavior); \
	DECLARE_FUNCTION(execSetBehavior);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorCullMode_h_24_ACCESSORS \
static void GetBehavior_WrapperImpl(const void* Object, void* OutValue); \
static void SetBehavior_WrapperImpl(void* Object, const void* InValue); \
static void GetScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetScale_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEEffectorCullMode_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEEffectorCullMode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorCullMode_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorCullMode(); \
	friend struct ::Z_Construct_UClass_UCEEffectorCullMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEEffectorCullMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEEffectorCullMode, UCEEffectorModeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEEffectorCullMode_NoRegister) \
	DECLARE_SERIALIZER(UCEEffectorCullMode)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorCullMode_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEEffectorCullMode(UCEEffectorCullMode&&) = delete; \
	UCEEffectorCullMode(const UCEEffectorCullMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorCullMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorCullMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorCullMode) \
	CLONEREFFECTOR_API virtual ~UCEEffectorCullMode();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorCullMode_h_21_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorCullMode_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorCullMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorCullMode_h_24_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorCullMode_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorCullMode_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEEffectorCullMode;

// ********** End Class UCEEffectorCullMode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorCullMode_h

// ********** Begin Enum ECEEffectorCullModeBehavior ***********************************************
#define FOREACH_ENUM_ECEEFFECTORCULLMODEBEHAVIOR(op) \
	op(ECEEffectorCullModeBehavior::Kill) \
	op(ECEEffectorCullModeBehavior::Hide) 

enum class ECEEffectorCullModeBehavior : uint8;
template<> struct TIsUEnumClass<ECEEffectorCullModeBehavior> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEEffectorCullModeBehavior>();
// ********** End Enum ECEEffectorCullModeBehavior *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
