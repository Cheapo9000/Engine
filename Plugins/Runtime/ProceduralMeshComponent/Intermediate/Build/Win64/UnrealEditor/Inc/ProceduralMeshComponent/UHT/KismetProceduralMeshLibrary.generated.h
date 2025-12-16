// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KismetProceduralMeshLibrary.h"

#ifdef PROCEDURALMESHCOMPONENT_KismetProceduralMeshLibrary_generated_h
#error "KismetProceduralMeshLibrary.generated.h already included, missing '#pragma once' in KismetProceduralMeshLibrary.h"
#endif
#define PROCEDURALMESHCOMPONENT_KismetProceduralMeshLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UProceduralMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
enum class EProcMeshSliceCapOption : uint8;
struct FProcMeshTangent;

// ********** Begin Class UKismetProceduralMeshLibrary *********************************************
#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSliceProceduralMesh); \
	DECLARE_FUNCTION(execGetSectionFromProceduralMesh); \
	DECLARE_FUNCTION(execCopyProceduralMeshFromStaticMeshComponent); \
	DECLARE_FUNCTION(execGetSectionFromStaticMesh); \
	DECLARE_FUNCTION(execCreateGridMeshSplit); \
	DECLARE_FUNCTION(execCreateGridMeshWelded); \
	DECLARE_FUNCTION(execCreateGridMeshTriangles); \
	DECLARE_FUNCTION(execConvertQuadToTriangles); \
	DECLARE_FUNCTION(execCalculateTangentsForMesh); \
	DECLARE_FUNCTION(execGenerateBoxMesh);


struct Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics;
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UKismetProceduralMeshLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetProceduralMeshLibrary(); \
	friend struct ::Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALMESHCOMPONENT_API UClass* ::Z_Construct_UClass_UKismetProceduralMeshLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UKismetProceduralMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralMeshComponent"), Z_Construct_UClass_UKismetProceduralMeshLibrary_NoRegister) \
	DECLARE_SERIALIZER(UKismetProceduralMeshLibrary)


#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROCEDURALMESHCOMPONENT_API UKismetProceduralMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKismetProceduralMeshLibrary(UKismetProceduralMeshLibrary&&) = delete; \
	UKismetProceduralMeshLibrary(const UKismetProceduralMeshLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALMESHCOMPONENT_API, UKismetProceduralMeshLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetProceduralMeshLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetProceduralMeshLibrary) \
	PROCEDURALMESHCOMPONENT_API virtual ~UKismetProceduralMeshLibrary();


#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_PROLOG
#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKismetProceduralMeshLibrary;

// ********** End Class UKismetProceduralMeshLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h

// ********** Begin Enum EProcMeshSliceCapOption ***************************************************
#define FOREACH_ENUM_EPROCMESHSLICECAPOPTION(op) \
	op(EProcMeshSliceCapOption::NoCap) \
	op(EProcMeshSliceCapOption::CreateNewSectionForCap) \
	op(EProcMeshSliceCapOption::UseLastSectionForCap) 

enum class EProcMeshSliceCapOption : uint8;
template<> struct TIsUEnumClass<EProcMeshSliceCapOption> { enum { Value = true }; };
template<> PROCEDURALMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EProcMeshSliceCapOption>();
// ********** End Enum EProcMeshSliceCapOption *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
