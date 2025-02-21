// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAvaSequenceProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESEQUENCE_IAvaSequenceProvider_generated_h
#error "IAvaSequenceProvider.generated.h already included, missing '#pragma once' in IAvaSequenceProvider.h"
#endif
#define AVALANCHESEQUENCE_IAvaSequenceProvider_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_IAvaSequenceProvider_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHESEQUENCE_API UAvaSequenceProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaSequenceProvider(UAvaSequenceProvider&&); \
	UAvaSequenceProvider(const UAvaSequenceProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESEQUENCE_API, UAvaSequenceProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSequenceProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaSequenceProvider) \
	AVALANCHESEQUENCE_API virtual ~UAvaSequenceProvider();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_IAvaSequenceProvider_h_27_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaSequenceProvider(); \
	friend struct Z_Construct_UClass_UAvaSequenceProvider_Statics; \
public: \
	DECLARE_CLASS(UAvaSequenceProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AvalancheSequence"), AVALANCHESEQUENCE_API) \
	DECLARE_SERIALIZER(UAvaSequenceProvider)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_IAvaSequenceProvider_h_27_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_IAvaSequenceProvider_h_27_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_IAvaSequenceProvider_h_27_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_IAvaSequenceProvider_h_27_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaSequenceProvider() {} \
public: \
	typedef UAvaSequenceProvider UClassType; \
	typedef IAvaSequenceProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_IAvaSequenceProvider_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_IAvaSequenceProvider_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_IAvaSequenceProvider_h_27_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESEQUENCE_API UClass* StaticClass<class UAvaSequenceProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_IAvaSequenceProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
