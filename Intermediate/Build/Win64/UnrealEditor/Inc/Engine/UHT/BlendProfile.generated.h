// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/BlendProfile.h"

#ifdef ENGINE_BlendProfile_generated_h
#error "BlendProfile.generated.h already included, missing '#pragma once' in BlendProfile.h"
#endif
#define ENGINE_BlendProfile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlendProfileBoneEntry ********************************************
struct Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlendProfileBoneEntry;
// ********** End ScriptStruct FBlendProfileBoneEntry **********************************************

// ********** Begin Interface UBlendProfileProviderInterface ***************************************
struct Z_Construct_UClass_UBlendProfileProviderInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBlendProfileProviderInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlendProfileProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlendProfileProviderInterface(UBlendProfileProviderInterface&&) = delete; \
	UBlendProfileProviderInterface(const UBlendProfileProviderInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendProfileProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendProfileProviderInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendProfileProviderInterface) \
	virtual ~UBlendProfileProviderInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_75_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBlendProfileProviderInterface(); \
	friend struct ::Z_Construct_UClass_UBlendProfileProviderInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBlendProfileProviderInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlendProfileProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBlendProfileProviderInterface_NoRegister) \
	DECLARE_SERIALIZER(UBlendProfileProviderInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_75_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_75_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_75_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_75_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBlendProfileProviderInterface() {} \
public: \
	typedef UBlendProfileProviderInterface UClassType; \
	typedef IBlendProfileProviderInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_72_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_75_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlendProfileProviderInterface;

// ********** End Interface UBlendProfileProviderInterface *****************************************

// ********** Begin ScriptStruct FBlendProfileInterfaceWrapper *************************************
struct Z_Construct_UScriptStruct_FBlendProfileInterfaceWrapper_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendProfileInterfaceWrapper_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlendProfileInterfaceWrapper;
// ********** End ScriptStruct FBlendProfileInterfaceWrapper ***************************************

// ********** Begin Class UBlendProfile ************************************************************
struct Z_Construct_UClass_UBlendProfile_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendProfile(); \
	friend struct ::Z_Construct_UClass_UBlendProfile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBlendProfile_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlendProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBlendProfile_NoRegister) \
	DECLARE_SERIALIZER(UBlendProfile)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_135_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlendProfile(UBlendProfile&&) = delete; \
	UBlendProfile(const UBlendProfile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendProfile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlendProfile) \
	ENGINE_API virtual ~UBlendProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_130_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_135_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_135_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlendProfile;

// ********** End Class UBlendProfile **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h

// ********** Begin Enum EBlendProfileMode *********************************************************
#define FOREACH_ENUM_EBLENDPROFILEMODE(op) \
	op(EBlendProfileMode::TimeFactor) \
	op(EBlendProfileMode::WeightFactor) \
	op(EBlendProfileMode::BlendMask) 

enum class EBlendProfileMode : uint8;
template<> struct TIsUEnumClass<EBlendProfileMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlendProfileMode>();
// ********** End Enum EBlendProfileMode ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
