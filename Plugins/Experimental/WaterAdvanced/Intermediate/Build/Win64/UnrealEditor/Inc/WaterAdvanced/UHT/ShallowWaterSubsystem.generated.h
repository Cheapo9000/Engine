// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShallowWaterSubsystem.h"

#ifdef WATERADVANCED_ShallowWaterSubsystem_generated_h
#error "ShallowWaterSubsystem.generated.h already included, missing '#pragma once' in ShallowWaterSubsystem.h"
#endif
#define WATERADVANCED_ShallowWaterSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class APlayerController;
class AWaterBody;
class UTextureRenderTarget2DArray;

// ********** Begin ScriptStruct FShallowWaterCollisionContext *************************************
struct Z_Construct_UScriptStruct_FShallowWaterCollisionContext_Statics;
#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSubsystem_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FShallowWaterCollisionContext_Statics; \
	WATERADVANCED_API static class UScriptStruct* StaticStruct();


struct FShallowWaterCollisionContext;
// ********** End ScriptStruct FShallowWaterCollisionContext ***************************************

// ********** Begin Class UShallowWaterSubsystem ***************************************************
#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSubsystem_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnLocalPlayerPawnBecomesValid); \
	DECLARE_FUNCTION(execOnLocalPlayerControllerBecomesValid); \
	DECLARE_FUNCTION(execOnWaterInfoTextureArrayCreated); \
	DECLARE_FUNCTION(execRemoveCollisionTrackerForActor); \
	DECLARE_FUNCTION(execAddCollisionTrackerForActor); \
	DECLARE_FUNCTION(execGetAllOverlappingWaterBodiesAndUpdateCollisionTrackers); \
	DECLARE_FUNCTION(execSetWaterBodyMIDParameters); \
	DECLARE_FUNCTION(execRegisterImpact);


struct Z_Construct_UClass_UShallowWaterSubsystem_Statics;
WATERADVANCED_API UClass* Z_Construct_UClass_UShallowWaterSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSubsystem_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShallowWaterSubsystem(); \
	friend struct ::Z_Construct_UClass_UShallowWaterSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATERADVANCED_API UClass* ::Z_Construct_UClass_UShallowWaterSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UShallowWaterSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WaterAdvanced"), Z_Construct_UClass_UShallowWaterSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UShallowWaterSubsystem)


#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSubsystem_h_119_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShallowWaterSubsystem(UShallowWaterSubsystem&&) = delete; \
	UShallowWaterSubsystem(const UShallowWaterSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATERADVANCED_API, UShallowWaterSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShallowWaterSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UShallowWaterSubsystem) \
	WATERADVANCED_API virtual ~UShallowWaterSubsystem();


#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSubsystem_h_116_PROLOG
#define FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSubsystem_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSubsystem_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSubsystem_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSubsystem_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShallowWaterSubsystem;

// ********** End Class UShallowWaterSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_WaterAdvanced_Source_WaterAdvanced_Public_ShallowWaterSubsystem_h

// ********** Begin Enum EShallowWaterCollisionContextType *****************************************
#define FOREACH_ENUM_ESHALLOWWATERCOLLISIONCONTEXTTYPE(op) \
	op(EShallowWaterCollisionContextType::Pawn) \
	op(EShallowWaterCollisionContextType::Vehicle) \
	op(EShallowWaterCollisionContextType::Custom) 

enum class EShallowWaterCollisionContextType : uint8;
template<> struct TIsUEnumClass<EShallowWaterCollisionContextType> { enum { Value = true }; };
template<> WATERADVANCED_NON_ATTRIBUTED_API UEnum* StaticEnum<EShallowWaterCollisionContextType>();
// ********** End Enum EShallowWaterCollisionContextType *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
