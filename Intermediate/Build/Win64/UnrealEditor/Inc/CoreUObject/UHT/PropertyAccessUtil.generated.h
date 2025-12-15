// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/PropertyAccessUtil.h"

#ifdef COREUOBJECT_PropertyAccessUtil_generated_h
#error "PropertyAccessUtil.generated.h already included, missing '#pragma once' in PropertyAccessUtil.h"
#endif
#define COREUOBJECT_PropertyAccessUtil_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PropertyAccessUtil_h

// ********** Begin Enum EPropertyAccessChangeNotifyMode *******************************************
#define FOREACH_ENUM_EPROPERTYACCESSCHANGENOTIFYMODE(op) \
	op(EPropertyAccessChangeNotifyMode::Default) \
	op(EPropertyAccessChangeNotifyMode::Never) \
	op(EPropertyAccessChangeNotifyMode::Always) 

enum class EPropertyAccessChangeNotifyMode : uint8;
template<> struct TIsUEnumClass<EPropertyAccessChangeNotifyMode> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAccessChangeNotifyMode>();
// ********** End Enum EPropertyAccessChangeNotifyMode *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
