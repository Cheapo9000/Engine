// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieGraphAppleProResNode.h"

#ifdef APPLEPRORESMEDIA_MovieGraphAppleProResNode_generated_h
#error "MovieGraphAppleProResNode.generated.h already included, missing '#pragma once' in MovieGraphAppleProResNode.h"
#endif
#define APPLEPRORESMEDIA_MovieGraphAppleProResNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphAppleProResNode ***********************************************
struct Z_Construct_UClass_UMovieGraphAppleProResNode_Statics;
APPLEPRORESMEDIA_API UClass* Z_Construct_UClass_UMovieGraphAppleProResNode_NoRegister();

#define FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_MovieGraphAppleProResNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphAppleProResNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphAppleProResNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend APPLEPRORESMEDIA_API UClass* ::Z_Construct_UClass_UMovieGraphAppleProResNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphAppleProResNode, UMovieGraphVideoOutputNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AppleProResMedia"), Z_Construct_UClass_UMovieGraphAppleProResNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphAppleProResNode) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieGraphAppleProResNode*>(this); }


#define FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_MovieGraphAppleProResNode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphAppleProResNode(UMovieGraphAppleProResNode&&) = delete; \
	UMovieGraphAppleProResNode(const UMovieGraphAppleProResNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieGraphAppleProResNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphAppleProResNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphAppleProResNode) \
	NO_API virtual ~UMovieGraphAppleProResNode();


#define FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_MovieGraphAppleProResNode_h_12_PROLOG
#define FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_MovieGraphAppleProResNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_MovieGraphAppleProResNode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_MovieGraphAppleProResNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphAppleProResNode;

// ********** End Class UMovieGraphAppleProResNode *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_MovieGraphAppleProResNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
