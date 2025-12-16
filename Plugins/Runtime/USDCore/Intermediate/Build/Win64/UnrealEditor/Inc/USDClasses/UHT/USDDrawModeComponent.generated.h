// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDDrawModeComponent.h"

#ifdef USDCLASSES_USDDrawModeComponent_generated_h
#error "USDDrawModeComponent.generated.h already included, missing '#pragma once' in USDDrawModeComponent.h"
#endif
#define USDCLASSES_USDDrawModeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class EUsdDrawMode : int32;
enum class EUsdModelCardFace : int32;
enum class EUsdModelCardGeometry : int32;
struct FLinearColor;

// ********** Begin Class UUsdDrawModeComponent ****************************************************
#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDrawModeComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTextureForFace); \
	DECLARE_FUNCTION(execGetTextureForFace); \
	DECLARE_FUNCTION(execSetCardTextureZNeg); \
	DECLARE_FUNCTION(execSetCardTextureYNeg); \
	DECLARE_FUNCTION(execSetCardTextureXNeg); \
	DECLARE_FUNCTION(execSetCardTextureZPos); \
	DECLARE_FUNCTION(execSetCardTextureYPos); \
	DECLARE_FUNCTION(execSetCardTextureXPos); \
	DECLARE_FUNCTION(execSetCardGeometry); \
	DECLARE_FUNCTION(execSetBoundsColor); \
	DECLARE_FUNCTION(execSetDrawMode); \
	DECLARE_FUNCTION(execSetBoundsMax); \
	DECLARE_FUNCTION(execSetBoundsMin);


struct Z_Construct_UClass_UUsdDrawModeComponent_Statics;
USDCLASSES_API UClass* Z_Construct_UClass_UUsdDrawModeComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDrawModeComponent_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdDrawModeComponent(); \
	friend struct ::Z_Construct_UClass_UUsdDrawModeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDCLASSES_API UClass* ::Z_Construct_UClass_UUsdDrawModeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UUsdDrawModeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USDClasses"), Z_Construct_UClass_UUsdDrawModeComponent_NoRegister) \
	DECLARE_SERIALIZER(UUsdDrawModeComponent)


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDrawModeComponent_h_63_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUsdDrawModeComponent(UUsdDrawModeComponent&&) = delete; \
	UUsdDrawModeComponent(const UUsdDrawModeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDCLASSES_API, UUsdDrawModeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdDrawModeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUsdDrawModeComponent)


#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDrawModeComponent_h_60_PROLOG
#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDrawModeComponent_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDrawModeComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDrawModeComponent_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDrawModeComponent_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUsdDrawModeComponent;

// ********** End Class UUsdDrawModeComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDrawModeComponent_h

// ********** Begin Enum EUsdDrawMode **************************************************************
#define FOREACH_ENUM_EUSDDRAWMODE(op) \
	op(EUsdDrawMode::Origin) \
	op(EUsdDrawMode::Bounds) \
	op(EUsdDrawMode::Cards) \
	op(EUsdDrawMode::Default) \
	op(EUsdDrawMode::Inherited) 

enum class EUsdDrawMode : int32;
template<> struct TIsUEnumClass<EUsdDrawMode> { enum { Value = true }; };
template<> USDCLASSES_NON_ATTRIBUTED_API UEnum* StaticEnum<EUsdDrawMode>();
// ********** End Enum EUsdDrawMode ****************************************************************

// ********** Begin Enum EUsdModelCardGeometry *****************************************************
#define FOREACH_ENUM_EUSDMODELCARDGEOMETRY(op) \
	op(EUsdModelCardGeometry::Cross) \
	op(EUsdModelCardGeometry::Box) \
	op(EUsdModelCardGeometry::FromTexture) 

enum class EUsdModelCardGeometry : int32;
template<> struct TIsUEnumClass<EUsdModelCardGeometry> { enum { Value = true }; };
template<> USDCLASSES_NON_ATTRIBUTED_API UEnum* StaticEnum<EUsdModelCardGeometry>();
// ********** End Enum EUsdModelCardGeometry *******************************************************

// ********** Begin Enum EUsdModelCardFace *********************************************************
#define FOREACH_ENUM_EUSDMODELCARDFACE(op) \
	op(EUsdModelCardFace::None) \
	op(EUsdModelCardFace::XPos) \
	op(EUsdModelCardFace::YPos) \
	op(EUsdModelCardFace::ZPos) \
	op(EUsdModelCardFace::XNeg) \
	op(EUsdModelCardFace::YNeg) \
	op(EUsdModelCardFace::ZNeg) 

enum class EUsdModelCardFace : int32;
template<> struct TIsUEnumClass<EUsdModelCardFace> { enum { Value = true }; };
template<> USDCLASSES_NON_ATTRIBUTED_API UEnum* StaticEnum<EUsdModelCardFace>();
// ********** End Enum EUsdModelCardFace ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
