// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ChildActorComponent.h"

#ifdef ENGINE_ChildActorComponent_generated_h
#error "ChildActorComponent.generated.h already included, missing '#pragma once' in ChildActorComponent.h"
#endif
#define ENGINE_ChildActorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;

// ********** Begin ScriptStruct FChildActorAttachedActorInfo **************************************
struct Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FChildActorAttachedActorInfo;
// ********** End ScriptStruct FChildActorAttachedActorInfo ****************************************

// ********** Begin ScriptStruct FChildActorComponentInstanceData **********************************
struct Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


struct FChildActorComponentInstanceData;
// ********** End ScriptStruct FChildActorComponentInstanceData ************************************

// ********** Begin Class UChildActorComponent *****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnChildActorDestroyed); \
	DECLARE_FUNCTION(execOnRep_ChildActor); \
	DECLARE_FUNCTION(execSetChildActorClass);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChildActorComponent, ENGINE_API)


struct Z_Construct_UClass_UChildActorComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUChildActorComponent(); \
	friend struct ::Z_Construct_UClass_UChildActorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UChildActorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UChildActorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UChildActorComponent_NoRegister) \
	DECLARE_SERIALIZER(UChildActorComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ChildActor=NETFIELD_REP_START, \
		NETFIELD_REP_END=ChildActor	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UChildActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChildActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UChildActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChildActorComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChildActorComponent(UChildActorComponent&&) = delete; \
	UChildActorComponent(const UChildActorComponent&) = delete; \
	ENGINE_API virtual ~UChildActorComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_83_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChildActorComponent;

// ********** End Class UChildActorComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h

// ********** Begin Enum EChildActorComponentTreeViewVisualizationMode *****************************
#if WITH_EDITORONLY_DATA
#define FOREACH_ENUM_ECHILDACTORCOMPONENTTREEVIEWVISUALIZATIONMODE(op) \
	op(EChildActorComponentTreeViewVisualizationMode::UseDefault) \
	op(EChildActorComponentTreeViewVisualizationMode::ComponentOnly) \
	op(EChildActorComponentTreeViewVisualizationMode::ComponentWithChildActor) \
	op(EChildActorComponentTreeViewVisualizationMode::ChildActorOnly) \
	op(EChildActorComponentTreeViewVisualizationMode::Hidden) 

enum class EChildActorComponentTreeViewVisualizationMode : uint8;
template<> struct TIsUEnumClass<EChildActorComponentTreeViewVisualizationMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EChildActorComponentTreeViewVisualizationMode>();
#endif // WITH_EDITORONLY_DATA
// ********** End Enum EChildActorComponentTreeViewVisualizationMode *******************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
