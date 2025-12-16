// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGCullPointsOutsideActorBounds.h"

#ifdef PCG_PCGCullPointsOutsideActorBounds_generated_h
#error "PCGCullPointsOutsideActorBounds.generated.h already included, missing '#pragma once' in PCGCullPointsOutsideActorBounds.h"
#endif
#define PCG_PCGCullPointsOutsideActorBounds_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCullPointsOutsideActorBoundsSettings *********************************
struct Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCullPointsOutsideActorBounds_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCullPointsOutsideActorBoundsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCullPointsOutsideActorBoundsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGCullPointsOutsideActorBoundsSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCullPointsOutsideActorBounds_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGCullPointsOutsideActorBoundsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCullPointsOutsideActorBoundsSettings(UPCGCullPointsOutsideActorBoundsSettings&&) = delete; \
	UPCGCullPointsOutsideActorBoundsSettings(const UPCGCullPointsOutsideActorBoundsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGCullPointsOutsideActorBoundsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCullPointsOutsideActorBoundsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCullPointsOutsideActorBoundsSettings) \
	PCG_API virtual ~UPCGCullPointsOutsideActorBoundsSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCullPointsOutsideActorBounds_h_19_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCullPointsOutsideActorBounds_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCullPointsOutsideActorBounds_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCullPointsOutsideActorBounds_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCullPointsOutsideActorBoundsSettings;

// ********** End Class UPCGCullPointsOutsideActorBoundsSettings ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCullPointsOutsideActorBounds_h

// ********** Begin Enum EPCGCullPointsMode ********************************************************
#define FOREACH_ENUM_EPCGCULLPOINTSMODE(op) \
	op(EPCGCullPointsMode::Ordered) \
	op(EPCGCullPointsMode::Unordered) 

enum class EPCGCullPointsMode : uint8;
template<> struct TIsUEnumClass<EPCGCullPointsMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGCullPointsMode>();
// ********** End Enum EPCGCullPointsMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
