// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavSystemConfigOverride.h"

#ifdef NAVIGATIONSYSTEM_NavSystemConfigOverride_generated_h
#error "NavSystemConfigOverride.generated.h already included, missing '#pragma once' in NavSystemConfigOverride.h"
#endif
#define NAVIGATIONSYSTEM_NavSystemConfigOverride_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANavSystemConfigOverride *************************************************
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execApplyChanges);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_ANavSystemConfigOverride_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavSystemConfigOverride_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavSystemConfigOverride(); \
	friend struct ::Z_Construct_UClass_ANavSystemConfigOverride_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_ANavSystemConfigOverride_NoRegister(); \
public: \
	DECLARE_CLASS2(ANavSystemConfigOverride, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_ANavSystemConfigOverride_NoRegister) \
	DECLARE_SERIALIZER(ANavSystemConfigOverride)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANavSystemConfigOverride(ANavSystemConfigOverride&&) = delete; \
	ANavSystemConfigOverride(const ANavSystemConfigOverride&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, ANavSystemConfigOverride); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavSystemConfigOverride); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavSystemConfigOverride) \
	NAVIGATIONSYSTEM_API virtual ~ANavSystemConfigOverride();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_25_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANavSystemConfigOverride;

// ********** End Class ANavSystemConfigOverride ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h

// ********** Begin Enum ENavSystemOverridePolicy **************************************************
#define FOREACH_ENUM_ENAVSYSTEMOVERRIDEPOLICY(op) \
	op(ENavSystemOverridePolicy::Override) \
	op(ENavSystemOverridePolicy::Append) \
	op(ENavSystemOverridePolicy::Skip) 

enum class ENavSystemOverridePolicy : uint8;
template<> struct TIsUEnumClass<ENavSystemOverridePolicy> { enum { Value = true }; };
template<> NAVIGATIONSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<ENavSystemOverridePolicy>();
// ********** End Enum ENavSystemOverridePolicy ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
