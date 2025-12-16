// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MergeCommand.h"

#ifdef USERTOOLBOXBASICCOMMAND_MergeCommand_generated_h
#error "MergeCommand.generated.h already included, missing '#pragma once' in MergeCommand.h"
#endif
#define USERTOOLBOXBASICCOMMAND_MergeCommand_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMerge *******************************************************************
struct Z_Construct_UClass_UMerge_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UMerge_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MergeCommand_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMerge(); \
	friend struct ::Z_Construct_UClass_UMerge_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UMerge_NoRegister(); \
public: \
	DECLARE_CLASS2(UMerge, UUTBBaseCommand, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UMerge_NoRegister) \
	DECLARE_SERIALIZER(UMerge)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MergeCommand_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMerge(UMerge&&) = delete; \
	UMerge(const UMerge&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMerge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMerge); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMerge) \
	NO_API virtual ~UMerge();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MergeCommand_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MergeCommand_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MergeCommand_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MergeCommand_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMerge;

// ********** End Class UMerge *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MergeCommand_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
