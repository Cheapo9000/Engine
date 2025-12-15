// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Physics/PhysicsQueryHandler.h"

#ifdef ENGINE_PhysicsQueryHandler_generated_h
#error "PhysicsQueryHandler.generated.h already included, missing '#pragma once' in PhysicsQueryHandler.h"
#endif
#define ENGINE_PhysicsQueryHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsQueryHandler *****************************************************
struct Z_Construct_UClass_UPhysicsQueryHandler_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPhysicsQueryHandler_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_PhysicsQueryHandler_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsQueryHandler(); \
	friend struct ::Z_Construct_UClass_UPhysicsQueryHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPhysicsQueryHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsQueryHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPhysicsQueryHandler_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsQueryHandler)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_PhysicsQueryHandler_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsQueryHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsQueryHandler(UPhysicsQueryHandler&&) = delete; \
	UPhysicsQueryHandler(const UPhysicsQueryHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsQueryHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsQueryHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsQueryHandler) \
	ENGINE_API virtual ~UPhysicsQueryHandler();


#define FID_Engine_Source_Runtime_Engine_Public_Physics_PhysicsQueryHandler_h_27_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Physics_PhysicsQueryHandler_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Physics_PhysicsQueryHandler_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_PhysicsQueryHandler_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsQueryHandler;

// ********** End Class UPhysicsQueryHandler *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Physics_PhysicsQueryHandler_h

// ********** Begin Enum EPhysicsQueryKind *********************************************************
#define FOREACH_ENUM_EPHYSICSQUERYKIND(op) \
	op(EPhysicsQueryKind::Test) \
	op(EPhysicsQueryKind::Single) \
	op(EPhysicsQueryKind::Multi) 

enum class EPhysicsQueryKind : uint8;
template<> struct TIsUEnumClass<EPhysicsQueryKind> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPhysicsQueryKind>();
// ********** End Enum EPhysicsQueryKind ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
