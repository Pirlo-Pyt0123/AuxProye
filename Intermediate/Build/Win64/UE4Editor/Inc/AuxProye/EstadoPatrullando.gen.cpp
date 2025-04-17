// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AuxProye/EstadoPatrullando.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoPatrullando() {}
// Cross Module References
	AUXPROYE_API UClass* Z_Construct_UClass_AEstadoPatrullando_NoRegister();
	AUXPROYE_API UClass* Z_Construct_UClass_AEstadoPatrullando();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AuxProye();
// End Cross Module References
	void AEstadoPatrullando::StaticRegisterNativesAEstadoPatrullando()
	{
	}
	UClass* Z_Construct_UClass_AEstadoPatrullando_NoRegister()
	{
		return AEstadoPatrullando::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoPatrullando_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoPatrullando_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AuxProye,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoPatrullando_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoPatrullando.h" },
		{ "ModuleRelativePath", "EstadoPatrullando.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoPatrullando_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoPatrullando>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoPatrullando_Statics::ClassParams = {
		&AEstadoPatrullando::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoPatrullando_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoPatrullando_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoPatrullando()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoPatrullando_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoPatrullando, 3459005148);
	template<> AUXPROYE_API UClass* StaticClass<AEstadoPatrullando>()
	{
		return AEstadoPatrullando::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoPatrullando(Z_Construct_UClass_AEstadoPatrullando, &AEstadoPatrullando::StaticClass, TEXT("/Script/AuxProye"), TEXT("AEstadoPatrullando"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoPatrullando);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
