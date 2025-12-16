// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Polygon/PCGClipPaths.h"

#ifdef PCG_PCGClipPaths_generated_h
#error "PCGClipPaths.generated.h already included, missing '#pragma once' in PCGClipPaths.h"
#endif
#define PCG_PCGClipPaths_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGClipPathsSettings ****************************************************
struct Z_Construct_UClass_UPCGClipPathsSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGClipPathsSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGClipPaths_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGClipPathsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGClipPathsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGClipPathsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGClipPathsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGClipPathsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGClipPathsSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGClipPaths_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGClipPathsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGClipPathsSettings(UPCGClipPathsSettings&&) = delete; \
	UPCGClipPathsSettings(const UPCGClipPathsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGClipPathsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGClipPathsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGClipPathsSettings) \
	PCG_API virtual ~UPCGClipPathsSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGClipPaths_h_27_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGClipPaths_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGClipPaths_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGClipPaths_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGClipPathsSettings;

// ********** End Class UPCGClipPathsSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGClipPaths_h

// ********** Begin Enum EPCGClipPathOperation *****************************************************
#define FOREACH_ENUM_EPCGCLIPPATHOPERATION(op) \
	op(EPCGClipPathOperation::Intersection) \
	op(EPCGClipPathOperation::Difference) 

enum class EPCGClipPathOperation : uint8;
template<> struct TIsUEnumClass<EPCGClipPathOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGClipPathOperation>();
// ********** End Enum EPCGClipPathOperation *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
