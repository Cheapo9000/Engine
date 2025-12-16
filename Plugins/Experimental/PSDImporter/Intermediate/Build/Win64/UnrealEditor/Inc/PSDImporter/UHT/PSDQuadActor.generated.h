// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PSDQuadActor.h"

#ifdef PSDIMPORTER_PSDQuadActor_generated_h
#error "PSDQuadActor.generated.h already included, missing '#pragma once' in PSDQuadActor.h"
#endif
#define PSDIMPORTER_PSDQuadActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APSDQuadActor ************************************************************
#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadActor_h_19_ACCESSORS \
static void SetLayerDepthOffset_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_APSDQuadActor_Statics;
PSDIMPORTER_API UClass* Z_Construct_UClass_APSDQuadActor_NoRegister();

#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPSDQuadActor(); \
	friend struct ::Z_Construct_UClass_APSDQuadActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PSDIMPORTER_API UClass* ::Z_Construct_UClass_APSDQuadActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APSDQuadActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PSDImporter"), Z_Construct_UClass_APSDQuadActor_NoRegister) \
	DECLARE_SERIALIZER(APSDQuadActor)


#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadActor_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APSDQuadActor(APSDQuadActor&&) = delete; \
	APSDQuadActor(const APSDQuadActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PSDIMPORTER_API, APSDQuadActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APSDQuadActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APSDQuadActor)


#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadActor_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadActor_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APSDQuadActor;

// ********** End Class APSDQuadActor **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
