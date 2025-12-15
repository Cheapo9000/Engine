// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavAreas/NavArea_Default.h"

#ifdef NAVIGATIONSYSTEM_NavArea_Default_generated_h
#error "NavArea_Default.generated.h already included, missing '#pragma once' in NavArea_Default.h"
#endif
#define NAVIGATIONSYSTEM_NavArea_Default_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNavArea_Default *********************************************************
struct Z_Construct_UClass_UNavArea_Default_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_Default_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Default_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUNavArea_Default(); \
	friend struct ::Z_Construct_UClass_UNavArea_Default_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_UNavArea_Default_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavArea_Default, UNavArea, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_UNavArea_Default_NoRegister) \
	DECLARE_SERIALIZER(UNavArea_Default)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Default_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavArea_Default(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavArea_Default) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavArea_Default); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavArea_Default); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavArea_Default(UNavArea_Default&&) = delete; \
	UNavArea_Default(const UNavArea_Default&) = delete; \
	NAVIGATIONSYSTEM_API virtual ~UNavArea_Default();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Default_h_17_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Default_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Default_h_20_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Default_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavArea_Default;

// ********** End Class UNavArea_Default ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Default_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
