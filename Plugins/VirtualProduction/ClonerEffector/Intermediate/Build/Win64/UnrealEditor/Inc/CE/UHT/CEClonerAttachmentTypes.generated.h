// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Attachments/CEClonerAttachmentTypes.h"

#ifdef CLONEREFFECTOR_CEClonerAttachmentTypes_generated_h
#error "CEClonerAttachmentTypes.generated.h already included, missing '#pragma once' in CEClonerAttachmentTypes.h"
#endif
#define CLONEREFFECTOR_CEClonerAttachmentTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Attachments_CEClonerAttachmentTypes_h

// ********** Begin Enum ECEClonerAttachmentStatus *************************************************
#define FOREACH_ENUM_ECECLONERATTACHMENTSTATUS(op) \
	op(ECEClonerAttachmentStatus::Invalid) \
	op(ECEClonerAttachmentStatus::Outdated) \
	op(ECEClonerAttachmentStatus::Updated) \
	op(ECEClonerAttachmentStatus::Updating) 

enum class ECEClonerAttachmentStatus : uint8;
template<> struct TIsUEnumClass<ECEClonerAttachmentStatus> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerAttachmentStatus>();
// ********** End Enum ECEClonerAttachmentStatus ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
