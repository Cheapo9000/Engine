// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneShapeActor.h"

#ifdef ZONEGRAPH_ZoneShapeActor_generated_h
#error "ZoneShapeActor.generated.h already included, missing '#pragma once' in ZoneShapeActor.h"
#endif
#define ZONEGRAPH_ZoneShapeActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AZoneShape ***************************************************************
struct Z_Construct_UClass_AZoneShape_Statics;
ZONEGRAPH_API UClass* Z_Construct_UClass_AZoneShape_NoRegister();

#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZoneShape(); \
	friend struct ::Z_Construct_UClass_AZoneShape_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ZONEGRAPH_API UClass* ::Z_Construct_UClass_AZoneShape_NoRegister(); \
public: \
	DECLARE_CLASS2(AZoneShape, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraph"), Z_Construct_UClass_AZoneShape_NoRegister) \
	DECLARE_SERIALIZER(AZoneShape)


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AZoneShape(AZoneShape&&) = delete; \
	AZoneShape(const AZoneShape&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ZONEGRAPH_API, AZoneShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZoneShape); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZoneShape) \
	ZONEGRAPH_API virtual ~AZoneShape();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeActor_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AZoneShape;

// ********** End Class AZoneShape *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
