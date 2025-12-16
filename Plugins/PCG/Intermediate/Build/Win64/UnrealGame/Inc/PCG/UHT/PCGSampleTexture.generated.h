// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSampleTexture.h"

#ifdef PCG_PCGSampleTexture_generated_h
#error "PCGSampleTexture.generated.h already included, missing '#pragma once' in PCGSampleTexture.h"
#endif
#define PCG_PCGSampleTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSampleTextureSettings ************************************************
struct Z_Construct_UClass_UPCGSampleTextureSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSampleTextureSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSampleTexture_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSampleTextureSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSampleTextureSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSampleTextureSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSampleTextureSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSampleTextureSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSampleTextureSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSampleTexture_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGSampleTextureSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSampleTextureSettings(UPCGSampleTextureSettings&&) = delete; \
	UPCGSampleTextureSettings(const UPCGSampleTextureSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGSampleTextureSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSampleTextureSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSampleTextureSettings) \
	NO_API virtual ~UPCGSampleTextureSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSampleTexture_h_24_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSampleTexture_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSampleTexture_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSampleTexture_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSampleTextureSettings;

// ********** End Class UPCGSampleTextureSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSampleTexture_h

// ********** Begin Enum EPCGTextureMappingMethod **************************************************
#define FOREACH_ENUM_EPCGTEXTUREMAPPINGMETHOD(op) \
	op(EPCGTextureMappingMethod::Planar) \
	op(EPCGTextureMappingMethod::UVCoordinates) 

enum class EPCGTextureMappingMethod : uint8;
template<> struct TIsUEnumClass<EPCGTextureMappingMethod> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGTextureMappingMethod>();
// ********** End Enum EPCGTextureMappingMethod ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
