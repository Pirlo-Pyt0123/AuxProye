// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUXPROYE_Estado_generated_h
#error "Estado.generated.h already included, missing '#pragma once' in Estado.h"
#endif
#define AUXPROYE_Estado_generated_h

#define AuxProye_Source_AuxProye_Estado_h_14_SPARSE_DATA
#define AuxProye_Source_AuxProye_Estado_h_14_RPC_WRAPPERS
#define AuxProye_Source_AuxProye_Estado_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define AuxProye_Source_AuxProye_Estado_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUXPROYE_API UEstado(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEstado) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUXPROYE_API, UEstado); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEstado); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUXPROYE_API UEstado(UEstado&&); \
	AUXPROYE_API UEstado(const UEstado&); \
public:


#define AuxProye_Source_AuxProye_Estado_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUXPROYE_API UEstado(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUXPROYE_API UEstado(UEstado&&); \
	AUXPROYE_API UEstado(const UEstado&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUXPROYE_API, UEstado); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEstado); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEstado)


#define AuxProye_Source_AuxProye_Estado_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEstado(); \
	friend struct Z_Construct_UClass_UEstado_Statics; \
public: \
	DECLARE_CLASS(UEstado, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AuxProye"), AUXPROYE_API) \
	DECLARE_SERIALIZER(UEstado)


#define AuxProye_Source_AuxProye_Estado_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AuxProye_Source_AuxProye_Estado_h_14_GENERATED_UINTERFACE_BODY() \
	AuxProye_Source_AuxProye_Estado_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AuxProye_Source_AuxProye_Estado_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AuxProye_Source_AuxProye_Estado_h_14_GENERATED_UINTERFACE_BODY() \
	AuxProye_Source_AuxProye_Estado_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AuxProye_Source_AuxProye_Estado_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEstado() {} \
public: \
	typedef UEstado UClassType; \
	typedef IEstado ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AuxProye_Source_AuxProye_Estado_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IEstado() {} \
public: \
	typedef UEstado UClassType; \
	typedef IEstado ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AuxProye_Source_AuxProye_Estado_h_11_PROLOG
#define AuxProye_Source_AuxProye_Estado_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AuxProye_Source_AuxProye_Estado_h_14_SPARSE_DATA \
	AuxProye_Source_AuxProye_Estado_h_14_RPC_WRAPPERS \
	AuxProye_Source_AuxProye_Estado_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AuxProye_Source_AuxProye_Estado_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AuxProye_Source_AuxProye_Estado_h_14_SPARSE_DATA \
	AuxProye_Source_AuxProye_Estado_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AuxProye_Source_AuxProye_Estado_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUXPROYE_API UClass* StaticClass<class UEstado>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AuxProye_Source_AuxProye_Estado_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
