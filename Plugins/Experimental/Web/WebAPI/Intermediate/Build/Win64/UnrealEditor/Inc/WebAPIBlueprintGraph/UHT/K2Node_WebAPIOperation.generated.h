// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_WebAPIOperation.h"

#ifdef WEBAPIBLUEPRINTGRAPH_K2Node_WebAPIOperation_generated_h
#error "K2Node_WebAPIOperation.generated.h already included, missing '#pragma once' in K2Node_WebAPIOperation.h"
#endif
#define WEBAPIBLUEPRINTGRAPH_K2Node_WebAPIOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_WebAPIOperation **************************************************
struct Z_Construct_UClass_UK2Node_WebAPIOperation_Statics;
WEBAPIBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_WebAPIOperation_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIBlueprintGraph_Private_K2Node_WebAPIOperation_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK2Node_WebAPIOperation(); \
	friend struct ::Z_Construct_UClass_UK2Node_WebAPIOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPIBLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_WebAPIOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_WebAPIOperation, UK2Node, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebAPIBlueprintGraph"), Z_Construct_UClass_UK2Node_WebAPIOperation_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_WebAPIOperation)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIBlueprintGraph_Private_K2Node_WebAPIOperation_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_WebAPIOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_WebAPIOperation(UK2Node_WebAPIOperation&&) = delete; \
	UK2Node_WebAPIOperation(const UK2Node_WebAPIOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_WebAPIOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_WebAPIOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_WebAPIOperation) \
	NO_API virtual ~UK2Node_WebAPIOperation();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIBlueprintGraph_Private_K2Node_WebAPIOperation_h_41_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIBlueprintGraph_Private_K2Node_WebAPIOperation_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIBlueprintGraph_Private_K2Node_WebAPIOperation_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIBlueprintGraph_Private_K2Node_WebAPIOperation_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_WebAPIOperation;

// ********** End Class UK2Node_WebAPIOperation ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIBlueprintGraph_Private_K2Node_WebAPIOperation_h

// ********** Begin Enum EWebAPIOperationAsyncType *************************************************
#define FOREACH_ENUM_EWEBAPIOPERATIONASYNCTYPE(op) \
	op(EWebAPIOperationAsyncType::LatentAction) \
	op(EWebAPIOperationAsyncType::Callback) 

enum class EWebAPIOperationAsyncType : uint8;
template<> struct TIsUEnumClass<EWebAPIOperationAsyncType> { enum { Value = true }; };
template<> WEBAPIBLUEPRINTGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EWebAPIOperationAsyncType>();
// ********** End Enum EWebAPIOperationAsyncType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
