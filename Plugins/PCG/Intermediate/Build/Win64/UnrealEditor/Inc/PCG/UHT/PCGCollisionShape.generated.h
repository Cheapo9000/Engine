// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGCollisionShape.h"

#ifdef PCG_PCGCollisionShape_generated_h
#error "PCGCollisionShape.generated.h already included, missing '#pragma once' in PCGCollisionShape.h"
#endif
#define PCG_PCGCollisionShape_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGCollisionShape ************************************************
struct Z_Construct_UScriptStruct_FPCGCollisionShape_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShape_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGCollisionShape_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGCollisionShape;
// ********** End ScriptStruct FPCGCollisionShape **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShape_h

// ********** Begin Enum EPCGCollisionShapeType ****************************************************
#define FOREACH_ENUM_EPCGCOLLISIONSHAPETYPE(op) \
	op(EPCGCollisionShapeType::Line) \
	op(EPCGCollisionShapeType::Box) \
	op(EPCGCollisionShapeType::Sphere) \
	op(EPCGCollisionShapeType::Capsule) 

enum class EPCGCollisionShapeType : uint8;
template<> struct TIsUEnumClass<EPCGCollisionShapeType> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGCollisionShapeType>();
// ********** End Enum EPCGCollisionShapeType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
