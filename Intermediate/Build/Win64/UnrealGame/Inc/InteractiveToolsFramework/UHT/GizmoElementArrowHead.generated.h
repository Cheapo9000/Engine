// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoElementArrowHead.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoElementArrowHead_generated_h
#error "GizmoElementArrowHead.generated.h already included, missing '#pragma once' in GizmoElementArrowHead.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoElementArrowHead_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGizmoElementArrowHead ***************************************************
struct Z_Construct_UClass_UGizmoElementArrowHead_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementArrowHead_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrowHead_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoElementArrowHead(); \
	friend struct ::Z_Construct_UClass_UGizmoElementArrowHead_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoElementArrowHead_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoElementArrowHead, UGizmoElementGroupBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoElementArrowHead_NoRegister) \
	DECLARE_SERIALIZER(UGizmoElementArrowHead)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrowHead_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoElementArrowHead(UGizmoElementArrowHead&&) = delete; \
	UGizmoElementArrowHead(const UGizmoElementArrowHead&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoElementArrowHead); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoElementArrowHead); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGizmoElementArrowHead) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoElementArrowHead();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrowHead_h_27_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrowHead_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrowHead_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrowHead_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoElementArrowHead;

// ********** End Class UGizmoElementArrowHead *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrowHead_h

// ********** Begin Enum EGizmoElementArrowHeadType ************************************************
#define FOREACH_ENUM_EGIZMOELEMENTARROWHEADTYPE(op) \
	op(EGizmoElementArrowHeadType::None) \
	op(EGizmoElementArrowHeadType::Cone) \
	op(EGizmoElementArrowHeadType::Cube) \
	op(EGizmoElementArrowHeadType::Sphere) 

enum class EGizmoElementArrowHeadType;
template<> struct TIsUEnumClass<EGizmoElementArrowHeadType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EGizmoElementArrowHeadType>();
// ********** End Enum EGizmoElementArrowHeadType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
