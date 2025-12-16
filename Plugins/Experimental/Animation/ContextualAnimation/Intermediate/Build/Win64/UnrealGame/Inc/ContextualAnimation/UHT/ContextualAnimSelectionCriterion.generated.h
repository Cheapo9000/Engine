// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimSelectionCriterion.h"

#ifdef CONTEXTUALANIMATION_ContextualAnimSelectionCriterion_generated_h
#error "ContextualAnimSelectionCriterion.generated.h already included, missing '#pragma once' in ContextualAnimSelectionCriterion.h"
#endif
#define CONTEXTUALANIMATION_ContextualAnimSelectionCriterion_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UContextualAnimSceneAsset;
struct FContextualAnimSceneBindingContext;

// ********** Begin Class UContextualAnimSelectionCriterion ****************************************
struct Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics;
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimSelectionCriterion(); \
	friend struct ::Z_Construct_UClass_UContextualAnimSelectionCriterion_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTEXTUALANIMATION_API UClass* ::Z_Construct_UClass_UContextualAnimSelectionCriterion_NoRegister(); \
public: \
	DECLARE_CLASS2(UContextualAnimSelectionCriterion, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), Z_Construct_UClass_UContextualAnimSelectionCriterion_NoRegister) \
	DECLARE_SERIALIZER(UContextualAnimSelectionCriterion)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContextualAnimSelectionCriterion(UContextualAnimSelectionCriterion&&) = delete; \
	UContextualAnimSelectionCriterion(const UContextualAnimSelectionCriterion&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTEXTUALANIMATION_API, UContextualAnimSelectionCriterion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSelectionCriterion); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSelectionCriterion) \
	CONTEXTUALANIMATION_API virtual ~UContextualAnimSelectionCriterion();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContextualAnimSelectionCriterion;

// ********** End Class UContextualAnimSelectionCriterion ******************************************

// ********** Begin Class UContextualAnimSelectionCriterion_Blueprint ******************************
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSceneAsset);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_45_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_Statics;
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimSelectionCriterion_Blueprint(); \
	friend struct ::Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTEXTUALANIMATION_API UClass* ::Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UContextualAnimSelectionCriterion_Blueprint, UContextualAnimSelectionCriterion, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), Z_Construct_UClass_UContextualAnimSelectionCriterion_Blueprint_NoRegister) \
	DECLARE_SERIALIZER(UContextualAnimSelectionCriterion_Blueprint)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContextualAnimSelectionCriterion_Blueprint(UContextualAnimSelectionCriterion_Blueprint&&) = delete; \
	UContextualAnimSelectionCriterion_Blueprint(const UContextualAnimSelectionCriterion_Blueprint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTEXTUALANIMATION_API, UContextualAnimSelectionCriterion_Blueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSelectionCriterion_Blueprint); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSelectionCriterion_Blueprint) \
	CONTEXTUALANIMATION_API virtual ~UContextualAnimSelectionCriterion_Blueprint();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_45_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContextualAnimSelectionCriterion_Blueprint;

// ********** End Class UContextualAnimSelectionCriterion_Blueprint ********************************

// ********** Begin Class UContextualAnimSelectionCriterion_TriggerArea ****************************
struct Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics;
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimSelectionCriterion_TriggerArea(); \
	friend struct ::Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTEXTUALANIMATION_API UClass* ::Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_NoRegister(); \
public: \
	DECLARE_CLASS2(UContextualAnimSelectionCriterion_TriggerArea, UContextualAnimSelectionCriterion, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), Z_Construct_UClass_UContextualAnimSelectionCriterion_TriggerArea_NoRegister) \
	DECLARE_SERIALIZER(UContextualAnimSelectionCriterion_TriggerArea)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_66_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContextualAnimSelectionCriterion_TriggerArea(UContextualAnimSelectionCriterion_TriggerArea&&) = delete; \
	UContextualAnimSelectionCriterion_TriggerArea(const UContextualAnimSelectionCriterion_TriggerArea&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTEXTUALANIMATION_API, UContextualAnimSelectionCriterion_TriggerArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSelectionCriterion_TriggerArea); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSelectionCriterion_TriggerArea) \
	CONTEXTUALANIMATION_API virtual ~UContextualAnimSelectionCriterion_TriggerArea();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_63_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContextualAnimSelectionCriterion_TriggerArea;

