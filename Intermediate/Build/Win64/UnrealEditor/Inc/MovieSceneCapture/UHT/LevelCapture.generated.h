// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelCapture.h"

#ifdef MOVIESCENECAPTURE_LevelCapture_generated_h
#error "LevelCapture.generated.h already included, missing '#pragma once' in LevelCapture.h"
#endif
#define MOVIESCENECAPTURE_LevelCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelCapture ************************************************************
struct Z_Construct_UClass_ULevelCapture_Statics;
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_ULevelCapture_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelCapture(); \
	friend struct ::Z_Construct_UClass_ULevelCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENECAPTURE_API UClass* ::Z_Construct_UClass_ULevelCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelCapture, UMovieSceneCapture, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), Z_Construct_UClass_ULevelCapture_NoRegister) \
	DECLARE_SERIALIZER(ULevelCapture)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelCapture(ULevelCapture&&) = delete; \
	ULevelCapture(const ULevelCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, ULevelCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelCapture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelCapture) \
	MOVIESCENECAPTURE_API virtual ~ULevelCapture();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelCapture;

// ********** End Class ULevelCapture **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
