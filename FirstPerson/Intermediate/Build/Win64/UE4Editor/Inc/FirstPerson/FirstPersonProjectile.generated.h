// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FIRSTPERSON_FirstPersonProjectile_generated_h
#error "FirstPersonProjectile.generated.h already included, missing '#pragma once' in FirstPersonProjectile.h"
#endif
#define FIRSTPERSON_FirstPersonProjectile_generated_h

#define FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_SPARSE_DATA
#define FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonProjectile(); \
	friend struct Z_Construct_UClass_AFirstPersonProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPerson"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFirstPersonProjectile(); \
	friend struct Z_Construct_UClass_AFirstPersonProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPerson"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstPersonProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPersonProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonProjectile(AFirstPersonProjectile&&); \
	NO_API AFirstPersonProjectile(const AFirstPersonProjectile&); \
public:


#define FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonProjectile(AFirstPersonProjectile&&); \
	NO_API AFirstPersonProjectile(const AFirstPersonProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPersonProjectile)


#define FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFirstPersonProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFirstPersonProjectile, ProjectileMovement); }


#define FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_12_PROLOG
#define FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_SPARSE_DATA \
	FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_RPC_WRAPPERS \
	FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_INCLASS \
	FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_SPARSE_DATA \
	FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FirstPerson_Source_FirstPerson_FirstPersonProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSON_API UClass* StaticClass<class AFirstPersonProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstPerson_Source_FirstPerson_FirstPersonProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
