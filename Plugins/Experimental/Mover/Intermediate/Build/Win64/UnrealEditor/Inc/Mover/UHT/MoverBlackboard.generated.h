// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/MoverBlackboard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVER_MoverBlackboard_generated_h
#error "MoverBlackboard.generated.h already included, missing '#pragma once' in MoverBlackboard.h"
#endif
#define MOVER_MoverBlackboard_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverBlackboard(); \
	friend struct Z_Construct_UClass_UMoverBlackboard_Statics; \
public: \
	DECLARE_CLASS(UMoverBlackboard, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UMoverBlackboard)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoverBlackboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoverBlackboard(UMoverBlackboard&&); \
	UMoverBlackboard(const UMoverBlackboard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoverBlackboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverBlackboard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoverBlackboard) \
	NO_API virtual ~UMoverBlackboard();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UMoverBlackboard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
