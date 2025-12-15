// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IContentSource.h"

#ifdef ADDCONTENTDIALOG_IContentSource_generated_h
#error "IContentSource.generated.h already included, missing '#pragma once' in IContentSource.h"
#endif
#define ADDCONTENTDIALOG_IContentSource_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AddContentDialog_Private_IContentSource_h

// ********** Begin Enum EContentSourceCategory ****************************************************
#define FOREACH_ENUM_ECONTENTSOURCECATEGORY(op) \
	op(EContentSourceCategory::BlueprintFeature) \
	op(EContentSourceCategory::CodeFeature) \
	op(EContentSourceCategory::EnterpriseFeature) \
	op(EContentSourceCategory::Content) \
	op(EContentSourceCategory::EnterpriseContent) \
	op(EContentSourceCategory::SharedPack) \
	op(EContentSourceCategory::Unknown) 

enum class EContentSourceCategory : uint8;
template<> struct TIsUEnumClass<EContentSourceCategory> { enum { Value = true }; };
template<> ADDCONTENTDIALOG_NON_ATTRIBUTED_API UEnum* StaticEnum<EContentSourceCategory>();
// ********** End Enum EContentSourceCategory ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
