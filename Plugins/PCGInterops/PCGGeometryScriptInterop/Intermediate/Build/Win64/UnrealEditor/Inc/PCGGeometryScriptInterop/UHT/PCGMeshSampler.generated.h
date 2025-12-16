// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGMeshSampler.h"

#ifdef PCGGEOMETRYSCRIPTINTEROP_PCGMeshSampler_generated_h
#error "PCGMeshSampler.generated.h already included, missing '#pragma once' in PCGMeshSampler.h"
#endif
#define PCGGEOMETRYSCRIPTINTEROP_PCGMeshSampler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMeshSamplerSettings **************************************************
struct Z_Construct_UClass_UPCGMeshSamplerSettings_Statics;
PCGGEOMETRYSCRIPTINTEROP_API UClass* Z_Construct_UClass_UPCGMeshSamplerSettings_NoRegister();

#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMeshSamplerSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMeshSamplerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGGEOMETRYSCRIPTINTEROP_API UClass* ::Z_Construct_UClass_UPCGMeshSamplerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMeshSamplerSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGGeometryScriptInterop"), Z_Construct_UClass_UPCGMeshSamplerSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMeshSamplerSettings)


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMeshSamplerSettings(UPCGMeshSamplerSettings&&) = delete; \
	UPCGMeshSamplerSettings(const UPCGMeshSamplerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGGEOMETRYSCRIPTINTEROP_API, UPCGMeshSamplerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMeshSamplerSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGMeshSamplerSettings) \
	PCGGEOMETRYSCRIPTINTEROP_API virtual ~UPCGMeshSamplerSettings();


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h_56_PROLOG
#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMeshSamplerSettings;

// ********** End Class UPCGMeshSamplerSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h

// ********** Begin Enum EPCGMeshSamplingMethod ****************************************************
#define FOREACH_ENUM_EPCGMESHSAMPLINGMETHOD(op) \
	op(EPCGMeshSamplingMethod::OnePointPerTriangle) \
	op(EPCGMeshSamplingMethod::OnePointPerVertex) \
	op(EPCGMeshSamplingMethod::PoissonSampling) 

enum class EPCGMeshSamplingMethod : uint8;
template<> struct TIsUEnumClass<EPCGMeshSamplingMethod> { enum { Value = true }; };
template<> PCGGEOMETRYSCRIPTINTEROP_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMeshSamplingMethod>();
// ********** End Enum EPCGMeshSamplingMethod ******************************************************

// ********** Begin Enum EPCGColorChannel **********************************************************
#define FOREACH_ENUM_EPCGCOLORCHANNEL(op) \
	op(EPCGColorChannel::Red) \
	op(EPCGColorChannel::Green) \
	op(EPCGColorChannel::Blue) \
	op(EPCGColorChannel::Alpha) 

enum class EPCGColorChannel;
template<> struct TIsUEnumClass<EPCGColorChannel> { enum { Value = true }; };
template<> PCGGEOMETRYSCRIPTINTEROP_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGColorChannel>();
// ********** End Enum EPCGColorChannel ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
