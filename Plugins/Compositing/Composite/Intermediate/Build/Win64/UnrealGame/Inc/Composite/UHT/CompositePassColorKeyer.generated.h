// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Passes/CompositePassColorKeyer.h"

#ifdef COMPOSITE_CompositePassColorKeyer_generated_h
#error "CompositePassColorKeyer.generated.h already included, missing '#pragma once' in CompositePassColorKeyer.h"
#endif
#define COMPOSITE_CompositePassColorKeyer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositePassColorKeyer *************************************************
struct Z_Construct_UClass_UCompositePassColorKeyer_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositePassColorKeyer_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassColorKeyer_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositePassColorKeyer(); \
	friend struct ::Z_Construct_UClass_UCompositePassColorKeyer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositePassColorKeyer_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositePassColorKeyer, UCompositePassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositePassColorKeyer_NoRegister) \
	DECLARE_SERIALIZER(UCompositePassColorKeyer)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassColorKeyer_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositePassColorKeyer(UCompositePassColorKeyer&&) = delete; \
	UCompositePassColorKeyer(const UCompositePassColorKeyer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, UCompositePassColorKeyer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositePassColorKeyer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositePassColorKeyer)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassColorKeyer_h_41_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassColorKeyer_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassColorKeyer_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassColorKeyer_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositePassColorKeyer;

// ********** End Class UCompositePassColorKeyer ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassColorKeyer_h

// ********** Begin Enum ECompositeColorKeyerVisualization *****************************************
#define FOREACH_ENUM_ECOMPOSITECOLORKEYERVISUALIZATION(op) \
	op(ECompositeColorKeyerVisualization::Key) \
	op(ECompositeColorKeyerVisualization::Fill) \
	op(ECompositeColorKeyerVisualization::Alpha) 

enum class ECompositeColorKeyerVisualization : uint8;
template<> struct TIsUEnumClass<ECompositeColorKeyerVisualization> { enum { Value = true }; };
template<> COMPOSITE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECompositeColorKeyerVisualization>();
// ********** End Enum ECompositeColorKeyerVisualization *******************************************

// ********** Begin Enum ECompositeColorKeyerScreenType ********************************************
#define FOREACH_ENUM_ECOMPOSITECOLORKEYERSCREENTYPE(op) \
	op(ECompositeColorKeyerScreenType::Red) \
	op(ECompositeColorKeyerScreenType::Green) \
	op(ECompositeColorKeyerScreenType::Blue) 

enum class ECompositeColorKeyerScreenType : uint8;
template<> struct TIsUEnumClass<ECompositeColorKeyerScreenType> { enum { Value = true }; };
template<> COMPOSITE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECompositeColorKeyerScreenType>();
// ********** End Enum ECompositeColorKeyerScreenType **********************************************

// ********** Begin Enum ECompositeDenoiseMethod ***************************************************
#define FOREACH_ENUM_ECOMPOSITEDENOISEMETHOD(op) \
	op(ECompositeDenoiseMethod::None) \
	op(ECompositeDenoiseMethod::Median3x3) 

enum class ECompositeDenoiseMethod : uint8;
template<> struct TIsUEnumClass<ECompositeDenoiseMethod> { enum { Value = true }; };
template<> COMPOSITE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECompositeDenoiseMethod>();
// ********** End Enum ECompositeDenoiseMethod *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
