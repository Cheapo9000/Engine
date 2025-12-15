// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CookOnTheSide/CookOnTheFlyServer.h"

#ifdef UNREALED_CookOnTheFlyServer_generated_h
#error "CookOnTheFlyServer.generated.h already included, missing '#pragma once' in CookOnTheFlyServer.h"
#endif
#define UNREALED_CookOnTheFlyServer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCookOnTheFlyServer ******************************************************
struct Z_Construct_UClass_UCookOnTheFlyServer_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCookOnTheFlyServer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_265_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCookOnTheFlyServer(); \
	friend struct ::Z_Construct_UClass_UCookOnTheFlyServer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCookOnTheFlyServer_NoRegister(); \
public: \
	DECLARE_CLASS2(UCookOnTheFlyServer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCookOnTheFlyServer_NoRegister) \
	DECLARE_SERIALIZER(UCookOnTheFlyServer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_265_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCookOnTheFlyServer(UCookOnTheFlyServer&&) = delete; \
	UCookOnTheFlyServer(const UCookOnTheFlyServer&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookOnTheFlyServer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookOnTheFlyServer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_258_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_265_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_265_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_265_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCookOnTheFlyServer;

// ********** End Class UCookOnTheFlyServer ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h

// ********** Begin Enum ECookMode *****************************************************************
#define FOREACH_ENUM_ECOOKMODE(op) \
	op(ECookMode::CookOnTheFly) \
	op(ECookMode::CookOnTheFlyFromTheEditor) \
	op(ECookMode::CookByTheBookFromTheEditor) \
	op(ECookMode::CookByTheBook) \
	op(ECookMode::CookWorker) 

namespace ECookMode { enum Type : int; }
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ECookMode::Type>();
// ********** End Enum ECookMode *******************************************************************

// ********** Begin Enum ECookTickFlags ************************************************************
#define FOREACH_ENUM_ECOOKTICKFLAGS(op) \
	op(ECookTickFlags::None) \
	op(ECookTickFlags::MarkupInUsePackages) \
	op(ECookTickFlags::HideProgressDisplay) 

enum class ECookTickFlags : uint8;
template<> struct TIsUEnumClass<ECookTickFlags> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ECookTickFlags>();
// ********** End Enum ECookTickFlags **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
