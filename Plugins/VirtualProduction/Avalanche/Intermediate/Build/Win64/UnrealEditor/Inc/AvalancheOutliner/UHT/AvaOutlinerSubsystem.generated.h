// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaOutlinerSubsystem.h"

#ifdef AVALANCHEOUTLINER_AvaOutlinerSubsystem_generated_h
#error "AvaOutlinerSubsystem.generated.h already included, missing '#pragma once' in AvaOutlinerSubsystem.h"
#endif
#define AVALANCHEOUTLINER_AvaOutlinerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaOutlinerSubsystem ****************************************************
struct Z_Construct_UClass_UAvaOutlinerSubsystem_Statics;
AVALANCHEOUTLINER_API UClass* Z_Construct_UClass_UAvaOutlinerSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheOutliner_Public_AvaOutlinerSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaOutlinerSubsystem(); \
	friend struct ::Z_Construct_UClass_UAvaOutlinerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEOUTLINER_API UClass* ::Z_Construct_UClass_UAvaOutlinerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaOutlinerSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheOutliner"), Z_Construct_UClass_UAvaOutlinerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAvaOutlinerSubsystem)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheOutliner_Public_AvaOutlinerSubsystem_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEOUTLINER_API UAvaOutlinerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaOutlinerSubsystem(UAvaOutlinerSubsystem&&) = delete; \
	UAvaOutlinerSubsystem(const UAvaOutlinerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEOUTLINER_API, UAvaOutlinerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaOutlinerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaOutlinerSubsystem) \
	AVALANCHEOUTLINER_API virtual ~UAvaOutlinerSubsystem();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheOutliner_Public_AvaOutlinerSubsystem_h_25_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheOutliner_Public_AvaOutlinerSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheOutliner_Public_AvaOutlinerSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheOutliner_Public_AvaOutlinerSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaOutlinerSubsystem;

// ********** End Class UAvaOutlinerSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheOutliner_Public_AvaOutlinerSubsystem_h

// ********** Begin Enum EAvaOutlinerHierarchyChangeType *******************************************
#define FOREACH_ENUM_EAVAOUTLINERHIERARCHYCHANGETYPE(op) \
	op(EAvaOutlinerHierarchyChangeType::Detached) \
	op(EAvaOutlinerHierarchyChangeType::Attached) \
	op(EAvaOutlinerHierarchyChangeType::Rearranged) 

enum class EAvaOutlinerHierarchyChangeType : uint8;
template<> struct TIsUEnumClass<EAvaOutlinerHierarchyChangeType> { enum { Value = true }; };
template<> AVALANCHEOUTLINER_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaOutlinerHierarchyChangeType>();
// ********** End Enum EAvaOutlinerHierarchyChangeType *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
