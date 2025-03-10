// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FogOfWarHieu/MyWall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyWall() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FOGOFWARHIEU_API UClass* Z_Construct_UClass_AMyWall();
FOGOFWARHIEU_API UClass* Z_Construct_UClass_AMyWall_NoRegister();
UPackage* Z_Construct_UPackage__Script_FogOfWarHieu();
// End Cross Module References

// Begin Class AMyWall
void AMyWall::StaticRegisterNativesAMyWall()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyWall);
UClass* Z_Construct_UClass_AMyWall_NoRegister()
{
	return AMyWall::StaticClass();
}
struct Z_Construct_UClass_AMyWall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyWall.h" },
		{ "ModuleRelativePath", "MyWall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyMesh_MetaData[] = {
		{ "Category", "MyWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyWall.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyWall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyWall_Statics::NewProp_MyMesh = { "MyMesh", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyWall, MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyMesh_MetaData), NewProp_MyMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyWall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyWall_Statics::NewProp_MyMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyWall_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyWall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FogOfWarHieu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyWall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyWall_Statics::ClassParams = {
	&AMyWall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyWall_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyWall_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyWall_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyWall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyWall()
{
	if (!Z_Registration_Info_UClass_AMyWall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyWall.OuterSingleton, Z_Construct_UClass_AMyWall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyWall.OuterSingleton;
}
template<> FOGOFWARHIEU_API UClass* StaticClass<AMyWall>()
{
	return AMyWall::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyWall);
AMyWall::~AMyWall() {}
// End Class AMyWall

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyWall_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyWall, AMyWall::StaticClass, TEXT("AMyWall"), &Z_Registration_Info_UClass_AMyWall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyWall), 1592010152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyWall_h_2252483736(TEXT("/Script/FogOfWarHieu"),
	Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyWall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyWall_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
