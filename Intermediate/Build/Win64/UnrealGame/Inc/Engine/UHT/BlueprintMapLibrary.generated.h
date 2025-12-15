// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/BlueprintMapLibrary.h"

#ifdef ENGINE_BlueprintMapLibrary_generated_h
#error "BlueprintMapLibrary.generated.h already included, missing '#pragma once' in BlueprintMapLibrary.h"
#endif
#define ENGINE_BlueprintMapLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class UBlueprintMapLibrary *****************************************************
struct Z_Construct_UClass_UBlueprintMapLibrary_Statics;
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics; \
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics; \
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics; \
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics; \
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics; \
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics; \
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics; \
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics; \
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics; \
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics; \
	struct Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics; \
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_GetKeyValueByIndex_Statics; \
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_GetLastIndex_Statics; \
ENGINE_API UClass* Z_Construct_UClass_UBlueprintMapLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintMapLibrary(); \
	friend struct ::Z_Construct_UClass_UBlueprintMapLibrary_Statics; \
	friend struct ::Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics; \
	friend struct ::Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics; \
	friend struct ::Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics; \
	friend struct ::Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics; \
	friend struct ::Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics; \
	friend struct ::Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics; \
	friend struct ::Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics; \
	friend struct ::Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics; \
	friend struct ::Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics; \
	friend struct ::Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics; \
	friend struct ::Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics; \
	friend struct ::Z_Construct_UFunction_UBlueprintMapLibrary_Map_GetKeyValueByIndex_Statics; \
	friend struct ::Z_Construct_UFunction_UBlueprintMapLibrary_Map_GetLastIndex_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBlueprintMapLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintMapLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBlueprintMapLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintMapLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlueprintMapLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintMapLibrary(UBlueprintMapLibrary&&) = delete; \
	UBlueprintMapLibrary(const UBlueprintMapLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprintMapLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintMapLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintMapLibrary) \
	ENGINE_API virtual ~UBlueprintMapLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintMapLibrary;

// ********** End Class UBlueprintMapLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
