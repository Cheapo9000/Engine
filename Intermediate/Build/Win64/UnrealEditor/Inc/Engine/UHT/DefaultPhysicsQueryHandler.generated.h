// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Physics/DefaultPhysicsQueryHandler.h"

#ifdef ENGINE_DefaultPhysicsQueryHandler_generated_h
#error "DefaultPhysicsQueryHandler.generated.h already included, missing '#pragma once' in DefaultPhysicsQueryHandler.h"
#endif
#define ENGINE_DefaultPhysicsQueryHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDefaultPhysicsQueryHandler **********************************************
struct Z_Construct_UClass_UDefaultPhysicsQueryHandler_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDefaultPhysicsQueryHandler_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_DefaultPhysicsQueryHandler_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultPhysicsQueryHandler(); \
	friend struct ::Z_Construct_UClass_UDefaultPhysicsQueryHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDefaultPhysicsQueryHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UDefaultPhysicsQueryHandler, UPhysicsQueryHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDefaultPhysicsQueryHandler_NoRegister) \
	DECLARE_SERIALIZER(UDefaultPhysicsQueryHandler)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_DefaultPhysicsQueryHandler_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDefaultPhysicsQueryHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDefaultPhysicsQueryHandler(UDefaultPhysicsQueryHandler&&) = delete; \
	UDefaultPhysicsQueryHandler(const UDefaultPhysicsQueryHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDefaultPhysicsQueryHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultPhysicsQueryHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultPhysicsQueryHandler) \
	ENGINE_API virtual ~UDefaultPhysicsQueryHandler();


#define FID_Engine_Source_Runtime_Engine_Public_Physics_DefaultPhysicsQueryHandler_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Physics_DefaultPhysicsQueryHandler_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Physics_DefaultPhysicsQueryHandler_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_DefaultPhysicsQueryHandler_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDefaultPhysicsQueryHandler;

// ********** End Class UDefaultPhysicsQueryHandler ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Physics_DefaultPhysicsQueryHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
