// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/KismetArrayLibrary.h"

#ifdef ENGINE_KismetArrayLibrary_generated_h
#error "KismetArrayLibrary.generated.h already included, missing '#pragma once' in KismetArrayLibrary.h"
#endif
#define ENGINE_KismetArrayLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UObject;
enum class EArraySortOrder : uint8;
struct FRandomStream;

// ********** Begin Class UKismetArrayLibrary ******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSortFloatArray); \
	DECLARE_FUNCTION(execSortInt64Array); \
	DECLARE_FUNCTION(execSortIntArray); \
	DECLARE_FUNCTION(execSortByteArray); \
	DECLARE_FUNCTION(execSortNameArray); \
	DECLARE_FUNCTION(execSortStringArray); \
	DECLARE_FUNCTION(execFilterArray);


struct Z_Construct_UClass_UKismetArrayLibrary_Statics;
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Add_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_AddUnique_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Shuffle_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_ShuffleFromStream_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Identical_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Append_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Insert_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Remove_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_RemoveItem_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Clear_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Resize_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Reverse_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Length_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_IsEmpty_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_IsNotEmpty_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_LastIndex_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Get_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Set_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Swap_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Find_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Contains_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_SetArrayPropertyByName_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_IsValidIndex_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_Random_Statics; \
	struct Z_Construct_UFunction_UKismetArrayLibrary_Array_RandomFromStream_Statics; \
ENGINE_API UClass* Z_Construct_UClass_UKismetArrayLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUKismetArrayLibrary(); \
	friend struct ::Z_Construct_UClass_UKismetArrayLibrary_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Add_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_AddUnique_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Shuffle_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_ShuffleFromStream_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Identical_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Append_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Insert_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Remove_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_RemoveItem_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Clear_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Resize_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Reverse_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Length_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_IsEmpty_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_IsNotEmpty_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_LastIndex_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Get_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Set_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Swap_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Find_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Contains_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_SetArrayPropertyByName_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_IsValidIndex_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_Random_Statics; \
	friend struct ::Z_Construct_UFunction_UKismetArrayLibrary_Array_RandomFromStream_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UKismetArrayLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UKismetArrayLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UKismetArrayLibrary_NoRegister) \
	DECLARE_SERIALIZER(UKismetArrayLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetArrayLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetArrayLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetArrayLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetArrayLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKismetArrayLibrary(UKismetArrayLibrary&&) = delete; \
	UKismetArrayLibrary(const UKismetArrayLibrary&) = delete; \
	ENGINE_API virtual ~UKismetArrayLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_25_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_28_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKismetArrayLibrary;

// ********** End Class UKismetArrayLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetArrayLibrary_h

// ********** Begin Enum EArraySortOrder ***********************************************************
#define FOREACH_ENUM_EARRAYSORTORDER(op) \
	op(EArraySortOrder::Ascending) \
	op(EArraySortOrder::Descending) 

enum class EArraySortOrder : uint8;
template<> struct TIsUEnumClass<EArraySortOrder> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EArraySortOrder>();
// ********** End Enum EArraySortOrder *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
