// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DisplayNodes/VariantManagerDisplayNode.h"

#ifdef VARIANTMANAGER_VariantManagerDisplayNode_generated_h
#error "VariantManagerDisplayNode.generated.h already included, missing '#pragma once' in VariantManagerDisplayNode.h"
#endif
#define VARIANTMANAGER_VariantManagerDisplayNode_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_DisplayNodes_VariantManagerDisplayNode_h

// ********** Begin Enum EVariantManagerNodeType ***************************************************
#define FOREACH_ENUM_EVARIANTMANAGERNODETYPE(op) \
	op(EVariantManagerNodeType::VariantSet) \
	op(EVariantManagerNodeType::Variant) \
	op(EVariantManagerNodeType::Actor) \
	op(EVariantManagerNodeType::Property) \
	op(EVariantManagerNodeType::Function) \
	op(EVariantManagerNodeType::Spacer) 

enum class EVariantManagerNodeType : uint8;
template<> struct TIsUEnumClass<EVariantManagerNodeType> { enum { Value = true }; };
template<> VARIANTMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<EVariantManagerNodeType>();
// ********** End Enum EVariantManagerNodeType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
