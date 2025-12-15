// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/SBasicFilterBar.h"

#ifdef TOOLWIDGETS_SBasicFilterBar_generated_h
#error "SBasicFilterBar.generated.h already included, missing '#pragma once' in SBasicFilterBar.h"
#endif
#define TOOLWIDGETS_SBasicFilterBar_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFilterBarContext ********************************************************
struct Z_Construct_UClass_UFilterBarContext_Statics;
TOOLWIDGETS_API UClass* Z_Construct_UClass_UFilterBarContext_NoRegister();

#define FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFilterBarContext(); \
	friend struct ::Z_Construct_UClass_UFilterBarContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLWIDGETS_API UClass* ::Z_Construct_UClass_UFilterBarContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UFilterBarContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolWidgets"), Z_Construct_UClass_UFilterBarContext_NoRegister) \
	DECLARE_SERIALIZER(UFilterBarContext)


#define FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOOLWIDGETS_API UFilterBarContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFilterBarContext(UFilterBarContext&&) = delete; \
	UFilterBarContext(const UFilterBarContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOOLWIDGETS_API, UFilterBarContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFilterBarContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFilterBarContext) \
	TOOLWIDGETS_API virtual ~UFilterBarContext();


#define FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_40_PROLOG
#define FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFilterBarContext;

// ********** End Class UFilterBarContext **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h

// ********** Begin Enum EFilterBarLayout **********************************************************
#define FOREACH_ENUM_EFILTERBARLAYOUT(op) \
	op(EFilterBarLayout::Horizontal) \
	op(EFilterBarLayout::Vertical) 

enum class EFilterBarLayout : uint8;
template<> struct TIsUEnumClass<EFilterBarLayout> { enum { Value = true }; };
template<> TOOLWIDGETS_NON_ATTRIBUTED_API UEnum* StaticEnum<EFilterBarLayout>();
// ********** End Enum EFilterBarLayout ************************************************************

// ********** Begin Enum EFilterPillStyle **********************************************************
#define FOREACH_ENUM_EFILTERPILLSTYLE(op) \
	op(EFilterPillStyle::Default) \
	op(EFilterPillStyle::Basic) 

enum class EFilterPillStyle : uint8;
template<> struct TIsUEnumClass<EFilterPillStyle> { enum { Value = true }; };
template<> TOOLWIDGETS_NON_ATTRIBUTED_API UEnum* StaticEnum<EFilterPillStyle>();
// ********** End Enum EFilterPillStyle ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
