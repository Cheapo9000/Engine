// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaShapeActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESHAPES_AvaShapeActor_generated_h
#error "AvaShapeActor.generated.h already included, missing '#pragma once' in AvaShapeActor.h"
#endif
#define AVALANCHESHAPES_AvaShapeActor_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapeActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAvaShapeActor(); \
	friend struct Z_Construct_UClass_AAvaShapeActor_Statics; \
public: \
	DECLARE_CLASS(AAvaShapeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheShapes"), NO_API) \
	DECLARE_SERIALIZER(AAvaShapeActor) \
	virtual UObject* _getUObject() const override { return const_cast<AAvaShapeActor*>(this); }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapeActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAvaShapeActor(AAvaShapeActor&&); \
	AAvaShapeActor(const AAvaShapeActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAvaShapeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvaShapeActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAvaShapeActor) \
	NO_API virtual ~AAvaShapeActor();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapeActor_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapeActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapeActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapeActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESHAPES_API UClass* StaticClass<class AAvaShapeActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheShapes_Public_AvaShapeActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
