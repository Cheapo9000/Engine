// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGClusterElement.h"

#ifdef PCG_PCGClusterElement_generated_h
#error "PCGClusterElement.generated.h already included, missing '#pragma once' in PCGClusterElement.h"
#endif
#define PCG_PCGClusterElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGClusterSettings ******************************************************
struct Z_Construct_UClass_UPCGClusterSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGClusterSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGClusterElement_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGClusterSettings(); \
	friend struct ::Z_Construct_UClass_UPCGClusterSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGClusterSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGClusterSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGClusterSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGClusterSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGClusterElement_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGClusterSettings(UPCGClusterSettings&&) = delete; \
	UPCGClusterSettings(const UPCGClusterSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGClusterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGClusterSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGClusterSettings) \
	PCG_API virtual ~UPCGClusterSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGClusterElement_h_23_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGClusterElement_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGClusterElement_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGClusterElement_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGClusterSettings;

// ********** End Class UPCGClusterSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGClusterElement_h

// ********** Begin Enum EPCGClusterAlgorithm ******************************************************
#define FOREACH_ENUM_EPCGCLUSTERALGORITHM(op) \
	op(EPCGClusterAlgorithm::KMeans) \
	op(EPCGClusterAlgorithm::EM) 

enum class EPCGClusterAlgorithm;
template<> struct TIsUEnumClass<EPCGClusterAlgorithm> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGClusterAlgorithm>();
// ********** End Enum EPCGClusterAlgorithm ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
