// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/UObject/PropertyStateTrackingTest.h"

#ifdef COREUOBJECT_PropertyStateTrackingTest_generated_h
#error "PropertyStateTrackingTest.generated.h already included, missing '#pragma once' in PropertyStateTrackingTest.h"
#endif
#define COREUOBJECT_PropertyStateTrackingTest_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTestInstanceDataObjectPoint **************************************
#if WITH_TESTS
struct Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyStateTrackingTest_h_148_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTestInstanceDataObjectPoint_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FTestInstanceDataObjectPoint;
#endif // WITH_TESTS
// ********** End ScriptStruct FTestInstanceDataObjectPoint ****************************************

// ********** Begin ScriptStruct FTestInstanceDataObjectPointAlternate *****************************
#if WITH_TESTS
struct Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyStateTrackingTest_h_167_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTestInstanceDataObjectPointAlternate_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FTestInstanceDataObjectPointAlternate;
#endif // WITH_TESTS
// ********** End ScriptStruct FTestInstanceDataObjectPointAlternate *******************************

// ********** Begin ScriptStruct FTestInstanceDataObjectStruct *************************************
#if WITH_TESTS
struct Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyStateTrackingTest_h_183_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTestInstanceDataObjectStruct_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FTestInstanceDataObjectStruct;
#endif // WITH_TESTS
// ********** End ScriptStruct FTestInstanceDataObjectStruct ***************************************

// ********** Begin ScriptStruct FTestInstanceDataObjectStructAlternate ****************************
#if WITH_TESTS
struct Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics;
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyStateTrackingTest_h_238_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTestInstanceDataObjectStructAlternate_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


struct FTestInstanceDataObjectStructAlternate;
#endif // WITH_TESTS
// ********** End ScriptStruct FTestInstanceDataObjectStructAlternate ******************************

// ********** Begin Class UTestInstanceDataObjectClass *********************************************
#if WITH_TESTS
struct Z_Construct_UClass_UTestInstanceDataObjectClass_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UTestInstanceDataObjectClass_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyStateTrackingTest_h_299_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestInstanceDataObjectClass(); \
	friend struct ::Z_Construct_UClass_UTestInstanceDataObjectClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UTestInstanceDataObjectClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestInstanceDataObjectClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UTestInstanceDataObjectClass_NoRegister) \
	DECLARE_SERIALIZER(UTestInstanceDataObjectClass)


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyStateTrackingTest_h_299_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestInstanceDataObjectClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestInstanceDataObjectClass(UTestInstanceDataObjectClass&&) = delete; \
	UTestInstanceDataObjectClass(const UTestInstanceDataObjectClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestInstanceDataObjectClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestInstanceDataObjectClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestInstanceDataObjectClass) \
	NO_API virtual ~UTestInstanceDataObjectClass();


#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyStateTrackingTest_h_296_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyStateTrackingTest_h_299_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyStateTrackingTest_h_299_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyStateTrackingTest_h_299_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestInstanceDataObjectClass;

#endif // WITH_TESTS
// ********** End Class UTestInstanceDataObjectClass ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Tests_UObject_PropertyStateTrackingTest_h

// ********** Begin Enum ETestInstanceDataObjectBird ***********************************************
#if WITH_TESTS
#define FOREACH_ENUM_ETESTINSTANCEDATAOBJECTBIRD(op) \
	op(TIDOB_None) \
	op(TIDOB_Cardinal) \
	op(TIDOB_Crow) \
	op(TIDOB_Eagle) \
	op(TIDOB_Hawk) \
	op(TIDOB_Owl) \
	op(TIDOB_Raven) 

enum ETestInstanceDataObjectBird : uint8;
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestInstanceDataObjectBird>();
#endif // WITH_TESTS
// ********** End Enum ETestInstanceDataObjectBird *************************************************

