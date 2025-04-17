// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUXPROYE_AuxProyePawn_generated_h
#error "AuxProyePawn.generated.h already included, missing '#pragma once' in AuxProyePawn.h"
#endif
#define AUXPROYE_AuxProyePawn_generated_h

#define AuxProye_Source_AuxProye_AuxProyePawn_h_12_SPARSE_DATA
#define AuxProye_Source_AuxProye_AuxProyePawn_h_12_RPC_WRAPPERS
#define AuxProye_Source_AuxProye_AuxProyePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define AuxProye_Source_AuxProye_AuxProyePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuxProyePawn(); \
	friend struct Z_Construct_UClass_AAuxProyePawn_Statics; \
public: \
	DECLARE_CLASS(AAuxProyePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AuxProye"), NO_API) \
	DECLARE_SERIALIZER(AAuxProyePawn)


#define AuxProye_Source_AuxProye_AuxProyePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAuxProyePawn(); \
	friend struct Z_Construct_UClass_AAuxProyePawn_Statics; \
public: \
	DECLARE_CLASS(AAuxProyePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AuxProye"), NO_API) \
	DECLARE_SERIALIZER(AAuxProyePawn)


#define AuxProye_Source_AuxProye_AuxProyePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAuxProyePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAuxProyePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuxProyePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuxProyePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAuxProyePawn(AAuxProyePawn&&); \
	NO_API AAuxProyePawn(const AAuxProyePawn&); \
public:


#define AuxProye_Source_AuxProye_AuxProyePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAuxProyePawn(AAuxProyePawn&&); \
	NO_API AAuxProyePawn(const AAuxProyePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuxProyePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuxProyePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuxProyePawn)


#define AuxProye_Source_AuxProye_AuxProyePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AAuxProyePawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AAuxProyePawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AAuxProyePawn, CameraBoom); }


#define AuxProye_Source_AuxProye_AuxProyePawn_h_9_PROLOG
#define AuxProye_Source_AuxProye_AuxProyePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AuxProye_Source_AuxProye_AuxProyePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	AuxProye_Source_AuxProye_AuxProyePawn_h_12_SPARSE_DATA \
	AuxProye_Source_AuxProye_AuxProyePawn_h_12_RPC_WRAPPERS \
	AuxProye_Source_AuxProye_AuxProyePawn_h_12_INCLASS \
	AuxProye_Source_AuxProye_AuxProyePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AuxProye_Source_AuxProye_AuxProyePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AuxProye_Source_AuxProye_AuxProyePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	AuxProye_Source_AuxProye_AuxProyePawn_h_12_SPARSE_DATA \
	AuxProye_Source_AuxProye_AuxProyePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AuxProye_Source_AuxProye_AuxProyePawn_h_12_INCLASS_NO_PURE_DECLS \
	AuxProye_Source_AuxProye_AuxProyePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUXPROYE_API UClass* StaticClass<class AAuxProyePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AuxProye_Source_AuxProye_AuxProyePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
