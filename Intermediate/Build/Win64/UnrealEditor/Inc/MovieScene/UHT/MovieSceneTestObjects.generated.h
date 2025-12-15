// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/MovieSceneTestObjects.h"

#ifdef MOVIESCENE_MovieSceneTestObjects_generated_h
#error "MovieSceneTestObjects.generated.h already included, missing '#pragma once' in MovieSceneTestObjects.h"
#endif
#define MOVIESCENE_MovieSceneTestObjects_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTestMovieSceneEvalTemplate ***************************************
struct Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneEvalTemplate Super;


struct FTestMovieSceneEvalTemplate;
// ********** End ScriptStruct FTestMovieSceneEvalTemplate *****************************************

// ********** Begin Class UTestMovieSceneTrack *****************************************************
struct Z_Construct_UClass_UTestMovieSceneTrack_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestMovieSceneTrack(); \
	friend struct ::Z_Construct_UClass_UTestMovieSceneTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UTestMovieSceneTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestMovieSceneTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UTestMovieSceneTrack_NoRegister) \
	DECLARE_SERIALIZER(UTestMovieSceneTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UTestMovieSceneTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UTestMovieSceneTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestMovieSceneTrack(UTestMovieSceneTrack&&) = delete; \
	UTestMovieSceneTrack(const UTestMovieSceneTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UTestMovieSceneTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMovieSceneTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMovieSceneTrack) \
	MOVIESCENE_API virtual ~UTestMovieSceneTrack();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_27_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_32_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestMovieSceneTrack;

// ********** End Class UTestMovieSceneTrack *******************************************************

// ********** Begin Class UTestMovieSceneSection ***************************************************
struct Z_Construct_UClass_UTestMovieSceneSection_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestMovieSceneSection(); \
	friend struct ::Z_Construct_UClass_UTestMovieSceneSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UTestMovieSceneSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestMovieSceneSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UTestMovieSceneSection_NoRegister) \
	DECLARE_SERIALIZER(UTestMovieSceneSection)


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UTestMovieSceneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestMovieSceneSection(UTestMovieSceneSection&&) = delete; \
	UTestMovieSceneSection(const UTestMovieSceneSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UTestMovieSceneSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMovieSceneSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMovieSceneSection) \
	MOVIESCENE_API virtual ~UTestMovieSceneSection();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_56_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_60_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestMovieSceneSection;

// ********** End Class UTestMovieSceneSection *****************************************************

// ********** Begin Class UTestMovieSceneSequence **************************************************
struct Z_Construct_UClass_UTestMovieSceneSequence_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSequence_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestMovieSceneSequence(); \
	friend struct ::Z_Construct_UClass_UTestMovieSceneSequence_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UTestMovieSceneSequence_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestMovieSceneSequence, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UTestMovieSceneSequence_NoRegister) \
	DECLARE_SERIALIZER(UTestMovieSceneSequence)


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_67_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestMovieSceneSequence(UTestMovieSceneSequence&&) = delete; \
	UTestMovieSceneSequence(const UTestMovieSceneSequence&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UTestMovieSceneSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMovieSceneSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMovieSceneSequence) \
	MOVIESCENE_API virtual ~UTestMovieSceneSequence();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_63_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_67_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestMovieSceneSequence;

// ********** End Class UTestMovieSceneSequence ****************************************************

// ********** Begin Class UTestMovieSceneSubTrack **************************************************
struct Z_Construct_UClass_UTestMovieSceneSubTrack_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSubTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestMovieSceneSubTrack(); \
	friend struct ::Z_Construct_UClass_UTestMovieSceneSubTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UTestMovieSceneSubTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestMovieSceneSubTrack, UMovieSceneSubTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UTestMovieSceneSubTrack_NoRegister) \
	DECLARE_SERIALIZER(UTestMovieSceneSubTrack)


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UTestMovieSceneSubTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestMovieSceneSubTrack(UTestMovieSceneSubTrack&&) = delete; \
	UTestMovieSceneSubTrack(const UTestMovieSceneSubTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UTestMovieSceneSubTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMovieSceneSubTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMovieSceneSubTrack) \
	MOVIESCENE_API virtual ~UTestMovieSceneSubTrack();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_92_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_96_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_96_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestMovieSceneSubTrack;

// ********** End Class UTestMovieSceneSubTrack ****************************************************

// ********** Begin Class UTestMovieSceneSubSection ************************************************
struct Z_Construct_UClass_UTestMovieSceneSubSection_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSubSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestMovieSceneSubSection(); \
	friend struct ::Z_Construct_UClass_UTestMovieSceneSubSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UTestMovieSceneSubSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestMovieSceneSubSection, UMovieSceneSubSection, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UTestMovieSceneSubSection_NoRegister) \
	DECLARE_SERIALIZER(UTestMovieSceneSubSection)


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UTestMovieSceneSubSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestMovieSceneSubSection(UTestMovieSceneSubSection&&) = delete; \
	UTestMovieSceneSubSection(const UTestMovieSceneSubSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UTestMovieSceneSubSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMovieSceneSubSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMovieSceneSubSection) \
	MOVIESCENE_API virtual ~UTestMovieSceneSubSection();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_104_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_107_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestMovieSceneSubSection;

// ********** End Class UTestMovieSceneSubSection **************************************************

