// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FogOfWarHieu/FogOfWarHieuGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFogOfWarHieuGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FOGOFWARHIEU_API UClass* Z_Construct_UClass_AFogOfWarHieuGameMode();
FOGOFWARHIEU_API UClass* Z_Construct_UClass_AFogOfWarHieuGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FogOfWarHieu();
// End Cross Module References

// Begin Class AFogOfWarHieuGameMode
void AFogOfWarHieuGameMode::StaticRegisterNativesAFogOfWarHieuGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFogOfWarHieuGameMode);
UClass* Z_Construct_UClass_AFogOfWarHieuGameMode_NoRegister()
{
	return AFogOfWarHieuGameMode::StaticClass();
}
struct Z_Construct_UClass_AFogOfWarHieuGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FogOfWarHieuGameMode.h" },
		{ "ModuleRelativePath", "FogOfWarHieuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFogOfWarHieuGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFogOfWarHieuGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FogOfWarHieu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFogOfWarHieuGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFogOfWarHieuGameMode_Statics::ClassParams = {
	&AFogOfWarHieuGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFogOfWarHieuGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFogOfWarHieuGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFogOfWarHieuGameMode()
{
	if (!Z_Registration_Info_UClass_AFogOfWarHieuGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFogOfWarHieuGameMode.OuterSingleton, Z_Construct_UClass_AFogOfWarHieuGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFogOfWarHieuGameMode.OuterSingleton;
}
template<> FOGOFWARHIEU_API UClass* StaticClass<AFogOfWarHieuGameMode>()
{
	return AFogOfWarHieuGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFogOfWarHieuGameMode);
AFogOfWarHieuGameMode::~AFogOfWarHieuGameMode() {}
// End Class AFogOfWarHieuGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_FogOfWarHieuGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFogOfWarHieuGameMode, AFogOfWarHieuGameMode::StaticClass, TEXT("AFogOfWarHieuGameMode"), &Z_Registration_Info_UClass_AFogOfWarHieuGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFogOfWarHieuGameMode), 181005693U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_FogOfWarHieuGameMode_h_339396113(TEXT("/Script/FogOfWarHieu"),
	Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_FogOfWarHieuGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_FogOfWarHieuGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
