// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CollectionManagerScriptingTypes.h"

#ifdef ENGINE_CollectionManagerScriptingTypes_generated_h
#error "CollectionManagerScriptingTypes.generated.h already included, missing '#pragma once' in CollectionManagerScriptingTypes.h"
#endif
#define ENGINE_CollectionManagerScriptingTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_CollectionManagerScriptingTypes_h

// ********** Begin Enum ECollectionScriptingShareType *********************************************
#define FOREACH_ENUM_ECOLLECTIONSCRIPTINGSHARETYPE(op) \
	op(ECollectionScriptingShareType::Local) \
	op(ECollectionScriptingShareType::Private) \
	op(ECollectionScriptingShareType::Shared) 

enum class ECollectionScriptingShareType : uint8;
template<> struct TIsUEnumClass<ECollectionScriptingShareType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECollectionScriptingShareType>();
// ********** End Enum ECollectionScriptingShareType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
