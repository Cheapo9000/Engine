// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassCrowdBubble.h"

#ifdef MASSCROWD_MassCrowdBubble_generated_h
#error "MassCrowdBubble.generated.h already included, missing '#pragma once' in MassCrowdBubble.h"
#endif
#define MASSCROWD_MassCrowdBubble_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassCrowdClientBubbleSerializer **********************************
struct Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics;
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics; \
	MASSCROWD_API static class UScriptStruct* StaticStruct(); \
	typedef FMassClientBubbleSerializerBase Super; \
	UE_NET_DECLARE_FASTARRAY(FMassCrowdClientBubbleSerializer, Crowd, MASSCROWD_API );


struct FMassCrowdClientBubbleSerializer;
// ********** End ScriptStruct FMassCrowdClientBubbleSerializer ************************************

// ********** Begin Class AMassCrowdClientBubbleInfo ***********************************************
struct Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics;
MASSCROWD_API UClass* Z_Construct_UClass_AMassCrowdClientBubbleInfo_NoRegister();

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassCrowdClientBubbleInfo(); \
	friend struct ::Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSCROWD_API UClass* ::Z_Construct_UClass_AMassCrowdClientBubbleInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(AMassCrowdClientBubbleInfo, AMassClientBubbleInfoBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassCrowd"), Z_Construct_UClass_AMassCrowdClientBubbleInfo_NoRegister) \
	DECLARE_SERIALIZER(AMassCrowdClientBubbleInfo) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CrowdSerializer=NETFIELD_REP_START, \
		NETFIELD_REP_END=CrowdSerializer	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(MASSCROWD_API)


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_99_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMassCrowdClientBubbleInfo(AMassCrowdClientBubbleInfo&&) = delete; \
	AMassCrowdClientBubbleInfo(const AMassCrowdClientBubbleInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSCROWD_API, AMassCrowdClientBubbleInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassCrowdClientBubbleInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMassCrowdClientBubbleInfo) \
	MASSCROWD_API virtual ~AMassCrowdClientBubbleInfo();


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_96_PROLOG
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_99_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMassCrowdClientBubbleInfo;

// ********** End Class AMassCrowdClientBubbleInfo *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