// ********** Begin Enum ETestInstanceDataObjectGrain **********************************************
#if WITH_TESTS
#define FOREACH_ENUM_ETESTINSTANCEDATAOBJECTGRAIN(op) \
	op(ETestInstanceDataObjectGrain::None) \
	op(ETestInstanceDataObjectGrain::Barley) \
	op(ETestInstanceDataObjectGrain::Corn) \
	op(ETestInstanceDataObjectGrain::Quinoa) \
	op(ETestInstanceDataObjectGrain::Rice) \
	op(ETestInstanceDataObjectGrain::Wheat) 

namespace ETestInstanceDataObjectGrain { enum Type : uint8; }
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestInstanceDataObjectGrain::Type>();
#endif // WITH_TESTS
// ********** End Enum ETestInstanceDataObjectGrain ************************************************

// ********** Begin Enum ETestInstanceDataObjectGrainAlternate *************************************
#if WITH_TESTS
#define FOREACH_ENUM_ETESTINSTANCEDATAOBJECTGRAINALTERNATE(op) \
	op(ETestInstanceDataObjectGrainAlternate::None) \
	op(ETestInstanceDataObjectGrainAlternate::Corn) \
	op(ETestInstanceDataObjectGrainAlternate::Rice) \
	op(ETestInstanceDataObjectGrainAlternate::Rye) \
	op(ETestInstanceDataObjectGrainAlternate::Wheat) 

namespace ETestInstanceDataObjectGrainAlternate { enum Type : uint8; }
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestInstanceDataObjectGrainAlternate::Type>();
#endif // WITH_TESTS
// ********** End Enum ETestInstanceDataObjectGrainAlternate ***************************************

// ********** Begin Enum ETestInstanceDataObjectGrainAlternateEnumClass ****************************
#if WITH_TESTS
#define FOREACH_ENUM_ETESTINSTANCEDATAOBJECTGRAINALTERNATEENUMCLASS(op) \
	op(ETestInstanceDataObjectGrainAlternateEnumClass::None) \
	op(ETestInstanceDataObjectGrainAlternateEnumClass::Corn) \
	op(ETestInstanceDataObjectGrainAlternateEnumClass::Rice) \
	op(ETestInstanceDataObjectGrainAlternateEnumClass::Rye) \
	op(ETestInstanceDataObjectGrainAlternateEnumClass::Wheat) 

enum class ETestInstanceDataObjectGrainAlternateEnumClass : uint8;
template<> struct TIsUEnumClass<ETestInstanceDataObjectGrainAlternateEnumClass> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestInstanceDataObjectGrainAlternateEnumClass>();
#endif // WITH_TESTS
// ********** End Enum ETestInstanceDataObjectGrainAlternateEnumClass ******************************

// ********** Begin Enum ETestInstanceDataObjectFruit **********************************************
#if WITH_TESTS
#define FOREACH_ENUM_ETESTINSTANCEDATAOBJECTFRUIT(op) \
	op(ETestInstanceDataObjectFruit::None) \
	op(ETestInstanceDataObjectFruit::Apple) \
	op(ETestInstanceDataObjectFruit::Banana) \
	op(ETestInstanceDataObjectFruit::Lemon) \
	op(ETestInstanceDataObjectFruit::Orange) 

enum class ETestInstanceDataObjectFruit : uint8;
template<> struct TIsUEnumClass<ETestInstanceDataObjectFruit> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestInstanceDataObjectFruit>();
#endif // WITH_TESTS
// ********** End Enum ETestInstanceDataObjectFruit ************************************************

// ********** Begin Enum ETestInstanceDataObjectFruitAlternate *************************************
#if WITH_TESTS
#define FOREACH_ENUM_ETESTINSTANCEDATAOBJECTFRUITALTERNATE(op) \
	op(ETestInstanceDataObjectFruitAlternate::None) \
	op(ETestInstanceDataObjectFruitAlternate::Apple) \
	op(ETestInstanceDataObjectFruitAlternate::Cherry) \
	op(ETestInstanceDataObjectFruitAlternate::Orange) \
	op(ETestInstanceDataObjectFruitAlternate::Pear) 

enum class ETestInstanceDataObjectFruitAlternate : uint8;
template<> struct TIsUEnumClass<ETestInstanceDataObjectFruitAlternate> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestInstanceDataObjectFruitAlternate>();
#endif // WITH_TESTS
// ********** End Enum ETestInstanceDataObjectFruitAlternate ***************************************

