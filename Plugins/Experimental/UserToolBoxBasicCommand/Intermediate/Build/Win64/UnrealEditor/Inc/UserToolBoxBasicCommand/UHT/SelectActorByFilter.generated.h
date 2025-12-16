// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectActorByFilter.h"

#ifdef USERTOOLBOXBASICCOMMAND_SelectActorByFilter_generated_h
#error "SelectActorByFilter.generated.h already included, missing '#pragma once' in SelectActorByFilter.h"
#endif
#define USERTOOLBOXBASICCOMMAND_SelectActorByFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FActorFilterOptions ***********************************************
struct Z_Construct_UScriptStruct_FActorFilterOptions_Statics;
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_SelectActorByFilter_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorFilterOptions_Statics; \
	USERTOOLBOXBASICCOMMAND_API static class UScriptStruct* StaticStruct();


struct FActorFilterOptions;
// ********** End ScriptStruct FActorFilterOptions *************************************************

// ********** Begin Class USelectActorByFilter *****************************************************
struct Z_Construct_UClass_USelectActorByFilter_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_USelectActorByFilter_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_SelectActorByFilter_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSelectActorByFilter(); \
	friend struct ::Z_Construct_UClass_USelectActorByFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_USelectActorByFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(USelectActorByFilter, UUTBBaseCommand, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_USelectActorByFilter_NoRegister) \
	DECLARE_SERIALIZER(USelectActorByFilter)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_SelectActorByFilter_h_46_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USelectActorByFilter(USelectActorByFilter&&) = delete; \
	USelectActorByFilter(const USelectActorByFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelectActorByFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectActorByFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USelectActorByFilter) \
	NO_API virtual ~USelectActorByFilter();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_SelectActorByFilter_h_43_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_SelectActorByFilter_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_SelectActorByFilter_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_SelectActorByFilter_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USelectActorByFilter;

// ********** End Class USelectActorByFilter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_SelectActorByFilter_h

// ********** Begin Enum EActorFilterRule **********************************************************
#define FOREACH_ENUM_EACTORFILTERRULE(op) \
	op(EActorFilterRule::Add) \
	op(EActorFilterRule::Intersect) \
	op(EActorFilterRule::Substract) \
	op(EActorFilterRule::Replace) 

enum class EActorFilterRule : uint8;
template<> struct TIsUEnumClass<EActorFilterRule> { enum { Value = true }; };
template<> USERTOOLBOXBASICCOMMAND_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorFilterRule>();
// ********** End Enum EActorFilterRule ************************************************************

// ********** Begin Enum EActorFilterSource ********************************************************
#define FOREACH_ENUM_EACTORFILTERSOURCE(op) \
	op(EActorFilterSource::OriginalSelection) \
	op(EActorFilterSource::PreviousResult) 

enum class EActorFilterSource : uint8;
template<> struct TIsUEnumClass<EActorFilterSource> { enum { Value = true }; };
template<> USERTOOLBOXBASICCOMMAND_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorFilterSource>();
// ********** End Enum EActorFilterSource **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
