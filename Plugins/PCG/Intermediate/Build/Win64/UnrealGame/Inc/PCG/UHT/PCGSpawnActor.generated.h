// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSpawnActor.h"

#ifdef PCG_PCGSpawnActor_generated_h
#error "PCGSpawnActor.generated.h already included, missing '#pragma once' in PCGSpawnActor.h"
#endif
#define PCG_PCGSpawnActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSpawnActorSettings ***************************************************
struct Z_Construct_UClass_UPCGSpawnActorSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSpawnActorSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSpawnActorSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSpawnActorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSpawnActorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSpawnActorSettings, UPCGBaseSubgraphSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSpawnActorSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSpawnActorSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSpawnActorSettings(UPCGSpawnActorSettings&&) = delete; \
	UPCGSpawnActorSettings(const UPCGSpawnActorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSpawnActorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSpawnActorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSpawnActorSettings) \
	PCG_API virtual ~UPCGSpawnActorSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_40_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSpawnActorSettings;

// ********** End Class UPCGSpawnActorSettings *****************************************************

// ********** Begin Class UPCGSpawnActorNode *******************************************************
struct Z_Construct_UClass_UPCGSpawnActorNode_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSpawnActorNode_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSpawnActorNode(); \
	friend struct ::Z_Construct_UClass_UPCGSpawnActorNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSpawnActorNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSpawnActorNode, UPCGBaseSubgraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSpawnActorNode_NoRegister) \
	DECLARE_SERIALIZER(UPCGSpawnActorNode)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_184_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGSpawnActorNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSpawnActorNode(UPCGSpawnActorNode&&) = delete; \
	UPCGSpawnActorNode(const UPCGSpawnActorNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGSpawnActorNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSpawnActorNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSpawnActorNode) \
	NO_API virtual ~UPCGSpawnActorNode();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_181_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_184_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h_184_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSpawnActorNode;

// ********** End Class UPCGSpawnActorNode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnActor_h

// ********** Begin Enum EPCGSpawnActorOption ******************************************************
#define FOREACH_ENUM_EPCGSPAWNACTOROPTION(op) \
	op(EPCGSpawnActorOption::CollapseActors) \
	op(EPCGSpawnActorOption::MergePCGOnly) \
	op(EPCGSpawnActorOption::NoMerging) 

enum class EPCGSpawnActorOption : uint8;
template<> struct TIsUEnumClass<EPCGSpawnActorOption> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSpawnActorOption>();
// ********** End Enum EPCGSpawnActorOption ********************************************************

// ********** Begin Enum EPCGSpawnActorGenerationTrigger *******************************************
#define FOREACH_ENUM_EPCGSPAWNACTORGENERATIONTRIGGER(op) \
	op(EPCGSpawnActorGenerationTrigger::Default) \
	op(EPCGSpawnActorGenerationTrigger::ForceGenerate) \
	op(EPCGSpawnActorGenerationTrigger::DoNotGenerateInEditor) \
	op(EPCGSpawnActorGenerationTrigger::DoNotGenerate) 

enum class EPCGSpawnActorGenerationTrigger : uint8;
template<> struct TIsUEnumClass<EPCGSpawnActorGenerationTrigger> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSpawnActorGenerationTrigger>();
// ********** End Enum EPCGSpawnActorGenerationTrigger *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
