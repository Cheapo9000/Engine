// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CausticsGeneratorActor.h"

#ifdef WATEREDITOR_CausticsGeneratorActor_generated_h
#error "CausticsGeneratorActor.generated.h already included, missing '#pragma once' in CausticsGeneratorActor.h"
#endif
#define WATEREDITOR_CausticsGeneratorActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHierarchicalInstancedStaticMeshComponent;

// ********** Begin Class ACausticsGeneratorActor **************************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EditorTick_Implementation(float DeltaSeconds); \
	DECLARE_FUNCTION(execSpawnCausticParticleGrid); \
	DECLARE_FUNCTION(execSpawnWaterPreviewGrid); \
	DECLARE_FUNCTION(execSetEditorTickEnabled); \
	DECLARE_FUNCTION(execEditorTick);


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ACausticsGeneratorActor_Statics;
WATEREDITOR_API UClass* Z_Construct_UClass_ACausticsGeneratorActor_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACausticsGeneratorActor(); \
	friend struct ::Z_Construct_UClass_ACausticsGeneratorActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATEREDITOR_API UClass* ::Z_Construct_UClass_ACausticsGeneratorActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ACausticsGeneratorActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), Z_Construct_UClass_ACausticsGeneratorActor_NoRegister) \
	DECLARE_SERIALIZER(ACausticsGeneratorActor)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACausticsGeneratorActor(ACausticsGeneratorActor&&) = delete; \
	ACausticsGeneratorActor(const ACausticsGeneratorActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACausticsGeneratorActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACausticsGeneratorActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACausticsGeneratorActor) \
	NO_API virtual ~ACausticsGeneratorActor();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACausticsGeneratorActor;

// ********** End Class ACausticsGeneratorActor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
