// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/SChaosBrowseTraceFileSourceModal.h"

#ifdef CHAOSVD_SChaosBrowseTraceFileSourceModal_generated_h
#error "SChaosBrowseTraceFileSourceModal.generated.h already included, missing '#pragma once' in SChaosBrowseTraceFileSourceModal.h"
#endif
#define CHAOSVD_SChaosBrowseTraceFileSourceModal_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Widgets_SChaosBrowseTraceFileSourceModal_h

// ********** Begin Enum EChaosVDBrowseFileModalResponse *******************************************
#define FOREACH_ENUM_ECHAOSVDBROWSEFILEMODALRESPONSE(op) \
	op(EChaosVDBrowseFileModalResponse::LastOpened) \
	op(EChaosVDBrowseFileModalResponse::Profiling) \
	op(EChaosVDBrowseFileModalResponse::TraceStore) \
	op(EChaosVDBrowseFileModalResponse::Cancel) 

enum class EChaosVDBrowseFileModalResponse;
template<> struct TIsUEnumClass<EChaosVDBrowseFileModalResponse> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDBrowseFileModalResponse>();
// ********** End Enum EChaosVDBrowseFileModalResponse *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
