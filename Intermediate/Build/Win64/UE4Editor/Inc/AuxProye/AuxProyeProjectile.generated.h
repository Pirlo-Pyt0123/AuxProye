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
#ifdef AUXPROYE_AuxProyeProjectile_generated_h
#error "AuxProyeProjectile.generated.h already included, missing '#pragma once' in AuxProyeProjectile.h"
#endif
#define AUXPROYE_AuxProyeProjectile_generated_h

#define AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_SPARSE_DATA
#define AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuxProyeProjectile(); \
	friend struct Z_Construct_UClass_AAuxProyeProjectile_Statics; \
public: \
	DECLARE_CLASS(AAuxProyeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AuxProye"), NO_API) \
	DECLARE_SERIALIZER(AAuxProyeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAuxProyeProjectile(); \
	friend struct Z_Construct_UClass_AAuxProyeProjectile_Statics; \
public: \
	DECLARE_CLASS(AAuxProyeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AuxProye"), NO_API) \
	DECLARE_SERIALIZER(AAuxProyeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAuxProyeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAuxProyeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuxProyeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuxProyeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAuxProyeProjectile(AAuxProyeProjectile&&); \
	NO_API AAuxProyeProjectile(const AAuxProyeProjectile&); \
public:


#define AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAuxProyeProjectile(AAuxProyeProjectile&&); \
	NO_API AAuxProyeProjectile(const AAuxProyeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuxProyeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuxProyeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuxProyeProjectile)


#define AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AAuxProyeProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AAuxProyeProjectile, ProjectileMovement); }


#define AuxProye_Source_AuxProye_AuxProyeProjectile_h_12_PROLOG
#define AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_SPARSE_DATA \
	AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_RPC_WRAPPERS \
	AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_INCLASS \
	AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_SPARSE_DATA \
	AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_INCLASS_NO_PURE_DECLS \
	AuxProye_Source_AuxProye_AuxProyeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUXPROYE_API UClass* StaticClass<class AAuxProyeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AuxProye_Source_AuxProye_AuxProyeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
