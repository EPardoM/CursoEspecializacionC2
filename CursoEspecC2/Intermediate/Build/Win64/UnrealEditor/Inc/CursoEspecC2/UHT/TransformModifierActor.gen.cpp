// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CursoEspecC2/TransformModifierActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformModifierActor() {}

// Begin Cross Module References
CURSOESPECC2_API UClass* Z_Construct_UClass_ATransformModifierActor();
CURSOESPECC2_API UClass* Z_Construct_UClass_ATransformModifierActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CursoEspecC2();
// End Cross Module References

// Begin Class ATransformModifierActor
void ATransformModifierActor::StaticRegisterNativesATransformModifierActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATransformModifierActor);
UClass* Z_Construct_UClass_ATransformModifierActor_NoRegister()
{
	return ATransformModifierActor::StaticClass();
}
struct Z_Construct_UClass_ATransformModifierActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TransformModifierActor.h" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATransformModifierActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATransformModifierActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CursoEspecC2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATransformModifierActor_Statics::ClassParams = {
	&ATransformModifierActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATransformModifierActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATransformModifierActor()
{
	if (!Z_Registration_Info_UClass_ATransformModifierActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATransformModifierActor.OuterSingleton, Z_Construct_UClass_ATransformModifierActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATransformModifierActor.OuterSingleton;
}
template<> CURSOESPECC2_API UClass* StaticClass<ATransformModifierActor>()
{
	return ATransformModifierActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATransformModifierActor);
ATransformModifierActor::~ATransformModifierActor() {}
// End Class ATransformModifierActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_CursoEspecializacionC2_CursoEspecC2_Source_CursoEspecC2_TransformModifierActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATransformModifierActor, ATransformModifierActor::StaticClass, TEXT("ATransformModifierActor"), &Z_Registration_Info_UClass_ATransformModifierActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATransformModifierActor), 3583060202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_CursoEspecializacionC2_CursoEspecC2_Source_CursoEspecC2_TransformModifierActor_h_1508327029(TEXT("/Script/CursoEspecC2"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_CursoEspecializacionC2_CursoEspecC2_Source_CursoEspecC2_TransformModifierActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_CursoEspecializacionC2_CursoEspecC2_Source_CursoEspecC2_TransformModifierActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
