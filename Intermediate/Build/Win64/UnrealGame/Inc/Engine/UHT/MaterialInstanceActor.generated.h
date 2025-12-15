// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialInstanceActor.h"

#ifdef ENGINE_MaterialInstanceActor_generated_h
#error "MaterialInstanceActor.generated.h already included, missing '#pragma once' in MaterialInstanceActor.h"
#endif
#define ENGINE_MaterialInstanceActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMaterialInstanceActor ***************************************************
struct Z_Construct_UClass_AMaterialInstanceActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_AMaterialInstanceActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceActor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMaterialInstanceActor(); \
	friend struct ::Z_Construct_UClass_AMaterialInstanceActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AMaterialInstanceActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMaterialInstanceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AMaterialInstanceActor_NoRegister) \
	DECLARE_SERIALIZER(AMaterialInstanceActor)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceActor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AMaterialInstanceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMaterialInstanceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AMaterialInstanceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaterialInstanceActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMaterialInstanceActor(AMaterialInstanceActor&&) = delete; \
	AMaterialInstanceActor(const AMaterialInstanceActor&) = delete; \
	ENGINE_API virtual ~AMaterialInstanceActor();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceActor_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceActor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceActor_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceActor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMaterialInstanceActor;

// ********** End Class AMaterialInstanceActor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
