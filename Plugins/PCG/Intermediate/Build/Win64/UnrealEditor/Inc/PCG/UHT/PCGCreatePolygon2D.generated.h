// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Polygon/PCGCreatePolygon2D.h"

#ifdef PCG_PCGCreatePolygon2D_generated_h
#error "PCGCreatePolygon2D.generated.h already included, missing '#pragma once' in PCGCreatePolygon2D.h"
#endif
#define PCG_PCGCreatePolygon2D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCreatePolygon2DSettings **********************************************
struct Z_Construct_UClass_UPCGCreatePolygon2DSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCreatePolygon2DSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGCreatePolygon2D_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCreatePolygon2DSettings(); \
	friend struct ::Z_Construct_UClass_UPCGCreatePolygon2DSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCreatePolygon2DSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCreatePolygon2DSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCreatePolygon2DSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGCreatePolygon2DSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGCreatePolygon2D_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCreatePolygon2DSettings(UPCGCreatePolygon2DSettings&&) = delete; \
	UPCGCreatePolygon2DSettings(const UPCGCreatePolygon2DSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGCreatePolygon2DSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCreatePolygon2DSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGCreatePolygon2DSettings) \
	PCG_API virtual ~UPCGCreatePolygon2DSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGCreatePolygon2D_h_29_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGCreatePolygon2D_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGCreatePolygon2D_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGCreatePolygon2D_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCreatePolygon2DSettings;

// ********** End Class UPCGCreatePolygon2DSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGCreatePolygon2D_h

// ********** Begin Enum EPCGCreatePolygonInputType ************************************************
#define FOREACH_ENUM_EPCGCREATEPOLYGONINPUTTYPE(op) \
	op(EPCGCreatePolygonInputType::Automatic) \
	op(EPCGCreatePolygonInputType::ForceOpen) \
	op(EPCGCreatePolygonInputType::ForceClosed) 

enum class EPCGCreatePolygonInputType : uint8;
template<> struct TIsUEnumClass<EPCGCreatePolygonInputType> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGCreatePolygonInputType>();
// ********** End Enum EPCGCreatePolygonInputType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