// ********** End Class UContextualAnimSelectionCriterion_TriggerArea ******************************

// ********** Begin Class UContextualAnimSelectionCriterion_Cone ***********************************
struct Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics;
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimSelectionCriterion_Cone(); \
	friend struct ::Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTEXTUALANIMATION_API UClass* ::Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_NoRegister(); \
public: \
	DECLARE_CLASS2(UContextualAnimSelectionCriterion_Cone, UContextualAnimSelectionCriterion, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), Z_Construct_UClass_UContextualAnimSelectionCriterion_Cone_NoRegister) \
	DECLARE_SERIALIZER(UContextualAnimSelectionCriterion_Cone)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_97_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContextualAnimSelectionCriterion_Cone(UContextualAnimSelectionCriterion_Cone&&) = delete; \
	UContextualAnimSelectionCriterion_Cone(const UContextualAnimSelectionCriterion_Cone&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTEXTUALANIMATION_API, UContextualAnimSelectionCriterion_Cone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSelectionCriterion_Cone); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSelectionCriterion_Cone) \
	CONTEXTUALANIMATION_API virtual ~UContextualAnimSelectionCriterion_Cone();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_94_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContextualAnimSelectionCriterion_Cone;

// ********** End Class UContextualAnimSelectionCriterion_Cone *************************************

// ********** Begin Class UContextualAnimSelectionCriterion_Distance *******************************
struct Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics;
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_131_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimSelectionCriterion_Distance(); \
	friend struct ::Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTEXTUALANIMATION_API UClass* ::Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_NoRegister(); \
public: \
	DECLARE_CLASS2(UContextualAnimSelectionCriterion_Distance, UContextualAnimSelectionCriterion, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), Z_Construct_UClass_UContextualAnimSelectionCriterion_Distance_NoRegister) \
	DECLARE_SERIALIZER(UContextualAnimSelectionCriterion_Distance)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_131_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContextualAnimSelectionCriterion_Distance(UContextualAnimSelectionCriterion_Distance&&) = delete; \
	UContextualAnimSelectionCriterion_Distance(const UContextualAnimSelectionCriterion_Distance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTEXTUALANIMATION_API, UContextualAnimSelectionCriterion_Distance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSelectionCriterion_Distance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSelectionCriterion_Distance) \
	CONTEXTUALANIMATION_API virtual ~UContextualAnimSelectionCriterion_Distance();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_128_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_131_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_131_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h_131_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContextualAnimSelectionCriterion_Distance;

// ********** End Class UContextualAnimSelectionCriterion_Distance *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSelectionCriterion_h

// ********** Begin Enum EContextualAnimCriterionType **********************************************
#define FOREACH_ENUM_ECONTEXTUALANIMCRITERIONTYPE(op) \
	op(EContextualAnimCriterionType::Spatial) \
	op(EContextualAnimCriterionType::Other) 

enum class EContextualAnimCriterionType : uint8;
template<> struct TIsUEnumClass<EContextualAnimCriterionType> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EContextualAnimCriterionType>();
// ********** End Enum EContextualAnimCriterionType ************************************************

// ********** Begin Enum EContextualAnimCriterionConeMode ******************************************
#define FOREACH_ENUM_ECONTEXTUALANIMCRITERIONCONEMODE(op) \
	op(EContextualAnimCriterionConeMode::ToPrimary) \
	op(EContextualAnimCriterionConeMode::FromPrimary) 

enum class EContextualAnimCriterionConeMode : uint8;
template<> struct TIsUEnumClass<EContextualAnimCriterionConeMode> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EContextualAnimCriterionConeMode>();
// ********** End Enum EContextualAnimCriterionConeMode ********************************************

// ********** Begin Enum EContextualAnimCriterionDistanceMode **************************************
#define FOREACH_ENUM_ECONTEXTUALANIMCRITERIONDISTANCEMODE(op) \
	op(EContextualAnimCriterionDistanceMode::Distance_3D) \
	op(EContextualAnimCriterionDistanceMode::Distance_2D) 

enum class EContextualAnimCriterionDistanceMode : uint8;
template<> struct TIsUEnumClass<EContextualAnimCriterionDistanceMode> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EContextualAnimCriterionDistanceMode>();
// ********** End Enum EContextualAnimCriterionDistanceMode ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
