// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneGraphRenderingComponent.h"

#ifdef ZONEGRAPH_ZoneGraphRenderingComponent_generated_h
#error "ZoneGraphRenderingComponent.generated.h already included, missing '#pragma once' in ZoneGraphRenderingComponent.h"
#endif
#define ZONEGRAPH_ZoneGraphRenderingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UZoneGraphRenderingComponent *********************************************
struct Z_Construct_UClass_UZoneGraphRenderingComponent_Statics;
ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphRenderingComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphRenderingComponent_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneGraphRenderingComponent(); \
	friend struct ::Z_Construct_UClass_UZoneGraphRenderingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ZONEGRAPH_API UClass* ::Z_Construct_UClass_UZoneGraphRenderingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UZoneGraphRenderingComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraph"), Z_Construct_UClass_UZoneGraphRenderingComponent_NoRegister) \
	DECLARE_SERIALIZER(UZoneGraphRenderingComponent)


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphRenderingComponent_h_64_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZoneGraphRenderingComponent(UZoneGraphRenderingComponent&&) = delete; \
	UZoneGraphRenderingComponent(const UZoneGraphRenderingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ZONEGRAPH_API, UZoneGraphRenderingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneGraphRenderingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneGraphRenderingComponent) \
	ZONEGRAPH_API virtual ~UZoneGraphRenderingComponent();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphRenderingComponent_h_61_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphRenderingComponent_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphRenderingComponent_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphRenderingComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZoneGraphRenderingComponent;

// ********** End Class UZoneGraphRenderingComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphRenderingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
