// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/DataStream/DataStream.h"

#ifdef IRISCORE_DataStream_generated_h
#error "DataStream.generated.h already included, missing '#pragma once' in DataStream.h"
#endif
#define IRISCORE_DataStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataStream **************************************************************
struct Z_Construct_UClass_UDataStream_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UDataStream_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStream_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataStream(); \
	friend struct ::Z_Construct_UClass_UDataStream_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UDataStream_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataStream, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UDataStream_NoRegister) \
	DECLARE_SERIALIZER(UDataStream)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStream_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UDataStream(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataStream(UDataStream&&) = delete; \
	UDataStream(const UDataStream&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UDataStream); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataStream); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataStream)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStream_h_58_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStream_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStream_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStream_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataStream;

// ********** End Class UDataStream ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_DataStream_DataStream_h

// ********** Begin Enum EDataStreamSendStatus *****************************************************
#define FOREACH_ENUM_EDATASTREAMSENDSTATUS(op) \
	op(EDataStreamSendStatus::Pause) \
	op(EDataStreamSendStatus::Send) 

enum class EDataStreamSendStatus : uint8;
template<> struct TIsUEnumClass<EDataStreamSendStatus> { enum { Value = true }; };
template<> IRISCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataStreamSendStatus>();
// ********** End Enum EDataStreamSendStatus *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
