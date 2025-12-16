// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGGetExecutionContext.h"

#ifdef PCG_PCGGetExecutionContext_generated_h
#error "PCGGetExecutionContext.generated.h already included, missing '#pragma once' in PCGGetExecutionContext.h"
#endif
#define PCG_PCGGetExecutionContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGetExecutionContextSettings ******************************************
struct Z_Construct_UClass_UPCGGetExecutionContextSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGetExecutionContextSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetExecutionContext_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGetExecutionContextSettings(); \
	friend struct ::Z_Construct_UClass_UPCGGetExecutionContextSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGetExecutionContextSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGetExecutionContextSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGetExecutionContextSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGGetExecutionContextSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetExecutionContext_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGetExecutionContextSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGetExecutionContextSettings(UPCGGetExecutionContextSettings&&) = delete; \
	UPCGGetExecutionContextSettings(const UPCGGetExecutionContextSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGetExecutionContextSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGetExecutionContextSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGetExecutionContextSettings) \
	PCG_API virtual ~UPCGGetExecutionContextSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetExecutionContext_h_28_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetExecutionContext_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetExecutionContext_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetExecutionContext_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGetExecutionContextSettings;

// ********** End Class UPCGGetExecutionContextSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetExecutionContext_h

// ********** Begin Enum EPCGGetExecutionContextMode ***********************************************
#define FOREACH_ENUM_EPCGGETEXECUTIONCONTEXTMODE(op) \
	op(EPCGGetExecutionContextMode::IsEditor) \
	op(EPCGGetExecutionContextMode::IsRuntime) \
	op(EPCGGetExecutionContextMode::IsOriginal) \
	op(EPCGGetExecutionContextMode::IsLocal) \
	op(EPCGGetExecutionContextMode::IsPartitioned) \
	op(EPCGGetExecutionContextMode::IsRuntimeGeneration) \
	op(EPCGGetExecutionContextMode::IsDedicatedServer) \
	op(EPCGGetExecutionContextMode::IsListenServer) \
	op(EPCGGetExecutionContextMode::HasAuthority) \
	op(EPCGGetExecutionContextMode::IsBuilder) \
	op(EPCGGetExecutionContextMode::TrackingPriority) \
	op(EPCGGetExecutionContextMode::IsGameWorld) 

enum class EPCGGetExecutionContextMode : uint8;
template<> struct TIsUEnumClass<EPCGGetExecutionContextMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGGetExecutionContextMode>();
// ********** End Enum EPCGGetExecutionContextMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
