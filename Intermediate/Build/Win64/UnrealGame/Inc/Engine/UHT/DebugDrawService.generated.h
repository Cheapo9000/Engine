// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Debug/DebugDrawService.h"

#ifdef ENGINE_DebugDrawService_generated_h
#error "DebugDrawService.generated.h already included, missing '#pragma once' in DebugDrawService.h"
#endif
#define ENGINE_DebugDrawService_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDebugDrawService ********************************************************
struct Z_Construct_UClass_UDebugDrawService_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDebugDrawService_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUDebugDrawService(); \
	friend struct ::Z_Construct_UClass_UDebugDrawService_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDebugDrawService_NoRegister(); \
public: \
	DECLARE_CLASS2(UDebugDrawService, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDebugDrawService_NoRegister) \
	DECLARE_SERIALIZER(UDebugDrawService) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDebugDrawService(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugDrawService) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDebugDrawService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugDrawService); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDebugDrawService(UDebugDrawService&&) = delete; \
	UDebugDrawService(const UDebugDrawService&) = delete; \
	ENGINE_API virtual ~UDebugDrawService();


#define FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDebugDrawService;

// ********** End Class UDebugDrawService **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
