// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataChannelFunctionLibrary.h"

#ifdef NIAGARA_NiagaraDataChannelFunctionLibrary_generated_h
#error "NiagaraDataChannelFunctionLibrary.generated.h already included, missing '#pragma once' in NiagaraDataChannelFunctionLibrary.h"
#endif
#define NIAGARA_NiagaraDataChannelFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraDataChannelAsset;
class UNiagaraDataChannelHandler;
class UNiagaraDataChannelReader;
class UNiagaraDataChannelWriter;
class UObject;
class UScriptStruct;
enum class ENiagartaDataChannelReadResult : uint8;
struct FNDCAccessContextInst;
struct FNiagaraDataChannelReference;
struct FNiagaraDataChannelSearchParameters;

// ********** Begin Class UNiagaraDataChannelLibrary ***********************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelFunctionLibrary_h_26_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetMembersInNDCAccessContextInstance); \
	DECLARE_FUNCTION(execGetMembersInNDCAccessContextInstance); \
	DECLARE_FUNCTION(execPrepareAccessContextFromNDCRef); \
	DECLARE_FUNCTION(execGetUsableAccessContextFromNDCRef); \
	DECLARE_FUNCTION(execGetUsableAccessContextFromNDC); \
	DECLARE_FUNCTION(execWriteToNiagaraDataChannelSingle_WithContext); \
	DECLARE_FUNCTION(execReadFromNiagaraDataChannelSingle_WithContext); \
	DECLARE_FUNCTION(execSubscribeToNiagaraDataChannel_WithContext); \
	DECLARE_FUNCTION(execGetDataChannelElementCount_WithContext); \
	DECLARE_FUNCTION(execWriteToNiagaraDataChannel_WithContext); \
	DECLARE_FUNCTION(execReadFromNiagaraDataChannel_WithContext); \
	DECLARE_FUNCTION(execWriteToNiagaraDataChannelSingle); \
	DECLARE_FUNCTION(execReadFromNiagaraDataChannelSingle); \
	DECLARE_FUNCTION(execUnsubscribeFromNiagaraDataChannel); \
	DECLARE_FUNCTION(execSubscribeToNiagaraDataChannel); \
	DECLARE_FUNCTION(execGetDataChannelElementCount); \
	DECLARE_FUNCTION(execReadFromNiagaraDataChannel); \
	DECLARE_FUNCTION(execWriteToNiagaraDataChannel); \
	DECLARE_FUNCTION(execGetNiagaraDataChannel);


struct Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics;
	struct Z_Construct_UFunction_UNiagaraDataChannelLibrary_MakeNDCAccessContextInstance_Statics; \
	struct Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetSinglePropertyInNDCAccessContextInstance_Statics; \
	struct Z_Construct_UFunction_UNiagaraDataChannelLibrary_SetSinglePropertyInNDCAccessContextInstance_Statics; \
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelLibrary_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelFunctionLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelLibrary(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics; \
	friend struct ::Z_Construct_UFunction_UNiagaraDataChannelLibrary_MakeNDCAccessContextInstance_Statics; \
	friend struct ::Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetSinglePropertyInNDCAccessContextInstance_Statics; \
	friend struct ::Z_Construct_UFunction_UNiagaraDataChannelLibrary_SetSinglePropertyInNDCAccessContextInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataChannelLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataChannelLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataChannelLibrary_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataChannelLibrary)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelFunctionLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannelLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannelLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataChannelLibrary(UNiagaraDataChannelLibrary&&) = delete; \
	UNiagaraDataChannelLibrary(const UNiagaraDataChannelLibrary&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataChannelLibrary();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelFunctionLibrary_h_23_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelFunctionLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelFunctionLibrary_h_26_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelFunctionLibrary_h_26_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelFunctionLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataChannelLibrary;

// ********** End Class UNiagaraDataChannelLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelFunctionLibrary_h

// ********** Begin Enum ENiagartaDataChannelReadResult ********************************************
#define FOREACH_ENUM_ENIAGARTADATACHANNELREADRESULT(op) \
	op(ENiagartaDataChannelReadResult::Success) \
	op(ENiagartaDataChannelReadResult::Failure) 

enum class ENiagartaDataChannelReadResult : uint8;
template<> struct TIsUEnumClass<ENiagartaDataChannelReadResult> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagartaDataChannelReadResult>();
// ********** End Enum ENiagartaDataChannelReadResult **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
