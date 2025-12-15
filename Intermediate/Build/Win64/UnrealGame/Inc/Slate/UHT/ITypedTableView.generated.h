// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/Views/ITypedTableView.h"

#ifdef SLATE_ITypedTableView_generated_h
#error "ITypedTableView.generated.h already included, missing '#pragma once' in ITypedTableView.h"
#endif
#define SLATE_ITypedTableView_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Slate_Public_Framework_Views_ITypedTableView_h

// ********** Begin Enum ESelectionMode ************************************************************
#define FOREACH_ENUM_ESELECTIONMODE(op) \
	op(ESelectionMode::None) \
	op(ESelectionMode::Single) \
	op(ESelectionMode::SingleToggle) \
	op(ESelectionMode::Multi) 

namespace ESelectionMode { enum Type : int; }
template<> SLATE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESelectionMode::Type>();
// ********** End Enum ESelectionMode **************************************************************

// ********** Begin Enum ETableViewMode ************************************************************
#define FOREACH_ENUM_ETABLEVIEWMODE(op) \
	op(ETableViewMode::List) \
	op(ETableViewMode::Tile) \
	op(ETableViewMode::Tree) 

namespace ETableViewMode { enum Type : int; }
template<> SLATE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETableViewMode::Type>();
// ********** End Enum ETableViewMode **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
