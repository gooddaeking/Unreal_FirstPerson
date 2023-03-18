// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPERSON_FirstPersonCharacter_generated_h
#error "FirstPersonCharacter.generated.h already included, missing '#pragma once' in FirstPersonCharacter.h"
#endif
#define FIRSTPERSON_FirstPersonCharacter_generated_h

#define FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_SPARSE_DATA
#define FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_RPC_WRAPPERS
#define FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPerson"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacter)


#define FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPerson"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacter)


#define FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstPersonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPersonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonCharacter(AFirstPersonCharacter&&); \
	NO_API AFirstPersonCharacter(const AFirstPersonCharacter&); \
public:


#define FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonCharacter(AFirstPersonCharacter&&); \
	NO_API AFirstPersonCharacter(const AFirstPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPersonCharacter)


#define FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFirstPersonCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFirstPersonCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFirstPersonCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFirstPersonCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFirstPersonCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFirstPersonCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFirstPersonCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFirstPersonCharacter, L_MotionController); }


#define FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_17_PROLOG
#define FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_SPARSE_DATA \
	FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_RPC_WRAPPERS \
	FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_INCLASS \
	FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_SPARSE_DATA \
	FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FirstPerson_Source_FirstPerson_FirstPersonCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSON_API UClass* StaticClass<class AFirstPersonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstPerson_Source_FirstPerson_FirstPersonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
