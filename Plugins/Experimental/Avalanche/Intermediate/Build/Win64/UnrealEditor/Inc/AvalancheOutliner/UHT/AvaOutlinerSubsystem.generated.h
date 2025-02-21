// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaOutlinerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEOUTLINER_AvaOutlinerSubsystem_generated_h
#error "AvaOutlinerSubsystem.generated.h already included, missing '#pragma once' in AvaOutlinerSubsystem.h"
#endif
#define AVALANCHEOUTLINER_AvaOutlinerSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Public_AvaOutlinerSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaOutlinerSubsystem(); \
	friend struct Z_Construct_UClass_UAvaOutlinerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAvaOutlinerSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheOutliner"), AVALANCHEOUTLINER_API) \
	DECLARE_SERIALIZER(UAvaOutlinerSubsystem)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Public_AvaOutlinerSubsystem_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEOUTLINER_API UAvaOutlinerSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaOutlinerSubsystem(UAvaOutlinerSubsystem&&); \
	UAvaOutlinerSubsystem(const UAvaOutlinerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEOUTLINER_API, UAvaOutlinerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaOutlinerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaOutlinerSubsystem) \
	AVALANCHEOUTLINER_API virtual ~UAvaOutlinerSubsystem();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Public_AvaOutlinerSubsystem_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Public_AvaOutlinerSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Public_AvaOutlinerSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Public_AvaOutlinerSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEOUTLINER_API UClass* StaticClass<class UAvaOutlinerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Public_AvaOutlinerSubsystem_h


#define FOREACH_ENUM_EAVAOUTLINERHIERARCHYCHANGETYPE(op) \
	op(EAvaOutlinerHierarchyChangeType::Detached) \
	op(EAvaOutlinerHierarchyChangeType::Attached) \
	op(EAvaOutlinerHierarchyChangeType::Rearranged) 

enum class EAvaOutlinerHierarchyChangeType : uint8;
template<> struct TIsUEnumClass<EAvaOutlinerHierarchyChangeType> { enum { Value = true }; };
template<> AVALANCHEOUTLINER_API UEnum* StaticEnum<EAvaOutlinerHierarchyChangeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
