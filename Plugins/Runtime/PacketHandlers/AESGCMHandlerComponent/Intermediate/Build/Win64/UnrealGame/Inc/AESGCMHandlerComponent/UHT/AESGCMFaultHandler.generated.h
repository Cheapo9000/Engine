// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AESGCMFaultHandler.h"

#ifdef AESGCMHANDLERCOMPONENT_AESGCMFaultHandler_generated_h
#error "AESGCMFaultHandler.generated.h already included, missing '#pragma once' in AESGCMFaultHandler.h"
#endif
#define AESGCMHANDLERCOMPONENT_AESGCMFaultHandler_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_PacketHandlers_AESGCMHandlerComponent_Source_Public_AESGCMFaultHandler_h

// ********** Begin Enum EAESGCMNetResult **********************************************************
#define FOREACH_ENUM_EAESGCMNETRESULT(op) \
	op(EAESGCMNetResult::Unknown) \
	op(EAESGCMNetResult::Success) \
	op(EAESGCMNetResult::AESMissingIV) \
	op(EAESGCMNetResult::AESMissingAuthTag) \
	op(EAESGCMNetResult::AESMissingPayload) \
	op(EAESGCMNetResult::AESDecryptionFailed) \
	op(EAESGCMNetResult::AESZeroLastByte) 

enum class EAESGCMNetResult : uint8;
template<> struct TIsUEnumClass<EAESGCMNetResult> { enum { Value = true }; };
template<> AESGCMHANDLERCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAESGCMNetResult>();
// ********** End Enum EAESGCMNetResult ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
