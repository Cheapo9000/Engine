// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/Ticker/AvaTickerComponent.h"

#ifdef AVALANCHE_AvaTickerComponent_generated_h
#error "AvaTickerComponent.generated.h already included, missing '#pragma once' in AvaTickerComponent.h"
#endif
#define AVALANCHE_AvaTickerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EAvaTickerQueueLimitType : uint8;

// ********** Begin ScriptStruct FAvaTickerElement *************************************************
struct Z_Construct_UScriptStruct_FAvaTickerElement_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerComponent_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaTickerElement_Statics; \
	AVALANCHE_API static class UScriptStruct* StaticStruct();


struct FAvaTickerElement;
// ********** End ScriptStruct FAvaTickerElement ***************************************************

// ********** Begin Class UAvaTickerComponent ******************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetQueueLimitType); \
	DECLARE_FUNCTION(execGetQueueLimitType); \
	DECLARE_FUNCTION(execSetQueueLimitCount); \
	DECLARE_FUNCTION(execGetQueueLimitCount); \
	DECLARE_FUNCTION(execSetLimitQueue); \
	DECLARE_FUNCTION(execShouldLimitQueue); \
	DECLARE_FUNCTION(execSetPadding); \
	DECLARE_FUNCTION(execGetPadding); \
	DECLARE_FUNCTION(execSetVelocity); \
	DECLARE_FUNCTION(execGetVelocity); \
	DECLARE_FUNCTION(execSetDestroyDistance); \
	DECLARE_FUNCTION(execGetDestroyDistance); \
	DECLARE_FUNCTION(execSetStartLocation); \
	DECLARE_FUNCTION(execGetStartLocation); \
	DECLARE_FUNCTION(execQueueActor); \
	DECLARE_FUNCTION(execCanQueueElements);


struct Z_Construct_UClass_UAvaTickerComponent_Statics;
AVALANCHE_API UClass* Z_Construct_UClass_UAvaTickerComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerComponent_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTickerComponent(); \
	friend struct ::Z_Construct_UClass_UAvaTickerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHE_API UClass* ::Z_Construct_UClass_UAvaTickerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaTickerComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Avalanche"), Z_Construct_UClass_UAvaTickerComponent_NoRegister) \
	DECLARE_SERIALIZER(UAvaTickerComponent)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerComponent_h_62_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaTickerComponent(UAvaTickerComponent&&) = delete; \
	UAvaTickerComponent(const UAvaTickerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHE_API, UAvaTickerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTickerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaTickerComponent) \
	AVALANCHE_API virtual ~UAvaTickerComponent();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerComponent_h_59_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerComponent_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerComponent_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerComponent_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaTickerComponent;

// ********** End Class UAvaTickerComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_Framework_Ticker_AvaTickerComponent_h

// ********** Begin Enum EAvaTickerQueueLimitType **************************************************
#define FOREACH_ENUM_EAVATICKERQUEUELIMITTYPE(op) \
	op(EAvaTickerQueueLimitType::None) \
	op(EAvaTickerQueueLimitType::DisableQueueing) \
	op(EAvaTickerQueueLimitType::DiscardOldest) 

enum class EAvaTickerQueueLimitType : uint8;
template<> struct TIsUEnumClass<EAvaTickerQueueLimitType> { enum { Value = true }; };
template<> AVALANCHE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaTickerQueueLimitType>();
// ********** End Enum EAvaTickerQueueLimitType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
