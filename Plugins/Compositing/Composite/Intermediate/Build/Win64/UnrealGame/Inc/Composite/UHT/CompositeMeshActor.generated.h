// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositeMeshActor.h"

#ifdef COMPOSITE_CompositeMeshActor_generated_h
#error "CompositeMeshActor.generated.h already included, missing '#pragma once' in CompositeMeshActor.h"
#endif
#define COMPOSITE_CompositeMeshActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACompositeMeshActor ******************************************************
struct Z_Construct_UClass_ACompositeMeshActor_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_ACompositeMeshActor_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeMeshActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACompositeMeshActor(); \
	friend struct ::Z_Construct_UClass_ACompositeMeshActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_ACompositeMeshActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ACompositeMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_ACompositeMeshActor_NoRegister) \
	DECLARE_SERIALIZER(ACompositeMeshActor)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeMeshActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACompositeMeshActor(ACompositeMeshActor&&) = delete; \
	ACompositeMeshActor(const ACompositeMeshActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, ACompositeMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompositeMeshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompositeMeshActor)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeMeshActor_h_15_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeMeshActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeMeshActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeMeshActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACompositeMeshActor;

// ********** End Class ACompositeMeshActor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeMeshActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
