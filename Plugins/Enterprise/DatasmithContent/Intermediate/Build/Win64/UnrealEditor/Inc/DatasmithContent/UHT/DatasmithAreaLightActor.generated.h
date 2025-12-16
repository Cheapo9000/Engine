// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithAreaLightActor.h"

#ifdef DATASMITHCONTENT_DatasmithAreaLightActor_generated_h
#error "DatasmithAreaLightActor.generated.h already included, missing '#pragma once' in DatasmithAreaLightActor.h"
#endif
#define DATASMITHCONTENT_DatasmithAreaLightActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADatasmithAreaLightActor *************************************************
struct Z_Construct_UClass_ADatasmithAreaLightActor_Statics;
DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithAreaLightActor_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADatasmithAreaLightActor(); \
	friend struct ::Z_Construct_UClass_ADatasmithAreaLightActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHCONTENT_API UClass* ::Z_Construct_UClass_ADatasmithAreaLightActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADatasmithAreaLightActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithContent"), Z_Construct_UClass_ADatasmithAreaLightActor_NoRegister) \
	DECLARE_SERIALIZER(ADatasmithAreaLightActor)


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADatasmithAreaLightActor(ADatasmithAreaLightActor&&) = delete; \
	ADatasmithAreaLightActor(const ADatasmithAreaLightActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHCONTENT_API, ADatasmithAreaLightActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADatasmithAreaLightActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADatasmithAreaLightActor) \
	DATASMITHCONTENT_API virtual ~ADatasmithAreaLightActor();


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_31_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADatasmithAreaLightActor;

// ********** End Class ADatasmithAreaLightActor ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h

// ********** Begin Enum EDatasmithAreaLightActorShape *********************************************
#define FOREACH_ENUM_EDATASMITHAREALIGHTACTORSHAPE(op) \
	op(EDatasmithAreaLightActorShape::Rectangle) \
	op(EDatasmithAreaLightActorShape::Disc) \
	op(EDatasmithAreaLightActorShape::Sphere) \
	op(EDatasmithAreaLightActorShape::Cylinder) \
	op(EDatasmithAreaLightActorShape::None) 

enum class EDatasmithAreaLightActorShape : uint8;
template<> struct TIsUEnumClass<EDatasmithAreaLightActorShape> { enum { Value = true }; };
template<> DATASMITHCONTENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EDatasmithAreaLightActorShape>();
// ********** End Enum EDatasmithAreaLightActorShape ***********************************************

// ********** Begin Enum EDatasmithAreaLightActorType **********************************************
#define FOREACH_ENUM_EDATASMITHAREALIGHTACTORTYPE(op) \
	op(EDatasmithAreaLightActorType::Point) \
	op(EDatasmithAreaLightActorType::Spot) \
	op(EDatasmithAreaLightActorType::IES_DEPRECATED) \
	op(EDatasmithAreaLightActorType::Rect) 

enum class EDatasmithAreaLightActorType : uint8;
template<> struct TIsUEnumClass<EDatasmithAreaLightActorType> { enum { Value = true }; };
template<> DATASMITHCONTENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EDatasmithAreaLightActorType>();
// ********** End Enum EDatasmithAreaLightActorType ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
