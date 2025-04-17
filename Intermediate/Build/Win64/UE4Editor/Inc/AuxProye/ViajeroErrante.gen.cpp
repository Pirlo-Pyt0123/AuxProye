// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AuxProye/ViajeroErrante.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViajeroErrante() {}
// Cross Module References
	AUXPROYE_API UClass* Z_Construct_UClass_AViajeroErrante_NoRegister();
	AUXPROYE_API UClass* Z_Construct_UClass_AViajeroErrante();
	AUXPROYE_API UClass* Z_Construct_UClass_AHuman();
	UPackage* Z_Construct_UPackage__Script_AuxProye();
// End Cross Module References
	void AViajeroErrante::StaticRegisterNativesAViajeroErrante()
	{
	}
	UClass* Z_Construct_UClass_AViajeroErrante_NoRegister()
	{
		return AViajeroErrante::StaticClass();
	}
	struct Z_Construct_UClass_AViajeroErrante_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AViajeroErrante_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHuman,
		(UObject* (*)())Z_Construct_UPackage__Script_AuxProye,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AViajeroErrante_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ViajeroErrante.h" },
		{ "ModuleRelativePath", "ViajeroErrante.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AViajeroErrante_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AViajeroErrante>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AViajeroErrante_Statics::ClassParams = {
		&AViajeroErrante::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AViajeroErrante_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AViajeroErrante_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AViajeroErrante()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AViajeroErrante_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AViajeroErrante, 1611984256);
	template<> AUXPROYE_API UClass* StaticClass<AViajeroErrante>()
	{
		return AViajeroErrante::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AViajeroErrante(Z_Construct_UClass_AViajeroErrante, &AViajeroErrante::StaticClass, TEXT("/Script/AuxProye"), TEXT("AViajeroErrante"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AViajeroErrante);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
