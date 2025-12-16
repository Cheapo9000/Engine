// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Filters/NegatableFilter.h"

#ifdef LEVELSNAPSHOTSEDITOR_NegatableFilter_generated_h
#error "NegatableFilter.generated.h already included, missing '#pragma once' in NegatableFilter.h"
#endif
#define LEVELSNAPSHOTSEDITOR_NegatableFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNegatableFilter *********************************************************
struct Z_Construct_UClass_UNegatableFilter_Statics;
LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UNegatableFilter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_NegatableFilter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNegatableFilter(); \
	friend struct ::Z_Construct_UClass_UNegatableFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTSEDITOR_API UClass* ::Z_Construct_UClass_UNegatableFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UNegatableFilter, ULevelSnapshotFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshotsEditor"), Z_Construct_UClass_UNegatableFilter_NoRegister) \
	DECLARE_SERIALIZER(UNegatableFilter)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_NegatableFilter_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNegatableFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNegatableFilter(UNegatableFilter&&) = delete; \
	UNegatableFilter(const UNegatableFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNegatableFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNegatableFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNegatableFilter) \
	NO_API virtual ~UNegatableFilter();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_NegatableFilter_h_21_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_NegatableFilter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_NegatableFilter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_NegatableFilter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNegatableFilter;

// ********** End Class UNegatableFilter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_NegatableFilter_h

// ********** Begin Enum EFilterBehavior ***********************************************************
#define FOREACH_ENUM_EFILTERBEHAVIOR(op) \
	op(EFilterBehavior::DoNotNegate) \
	op(EFilterBehavior::Negate) 

enum class EFilterBehavior : uint8;
template<> struct TIsUEnumClass<EFilterBehavior> { enum { Value = true }; };
template<> LEVELSNAPSHOTSEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EFilterBehavior>();
// ********** End Enum EFilterBehavior *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
