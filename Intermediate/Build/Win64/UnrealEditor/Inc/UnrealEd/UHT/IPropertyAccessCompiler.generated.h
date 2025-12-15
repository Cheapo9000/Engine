// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IPropertyAccessCompiler.h"

#ifdef UNREALED_IPropertyAccessCompiler_generated_h
#error "IPropertyAccessCompiler.generated.h already included, missing '#pragma once' in IPropertyAccessCompiler.h"
#endif
#define UNREALED_IPropertyAccessCompiler_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_IPropertyAccessCompiler_h

// ********** Begin Enum EPropertyAccessBatchType **************************************************
#define FOREACH_ENUM_EPROPERTYACCESSBATCHTYPE(op) \
	op(EPropertyAccessBatchType::Unbatched) \
	op(EPropertyAccessBatchType::Batched) 

enum class EPropertyAccessBatchType : uint8;
template<> struct TIsUEnumClass<EPropertyAccessBatchType> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAccessBatchType>();
// ********** End Enum EPropertyAccessBatchType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
