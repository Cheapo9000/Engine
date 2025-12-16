// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlendProfileStandalone.h"

#ifdef HIERARCHYTABLEANIMATIONRUNTIME_BlendProfileStandalone_generated_h
#error "BlendProfileStandalone.generated.h already included, missing '#pragma once' in BlendProfileStandalone.h"
#endif
#define HIERARCHYTABLEANIMATIONRUNTIME_BlendProfileStandalone_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlendProfileStandalone **************************************************
struct Z_Construct_UClass_UBlendProfileStandalone_Statics;
HIERARCHYTABLEANIMATIONRUNTIME_API UClass* Z_Construct_UClass_UBlendProfileStandalone_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_HierarchyTableAnimation_Source_Runtime_Public_BlendProfileStandalone_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendProfileStandalone(); \
	friend struct ::Z_Construct_UClass_UBlendProfileStandalone_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HIERARCHYTABLEANIMATIONRUNTIME_API UClass* ::Z_Construct_UClass_UBlendProfileStandalone_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlendProfileStandalone, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HierarchyTableAnimationRuntime"), Z_Construct_UClass_UBlendProfileStandalone_NoRegister) \
	DECLARE_SERIALIZER(UBlendProfileStandalone)


#define FID_Engine_Plugins_Experimental_Animation_HierarchyTableAnimation_Source_Runtime_Public_BlendProfileStandalone_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HIERARCHYTABLEANIMATIONRUNTIME_API UBlendProfileStandalone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlendProfileStandalone(UBlendProfileStandalone&&) = delete; \
	UBlendProfileStandalone(const UBlendProfileStandalone&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HIERARCHYTABLEANIMATIONRUNTIME_API, UBlendProfileStandalone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendProfileStandalone); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendProfileStandalone) \
	HIERARCHYTABLEANIMATIONRUNTIME_API virtual ~UBlendProfileStandalone();


#define FID_Engine_Plugins_Experimental_Animation_HierarchyTableAnimation_Source_Runtime_Public_BlendProfileStandalone_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_HierarchyTableAnimation_Source_Runtime_Public_BlendProfileStandalone_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_HierarchyTableAnimation_Source_Runtime_Public_BlendProfileStandalone_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_HierarchyTableAnimation_Source_Runtime_Public_BlendProfileStandalone_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlendProfileStandalone;

// ********** End Class UBlendProfileStandalone ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_HierarchyTableAnimation_Source_Runtime_Public_BlendProfileStandalone_h

// ********** Begin Enum EBlendProfileStandaloneType ***********************************************
#define FOREACH_ENUM_EBLENDPROFILESTANDALONETYPE(op) \
	op(EBlendProfileStandaloneType::WeightFactor) \
	op(EBlendProfileStandaloneType::TimeFactor) \
	op(EBlendProfileStandaloneType::BlendMask) 

enum class EBlendProfileStandaloneType;
template<> struct TIsUEnumClass<EBlendProfileStandaloneType> { enum { Value = true }; };
template<> HIERARCHYTABLEANIMATIONRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlendProfileStandaloneType>();
// ********** End Enum EBlendProfileStandaloneType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
