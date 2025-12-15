// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SDeleteReferencedActorDialog.h"

#ifdef UNREALED_SDeleteReferencedActorDialog_generated_h
#error "SDeleteReferencedActorDialog.generated.h already included, missing '#pragma once' in SDeleteReferencedActorDialog.h"
#endif
#define UNREALED_SDeleteReferencedActorDialog_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Private_SDeleteReferencedActorDialog_h

// ********** Begin Enum EDeletedActorReferenceTypes ***********************************************
#define FOREACH_ENUM_EDELETEDACTORREFERENCETYPES(op) \
	op(EDeletedActorReferenceTypes::None) \
	op(EDeletedActorReferenceTypes::ActorOrAsset) \
	op(EDeletedActorReferenceTypes::Group) \
	op(EDeletedActorReferenceTypes::LevelBlueprint) \
	op(EDeletedActorReferenceTypes::All) \
	op(EDeletedActorReferenceTypes::LevelAndActorOrAsset) \
	op(EDeletedActorReferenceTypes::GroupAndActorOrAsset) \
	op(EDeletedActorReferenceTypes::LevelAndGroup) 

enum class EDeletedActorReferenceTypes : uint8;
template<> struct TIsUEnumClass<EDeletedActorReferenceTypes> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EDeletedActorReferenceTypes>();
// ********** End Enum EDeletedActorReferenceTypes *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
