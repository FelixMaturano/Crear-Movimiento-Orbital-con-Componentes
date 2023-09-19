// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPONENTES_ComponentesCharacter_generated_h
#error "ComponentesCharacter.generated.h already included, missing '#pragma once' in ComponentesCharacter.h"
#endif
#define COMPONENTES_ComponentesCharacter_generated_h

#define Componentes_Source_Componentes_ComponentesCharacter_h_12_SPARSE_DATA
#define Componentes_Source_Componentes_ComponentesCharacter_h_12_RPC_WRAPPERS
#define Componentes_Source_Componentes_ComponentesCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Componentes_Source_Componentes_ComponentesCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAComponentesCharacter(); \
	friend struct Z_Construct_UClass_AComponentesCharacter_Statics; \
public: \
	DECLARE_CLASS(AComponentesCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Componentes"), NO_API) \
	DECLARE_SERIALIZER(AComponentesCharacter)


#define Componentes_Source_Componentes_ComponentesCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAComponentesCharacter(); \
	friend struct Z_Construct_UClass_AComponentesCharacter_Statics; \
public: \
	DECLARE_CLASS(AComponentesCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Componentes"), NO_API) \
	DECLARE_SERIALIZER(AComponentesCharacter)


#define Componentes_Source_Componentes_ComponentesCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AComponentesCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AComponentesCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AComponentesCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AComponentesCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AComponentesCharacter(AComponentesCharacter&&); \
	NO_API AComponentesCharacter(const AComponentesCharacter&); \
public:


#define Componentes_Source_Componentes_ComponentesCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AComponentesCharacter(AComponentesCharacter&&); \
	NO_API AComponentesCharacter(const AComponentesCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AComponentesCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AComponentesCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AComponentesCharacter)


#define Componentes_Source_Componentes_ComponentesCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AComponentesCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AComponentesCharacter, FollowCamera); }


#define Componentes_Source_Componentes_ComponentesCharacter_h_9_PROLOG
#define Componentes_Source_Componentes_ComponentesCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Componentes_Source_Componentes_ComponentesCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Componentes_Source_Componentes_ComponentesCharacter_h_12_SPARSE_DATA \
	Componentes_Source_Componentes_ComponentesCharacter_h_12_RPC_WRAPPERS \
	Componentes_Source_Componentes_ComponentesCharacter_h_12_INCLASS \
	Componentes_Source_Componentes_ComponentesCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Componentes_Source_Componentes_ComponentesCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Componentes_Source_Componentes_ComponentesCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Componentes_Source_Componentes_ComponentesCharacter_h_12_SPARSE_DATA \
	Componentes_Source_Componentes_ComponentesCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Componentes_Source_Componentes_ComponentesCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Componentes_Source_Componentes_ComponentesCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPONENTES_API UClass* StaticClass<class AComponentesCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Componentes_Source_Componentes_ComponentesCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