// ********** Begin Class UTestMovieSceneEvalHookTrack *********************************************
struct Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneEvalHookTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestMovieSceneEvalHookTrack(); \
	friend struct ::Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UTestMovieSceneEvalHookTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestMovieSceneEvalHookTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UTestMovieSceneEvalHookTrack_NoRegister) \
	DECLARE_SERIALIZER(UTestMovieSceneEvalHookTrack)


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UTestMovieSceneEvalHookTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestMovieSceneEvalHookTrack(UTestMovieSceneEvalHookTrack&&) = delete; \
	UTestMovieSceneEvalHookTrack(const UTestMovieSceneEvalHookTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UTestMovieSceneEvalHookTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMovieSceneEvalHookTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMovieSceneEvalHookTrack) \
	MOVIESCENE_API virtual ~UTestMovieSceneEvalHookTrack();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_110_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_114_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_114_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestMovieSceneEvalHookTrack;

// ********** End Class UTestMovieSceneEvalHookTrack ***********************************************

// ********** Begin Class UTestMovieSceneEvalHookSection *******************************************
struct Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneEvalHookSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestMovieSceneEvalHookSection(); \
	friend struct ::Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UTestMovieSceneEvalHookSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestMovieSceneEvalHookSection, UMovieSceneHookSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UTestMovieSceneEvalHookSection_NoRegister) \
	DECLARE_SERIALIZER(UTestMovieSceneEvalHookSection)


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_137_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestMovieSceneEvalHookSection(UTestMovieSceneEvalHookSection&&) = delete; \
	UTestMovieSceneEvalHookSection(const UTestMovieSceneEvalHookSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UTestMovieSceneEvalHookSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMovieSceneEvalHookSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMovieSceneEvalHookSection) \
	MOVIESCENE_API virtual ~UTestMovieSceneEvalHookSection();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_133_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_137_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_137_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestMovieSceneEvalHookSection;

// ********** End Class UTestMovieSceneEvalHookSection *********************************************

// ********** Begin ScriptStruct FTestMovieSceneStruct *********************************************
struct Z_Construct_UScriptStruct_FTestMovieSceneStruct_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_174_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTestMovieSceneStruct_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FTestMovieSceneStruct;
// ********** End ScriptStruct FTestMovieSceneStruct ***********************************************

// ********** Begin ScriptStruct FTestMovieSceneStruct2 ********************************************
struct Z_Construct_UScriptStruct_FTestMovieSceneStruct2_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_198_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTestMovieSceneStruct2_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FTestMovieSceneStruct2;
// ********** End ScriptStruct FTestMovieSceneStruct2 **********************************************

// ********** Begin Class UTestMovieSceneObject ****************************************************
struct Z_Construct_UClass_UTestMovieSceneObject_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneObject_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_210_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestMovieSceneObject(); \
	friend struct ::Z_Construct_UClass_UTestMovieSceneObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UTestMovieSceneObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestMovieSceneObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UTestMovieSceneObject_NoRegister) \
	DECLARE_SERIALIZER(UTestMovieSceneObject)


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_210_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UTestMovieSceneObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestMovieSceneObject(UTestMovieSceneObject&&) = delete; \
	UTestMovieSceneObject(const UTestMovieSceneObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UTestMovieSceneObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMovieSceneObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMovieSceneObject) \
	MOVIESCENE_API virtual ~UTestMovieSceneObject();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_207_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_210_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_210_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_210_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestMovieSceneObject;

// ********** End Class UTestMovieSceneObject ******************************************************

// ********** Begin Class ATestMovieSceneArrayPropertiesActor **************************************
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_216_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTestSetterFloat);


struct Z_Construct_UClass_ATestMovieSceneArrayPropertiesActor_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_ATestMovieSceneArrayPropertiesActor_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_216_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestMovieSceneArrayPropertiesActor(); \
	friend struct ::Z_Construct_UClass_ATestMovieSceneArrayPropertiesActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_ATestMovieSceneArrayPropertiesActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ATestMovieSceneArrayPropertiesActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_ATestMovieSceneArrayPropertiesActor_NoRegister) \
	DECLARE_SERIALIZER(ATestMovieSceneArrayPropertiesActor)


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_216_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATestMovieSceneArrayPropertiesActor(ATestMovieSceneArrayPropertiesActor&&) = delete; \
	ATestMovieSceneArrayPropertiesActor(const ATestMovieSceneArrayPropertiesActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, ATestMovieSceneArrayPropertiesActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestMovieSceneArrayPropertiesActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestMovieSceneArrayPropertiesActor) \
	MOVIESCENE_API virtual ~ATestMovieSceneArrayPropertiesActor();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_213_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_216_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_216_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_216_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_216_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATestMovieSceneArrayPropertiesActor;

// ********** End Class ATestMovieSceneArrayPropertiesActor ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h

// ********** Begin Enum ETestMovieSceneEnum *******************************************************
#define FOREACH_ENUM_ETESTMOVIESCENEENUM(op) \
	op(ETestMovieSceneEnum::One) \
	op(ETestMovieSceneEnum::Two) \
	op(ETestMovieSceneEnum::Three) 

enum class ETestMovieSceneEnum : uint8;
template<> struct TIsUEnumClass<ETestMovieSceneEnum> { enum { Value = true }; };
template<> MOVIESCENE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestMovieSceneEnum>();
// ********** End Enum ETestMovieSceneEnum *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
