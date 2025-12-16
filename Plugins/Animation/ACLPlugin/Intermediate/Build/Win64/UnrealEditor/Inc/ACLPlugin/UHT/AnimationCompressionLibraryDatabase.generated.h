// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationCompressionLibraryDatabase.h"

#ifdef ACLPLUGIN_AnimationCompressionLibraryDatabase_generated_h
#error "AnimationCompressionLibraryDatabase.generated.h already included, missing '#pragma once' in AnimationCompressionLibraryDatabase.h"
#endif
#define ACLPLUGIN_AnimationCompressionLibraryDatabase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationCompressionLibraryDatabase;
class UObject;
enum class ACLVisualFidelity : uint8;
enum class ACLVisualFidelityChangeResult : uint8;
struct FLatentActionInfo;

// ********** Begin Class UAnimationCompressionLibraryDatabase *************************************
#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_53_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetVisualFidelity); \
	DECLARE_FUNCTION(execSetVisualFidelity);


#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_53_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimationCompressionLibraryDatabase, ACLPLUGIN_API)


struct Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics;
ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabase_NoRegister();

#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationCompressionLibraryDatabase(); \
	friend struct ::Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACLPLUGIN_API UClass* ::Z_Construct_UClass_UAnimationCompressionLibraryDatabase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationCompressionLibraryDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ACLPlugin"), Z_Construct_UClass_UAnimationCompressionLibraryDatabase_NoRegister) \
	DECLARE_SERIALIZER(UAnimationCompressionLibraryDatabase) \
	FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_53_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACLPLUGIN_API UAnimationCompressionLibraryDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationCompressionLibraryDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACLPLUGIN_API, UAnimationCompressionLibraryDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationCompressionLibraryDatabase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationCompressionLibraryDatabase(UAnimationCompressionLibraryDatabase&&) = delete; \
	UAnimationCompressionLibraryDatabase(const UAnimationCompressionLibraryDatabase&) = delete; \
	ACLPLUGIN_API virtual ~UAnimationCompressionLibraryDatabase();


#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_50_PROLOG
#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_53_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_53_INCLASS \
	FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationCompressionLibraryDatabase;

// ********** End Class UAnimationCompressionLibraryDatabase ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h

// ********** Begin Enum ACLVisualFidelity *********************************************************
#define FOREACH_ENUM_ACLVISUALFIDELITY(op) \
	op(ACLVisualFidelity::Highest) \
	op(ACLVisualFidelity::Medium) \
	op(ACLVisualFidelity::Lowest) 

enum class ACLVisualFidelity : uint8;
template<> struct TIsUEnumClass<ACLVisualFidelity> { enum { Value = true }; };
template<> ACLPLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<ACLVisualFidelity>();
// ********** End Enum ACLVisualFidelity ***********************************************************

// ********** Begin Enum ACLVisualFidelityChangeResult *********************************************
#define FOREACH_ENUM_ACLVISUALFIDELITYCHANGERESULT(op) \
	op(ACLVisualFidelityChangeResult::Dispatched) \
	op(ACLVisualFidelityChangeResult::Completed) \
	op(ACLVisualFidelityChangeResult::Failed) 

enum class ACLVisualFidelityChangeResult : uint8;
template<> struct TIsUEnumClass<ACLVisualFidelityChangeResult> { enum { Value = true }; };
template<> ACLPLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<ACLVisualFidelityChangeResult>();
// ********** End Enum ACLVisualFidelityChangeResult ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
