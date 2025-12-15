// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubobjectDataBlueprintFunctionLibrary.h"

#ifdef SUBOBJECTDATAINTERFACE_SubobjectDataBlueprintFunctionLibrary_generated_h
#error "SubobjectDataBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in SubobjectDataBlueprintFunctionLibrary.h"
#endif
#define SUBOBJECTDATAINTERFACE_SubobjectDataBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlueprint;
class UObject;
struct FSubobjectData;
struct FSubobjectDataHandle;

// ********** Begin Class USubobjectDataBlueprintFunctionLibrary ***********************************
#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsActor); \
	DECLARE_FUNCTION(execIsRootActor); \
	DECLARE_FUNCTION(execIsChildActor); \
	DECLARE_FUNCTION(execIsComponent); \
	DECLARE_FUNCTION(execIsDefaultSceneRoot); \
	DECLARE_FUNCTION(execIsRootComponent); \
	DECLARE_FUNCTION(execIsSceneComponent); \
	DECLARE_FUNCTION(execIsInheritedComponent); \
	DECLARE_FUNCTION(execIsNativeComponent); \
	DECLARE_FUNCTION(execIsInstancedActor); \
	DECLARE_FUNCTION(execIsInstancedComponent); \
	DECLARE_FUNCTION(execGetBlueprint); \
	DECLARE_FUNCTION(execGetObjectForBlueprint); \
	DECLARE_FUNCTION(execGetAssociatedObject); \
	DECLARE_FUNCTION(execGetObject); \
	DECLARE_FUNCTION(execCanRename); \
	DECLARE_FUNCTION(execCanReparent); \
	DECLARE_FUNCTION(execCanCopy); \
	DECLARE_FUNCTION(execCanDuplicate); \
	DECLARE_FUNCTION(execCanDelete); \
	DECLARE_FUNCTION(execCanEdit); \
	DECLARE_FUNCTION(execIsAttachedTo); \
	DECLARE_FUNCTION(execGetVariableName); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetParentHandle); \
	DECLARE_FUNCTION(execGetHandle); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execIsHandleValid); \
	DECLARE_FUNCTION(execIsValid);


struct Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_Statics;
SUBOBJECTDATAINTERFACE_API UClass* Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubobjectDataBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBOBJECTDATAINTERFACE_API UClass* ::Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USubobjectDataBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubobjectDataInterface"), Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(USubobjectDataBlueprintFunctionLibrary)


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUBOBJECTDATAINTERFACE_API USubobjectDataBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubobjectDataBlueprintFunctionLibrary(USubobjectDataBlueprintFunctionLibrary&&) = delete; \
	USubobjectDataBlueprintFunctionLibrary(const USubobjectDataBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBOBJECTDATAINTERFACE_API, USubobjectDataBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubobjectDataBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubobjectDataBlueprintFunctionLibrary) \
	SUBOBJECTDATAINTERFACE_API virtual ~USubobjectDataBlueprintFunctionLibrary();


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_26_PROLOG
#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubobjectDataBlueprintFunctionLibrary;

// ********** End Class USubobjectDataBlueprintFunctionLibrary *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
