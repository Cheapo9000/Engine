// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithSceneActor.h"

#ifdef DATASMITHCONTENT_DatasmithSceneActor_generated_h
#error "DatasmithSceneActor.generated.h already included, missing '#pragma once' in DatasmithSceneActor.h"
#endif
#define DATASMITHCONTENT_DatasmithSceneActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADatasmithSceneActor *****************************************************
struct Z_Construct_UClass_ADatasmithSceneActor_Statics;
DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithSceneActor_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithSceneActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADatasmithSceneActor(); \
	friend struct ::Z_Construct_UClass_ADatasmithSceneActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHCONTENT_API UClass* ::Z_Construct_UClass_ADatasmithSceneActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADatasmithSceneActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithContent"), Z_Construct_UClass_ADatasmithSceneActor_NoRegister) \
	DECLARE_SERIALIZER(ADatasmithSceneActor)


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithSceneActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADatasmithSceneActor(ADatasmithSceneActor&&) = delete; \
	ADatasmithSceneActor(const ADatasmithSceneActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHCONTENT_API, ADatasmithSceneActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADatasmithSceneActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADatasmithSceneActor) \
	DATASMITHCONTENT_API virtual ~ADatasmithSceneActor();


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithSceneActor_h_13_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithSceneActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithSceneActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithSceneActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADatasmithSceneActor;

// ********** End Class ADatasmithSceneActor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithSceneActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
