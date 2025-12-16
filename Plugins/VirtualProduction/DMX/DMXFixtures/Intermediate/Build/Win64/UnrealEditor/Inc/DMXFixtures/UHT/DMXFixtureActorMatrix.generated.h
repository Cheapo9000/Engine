// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXFixtureActorMatrix.h"

#ifdef DMXFIXTURES_DMXFixtureActorMatrix_generated_h
#error "DMXFixtureActorMatrix.generated.h already included, missing '#pragma once' in DMXFixtureActorMatrix.h"
#endif
#define DMXFIXTURES_DMXFixtureActorMatrix_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDMXCell;

// ********** Begin Class ADMXFixtureActorMatrix ***************************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorMatrix_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateEditorMatrixMesh); \
	DECLARE_FUNCTION(execInitializeMatrixFixture); \
	DECLARE_FUNCTION(execPushFixtureMatrixCellData);


struct Z_Construct_UClass_ADMXFixtureActorMatrix_Statics;
DMXFIXTURES_API UClass* Z_Construct_UClass_ADMXFixtureActorMatrix_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorMatrix_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADMXFixtureActorMatrix(); \
	friend struct ::Z_Construct_UClass_ADMXFixtureActorMatrix_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXFIXTURES_API UClass* ::Z_Construct_UClass_ADMXFixtureActorMatrix_NoRegister(); \
public: \
	DECLARE_CLASS2(ADMXFixtureActorMatrix, ADMXFixtureActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXFixtures"), Z_Construct_UClass_ADMXFixtureActorMatrix_NoRegister) \
	DECLARE_SERIALIZER(ADMXFixtureActorMatrix)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorMatrix_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADMXFixtureActorMatrix(ADMXFixtureActorMatrix&&) = delete; \
	ADMXFixtureActorMatrix(const ADMXFixtureActorMatrix&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADMXFixtureActorMatrix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADMXFixtureActorMatrix); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADMXFixtureActorMatrix) \
	NO_API virtual ~ADMXFixtureActorMatrix();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorMatrix_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorMatrix_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorMatrix_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorMatrix_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorMatrix_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADMXFixtureActorMatrix;

// ********** End Class ADMXFixtureActorMatrix *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorMatrix_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
