// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneShapeComponent.h"

#ifdef ZONEGRAPH_ZoneShapeComponent_generated_h
#error "ZoneShapeComponent.generated.h already included, missing '#pragma once' in ZoneShapeComponent.h"
#endif
#define ZONEGRAPH_ZoneShapeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EZoneShapePolygonRoutingType : uint8;
enum class FZoneShapeType : uint8;
struct FZoneGraphTagMask;

// ********** Begin Class UZoneShapeComponent ******************************************************
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPolygonRoutingType); \
	DECLARE_FUNCTION(execSetReverseLaneProfile); \
	DECLARE_FUNCTION(execIsLaneProfileReversed); \
	DECLARE_FUNCTION(execSetTags); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execSetShapeType); \
	DECLARE_FUNCTION(execGetShapeType);


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_41_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UZoneShapeComponent, ZONEGRAPH_API)


struct Z_Construct_UClass_UZoneShapeComponent_Statics;
ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneShapeComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneShapeComponent(); \
	friend struct ::Z_Construct_UClass_UZoneShapeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ZONEGRAPH_API UClass* ::Z_Construct_UClass_UZoneShapeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UZoneShapeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraph"), Z_Construct_UClass_UZoneShapeComponent_NoRegister) \
	DECLARE_SERIALIZER(UZoneShapeComponent) \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_41_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZoneShapeComponent(UZoneShapeComponent&&) = delete; \
	UZoneShapeComponent(const UZoneShapeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ZONEGRAPH_API, UZoneShapeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneShapeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneShapeComponent) \
	ZONEGRAPH_API virtual ~UZoneShapeComponent();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_38_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZoneShapeComponent;

// ********** End Class UZoneShapeComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
