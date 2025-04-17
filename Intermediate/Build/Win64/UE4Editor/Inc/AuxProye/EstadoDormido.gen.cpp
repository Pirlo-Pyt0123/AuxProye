// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AuxProye/EstadoDormido.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoDormido() {}
// Cross Module References
	AUXPROYE_API UClass* Z_Construct_UClass_AEstadoDormido_NoRegister();
	AUXPROYE_API UClass* Z_Construct_UClass_AEstadoDormido();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AuxProye();
// End Cross Module References
	void AEstadoDormido::StaticRegisterNativesAEstadoDormido()
	{
	}
	UClass* Z_Construct_UClass_AEstadoDormido_NoRegister()
	{
		return AEstadoDormido::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoDormido_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoDormido_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AuxProye,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoDormido_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoDormido.h" },
		{ "ModuleRelativePath", "EstadoDormido.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoDormido_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoDormido>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoDormido_Statics::ClassParams = {
		&AEstadoDormido::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoDormido_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoDormido_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoDormido()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoDormido_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoDormido, 2344836264);
	template<> AUXPROYE_API UClass* StaticClass<AEstadoDormido>()
	{
		return AEstadoDormido::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoDormido(Z_Construct_UClass_AEstadoDormido, &AEstadoDormido::StaticClass, TEXT("/Script/AuxProye"), TEXT("AEstadoDormido"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoDormido);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
