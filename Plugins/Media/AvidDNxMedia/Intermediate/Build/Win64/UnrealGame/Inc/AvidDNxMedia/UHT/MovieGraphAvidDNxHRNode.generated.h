// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieGraphAvidDNxHRNode.h"

#ifdef AVIDDNXMEDIA_MovieGraphAvidDNxHRNode_generated_h
#error "MovieGraphAvidDNxHRNode.generated.h already included, missing '#pragma once' in MovieGraphAvidDNxHRNode.h"
#endif
#define AVIDDNXMEDIA_MovieGraphAvidDNxHRNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieGraphAvidDNxHRNode *************************************************
struct Z_Construct_UClass_UMovieGraphAvidDNxHRNode_Statics;
AVIDDNXMEDIA_API UClass* Z_Construct_UClass_UMovieGraphAvidDNxHRNode_NoRegister();

#define FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_MovieGraphAvidDNxHRNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphAvidDNxHRNode(); \
	friend struct ::Z_Construct_UClass_UMovieGraphAvidDNxHRNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVIDDNXMEDIA_API UClass* ::Z_Construct_UClass_UMovieGraphAvidDNxHRNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphAvidDNxHRNode, UMovieGraphVideoOutputNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvidDNxMedia"), Z_Construct_UClass_UMovieGraphAvidDNxHRNode_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphAvidDNxHRNode) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieGraphAvidDNxHRNode*>(this); }


#define FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_MovieGraphAvidDNxHRNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphAvidDNxHRNode(UMovieGraphAvidDNxHRNode&&) = delete; \
	UMovieGraphAvidDNxHRNode(const UMovieGraphAvidDNxHRNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieGraphAvidDNxHRNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphAvidDNxHRNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphAvidDNxHRNode) \
	NO_API virtual ~UMovieGraphAvidDNxHRNode();


#define FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_MovieGraphAvidDNxHRNode_h_14_PROLOG
#define FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_MovieGraphAvidDNxHRNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_MovieGraphAvidDNxHRNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_MovieGraphAvidDNxHRNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphAvidDNxHRNode;

// ********** End Class UMovieGraphAvidDNxHRNode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_MovieGraphAvidDNxHRNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
