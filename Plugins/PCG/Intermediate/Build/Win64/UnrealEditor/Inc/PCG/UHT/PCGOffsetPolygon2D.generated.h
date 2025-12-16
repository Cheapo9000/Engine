// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Polygon/PCGOffsetPolygon2D.h"

#ifdef PCG_PCGOffsetPolygon2D_generated_h
#error "PCGOffsetPolygon2D.generated.h already included, missing '#pragma once' in PCGOffsetPolygon2D.h"
#endif
#define PCG_PCGOffsetPolygon2D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGOffsetPolygon2DSettings **********************************************
struct Z_Construct_UClass_UPCGOffsetPolygon2DSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGOffsetPolygon2DSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGOffsetPolygon2D_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGOffsetPolygon2DSettings(); \
	friend struct ::Z_Construct_UClass_UPCGOffsetPolygon2DSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGOffsetPolygon2DSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGOffsetPolygon2DSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGOffsetPolygon2DSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGOffsetPolygon2DSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGOffsetPolygon2D_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGOffsetPolygon2DSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGOffsetPolygon2DSettings(UPCGOffsetPolygon2DSettings&&) = delete; \
	UPCGOffsetPolygon2DSettings(const UPCGOffsetPolygon2DSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGOffsetPolygon2DSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGOffsetPolygon2DSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGOffsetPolygon2DSettings) \
	PCG_API virtual ~UPCGOffsetPolygon2DSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGOffsetPolygon2D_h_28_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGOffsetPolygon2D_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGOffsetPolygon2D_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGOffsetPolygon2D_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGOffsetPolygon2DSettings;

// ********** End Class UPCGOffsetPolygon2DSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGOffsetPolygon2D_h

// ********** Begin Enum EPCGPolygonOffsetOperation ************************************************
#define FOREACH_ENUM_EPCGPOLYGONOFFSETOPERATION(op) \
	op(EPCGPolygonOffsetOperation::Offset) \
	op(EPCGPolygonOffsetOperation::Open) \
	op(EPCGPolygonOffsetOperation::Close) 

enum class EPCGPolygonOffsetOperation;
template<> struct TIsUEnumClass<EPCGPolygonOffsetOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPolygonOffsetOperation>();
// ********** End Enum EPCGPolygonOffsetOperation **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
