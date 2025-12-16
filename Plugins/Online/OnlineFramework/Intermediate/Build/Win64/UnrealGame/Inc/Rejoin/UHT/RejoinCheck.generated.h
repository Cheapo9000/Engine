// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RejoinCheck.h"

#ifdef REJOIN_RejoinCheck_generated_h
#error "RejoinCheck.generated.h already included, missing '#pragma once' in RejoinCheck.h"
#endif
#define REJOIN_RejoinCheck_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URejoinCheck *************************************************************
struct Z_Construct_UClass_URejoinCheck_Statics;
REJOIN_API UClass* Z_Construct_UClass_URejoinCheck_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURejoinCheck(); \
	friend struct ::Z_Construct_UClass_URejoinCheck_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REJOIN_API UClass* ::Z_Construct_UClass_URejoinCheck_NoRegister(); \
public: \
	DECLARE_CLASS2(URejoinCheck, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Rejoin"), Z_Construct_UClass_URejoinCheck_NoRegister) \
	DECLARE_SERIALIZER(URejoinCheck)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_79_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URejoinCheck(URejoinCheck&&) = delete; \
	URejoinCheck(const URejoinCheck&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REJOIN_API, URejoinCheck); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URejoinCheck); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(URejoinCheck) \
	REJOIN_API virtual ~URejoinCheck();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_76_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URejoinCheck;

// ********** End Class URejoinCheck ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h

// ********** Begin Enum ERejoinStatus *************************************************************
#define FOREACH_ENUM_EREJOINSTATUS(op) \
	op(ERejoinStatus::NoMatchToRejoin) \
	op(ERejoinStatus::RejoinAvailable) \
	op(ERejoinStatus::UpdatingStatus) \
	op(ERejoinStatus::NeedsRecheck) \
	op(ERejoinStatus::NoMatchToRejoin_MatchEnded) 

enum class ERejoinStatus : uint8;
template<> struct TIsUEnumClass<ERejoinStatus> { enum { Value = true }; };
template<> REJOIN_NON_ATTRIBUTED_API UEnum* StaticEnum<ERejoinStatus>();
// ********** End Enum ERejoinStatus ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
