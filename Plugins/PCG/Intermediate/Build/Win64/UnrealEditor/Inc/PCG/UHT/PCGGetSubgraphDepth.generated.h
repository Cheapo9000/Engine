// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGGetSubgraphDepth.h"

#ifdef PCG_PCGGetSubgraphDepth_generated_h
#error "PCGGetSubgraphDepth.generated.h already included, missing '#pragma once' in PCGGetSubgraphDepth.h"
#endif
#define PCG_PCGGetSubgraphDepth_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGetSubgraphDepthSettings *********************************************
struct Z_Construct_UClass_UPCGGetSubgraphDepthSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGetSubgraphDepthSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetSubgraphDepth_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGetSubgraphDepthSettings(); \
	friend struct ::Z_Construct_UClass_UPCGGetSubgraphDepthSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGetSubgraphDepthSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGetSubgraphDepthSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGetSubgraphDepthSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGGetSubgraphDepthSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetSubgraphDepth_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGetSubgraphDepthSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGetSubgraphDepthSettings(UPCGGetSubgraphDepthSettings&&) = delete; \
	UPCGGetSubgraphDepthSettings(const UPCGGetSubgraphDepthSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGetSubgraphDepthSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGetSubgraphDepthSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGetSubgraphDepthSettings) \
	PCG_API virtual ~UPCGGetSubgraphDepthSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetSubgraphDepth_h_18_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetSubgraphDepth_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetSubgraphDepth_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetSubgraphDepth_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGetSubgraphDepthSettings;

// ********** End Class UPCGGetSubgraphDepthSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetSubgraphDepth_h

// ********** Begin Enum EPCGSubgraphDepthMode *****************************************************
#define FOREACH_ENUM_EPCGSUBGRAPHDEPTHMODE(op) \
	op(EPCGSubgraphDepthMode::Depth) \
	op(EPCGSubgraphDepthMode::RecursiveDepth) 

enum class EPCGSubgraphDepthMode : uint8;
template<> struct TIsUEnumClass<EPCGSubgraphDepthMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSubgraphDepthMode>();
// ********** End Enum EPCGSubgraphDepthMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