// ********** Begin Enum ETestInstanceDataObjectFruitAlternateNamespace ****************************
#if WITH_TESTS
#define FOREACH_ENUM_ETESTINSTANCEDATAOBJECTFRUITALTERNATENAMESPACE(op) \
	op(ETestInstanceDataObjectFruitAlternateNamespace::None) \
	op(ETestInstanceDataObjectFruitAlternateNamespace::Apple) \
	op(ETestInstanceDataObjectFruitAlternateNamespace::Cherry) \
	op(ETestInstanceDataObjectFruitAlternateNamespace::Orange) \
	op(ETestInstanceDataObjectFruitAlternateNamespace::Pear) 

namespace ETestInstanceDataObjectFruitAlternateNamespace { enum Type : uint8; }
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestInstanceDataObjectFruitAlternateNamespace::Type>();
#endif // WITH_TESTS
// ********** End Enum ETestInstanceDataObjectFruitAlternateNamespace ******************************

// ********** Begin Enum ETestInstanceDataObjectDirection ******************************************
#if WITH_TESTS
#define FOREACH_ENUM_ETESTINSTANCEDATAOBJECTDIRECTION(op) \
	op(ETestInstanceDataObjectDirection::None) \
	op(ETestInstanceDataObjectDirection::North) \
	op(ETestInstanceDataObjectDirection::East) \
	op(ETestInstanceDataObjectDirection::South) \
	op(ETestInstanceDataObjectDirection::West) 

enum class ETestInstanceDataObjectDirection : uint16;
template<> struct TIsUEnumClass<ETestInstanceDataObjectDirection> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestInstanceDataObjectDirection>();
#endif // WITH_TESTS
// ********** End Enum ETestInstanceDataObjectDirection ********************************************

// ********** Begin Enum ETestInstanceDataObjectDirectionAlternate *********************************
#if WITH_TESTS
#define FOREACH_ENUM_ETESTINSTANCEDATAOBJECTDIRECTIONALTERNATE(op) \
	op(ETestInstanceDataObjectDirectionAlternate::None) \
	op(ETestInstanceDataObjectDirectionAlternate::Up) \
	op(ETestInstanceDataObjectDirectionAlternate::Down) \
	op(ETestInstanceDataObjectDirectionAlternate::North) \
	op(ETestInstanceDataObjectDirectionAlternate::East) \
	op(ETestInstanceDataObjectDirectionAlternate::South) \
	op(ETestInstanceDataObjectDirectionAlternate::West) 

enum class ETestInstanceDataObjectDirectionAlternate : uint16;
template<> struct TIsUEnumClass<ETestInstanceDataObjectDirectionAlternate> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestInstanceDataObjectDirectionAlternate>();
#endif // WITH_TESTS
// ********** End Enum ETestInstanceDataObjectDirectionAlternate ***********************************

// ********** Begin Enum ETestInstanceDataObjectFullFlags ******************************************
#if WITH_TESTS
#define FOREACH_ENUM_ETESTINSTANCEDATAOBJECTFULLFLAGS(op) \
	op(ETestInstanceDataObjectFullFlags::None) \
	op(ETestInstanceDataObjectFullFlags::Flag0) \
	op(ETestInstanceDataObjectFullFlags::Flag1) \
	op(ETestInstanceDataObjectFullFlags::Flag2) \
	op(ETestInstanceDataObjectFullFlags::Flag4) \
	op(ETestInstanceDataObjectFullFlags::Flag5) \
	op(ETestInstanceDataObjectFullFlags::Flag6) \
	op(ETestInstanceDataObjectFullFlags::Flag7) 

enum class ETestInstanceDataObjectFullFlags : uint8;
template<> struct TIsUEnumClass<ETestInstanceDataObjectFullFlags> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<ETestInstanceDataObjectFullFlags>();
#endif // WITH_TESTS
// ********** End Enum ETestInstanceDataObjectFullFlags ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
