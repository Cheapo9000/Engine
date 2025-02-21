// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Font/AvaFontObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHETEXT_AvaFontObject_generated_h
#error "AvaFontObject.generated.h already included, missing '#pragma once' in AvaFontObject.h"
#endif
#define AVALANCHETEXT_AvaFontObject_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_Font_AvaFontObject_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaFontObject(); \
	friend struct Z_Construct_UClass_UAvaFontObject_Statics; \
public: \
	DECLARE_CLASS(UAvaFontObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheText"), NO_API) \
	DECLARE_SERIALIZER(UAvaFontObject)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_Font_AvaFontObject_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaFontObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaFontObject(UAvaFontObject&&); \
	UAvaFontObject(const UAvaFontObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaFontObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaFontObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaFontObject) \
	NO_API virtual ~UAvaFontObject();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_Font_AvaFontObject_h_58_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_Font_AvaFontObject_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_Font_AvaFontObject_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_Font_AvaFontObject_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHETEXT_API UClass* StaticClass<class UAvaFontObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheText_Public_Font_AvaFontObject_h


#define FOREACH_ENUM_EAVAFONTSOURCE(op) \
	op(EAvaFontSource::System) \
	op(EAvaFontSource::Project) \
	op(EAvaFontSource::Invalid) 

enum class EAvaFontSource : uint8;
template<> struct TIsUEnumClass<EAvaFontSource> { enum { Value = true }; };
template<> AVALANCHETEXT_API UEnum* StaticEnum<EAvaFontSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
