// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationObjectRepository.h"

#ifdef NAVIGATIONSYSTEM_NavigationObjectRepository_generated_h
#error "NavigationObjectRepository.generated.h already included, missing '#pragma once' in NavigationObjectRepository.h"
#endif
#define NAVIGATIONSYSTEM_NavigationObjectRepository_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNavigationObjectRepository **********************************************
struct Z_Construct_UClass_UNavigationObjectRepository_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationObjectRepository_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationObjectRepository(); \
	friend struct ::Z_Construct_UClass_UNavigationObjectRepository_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_UNavigationObjectRepository_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavigationObjectRepository, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_UNavigationObjectRepository_NoRegister) \
	DECLARE_SERIALIZER(UNavigationObjectRepository)


#define FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationObjectRepository(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavigationObjectRepository(UNavigationObjectRepository&&) = delete; \
	UNavigationObjectRepository(const UNavigationObjectRepository&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationObjectRepository); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationObjectRepository); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNavigationObjectRepository) \
	NO_API virtual ~UNavigationObjectRepository();


#define FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_25_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavigationObjectRepository;

// ********** End Class UNavigationObjectRepository ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
