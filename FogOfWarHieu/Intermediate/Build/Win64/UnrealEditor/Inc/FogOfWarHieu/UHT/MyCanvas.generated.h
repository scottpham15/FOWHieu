// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyCanvas.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef FOGOFWARHIEU_MyCanvas_generated_h
#error "MyCanvas.generated.h already included, missing '#pragma once' in MyCanvas.h"
#endif
#define FOGOFWARHIEU_MyCanvas_generated_h

#define FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyCanvas_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawBrush);


#define FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyCanvas_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCanvas(); \
	friend struct Z_Construct_UClass_AMyCanvas_Statics; \
public: \
	DECLARE_CLASS(AMyCanvas, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FogOfWarHieu"), NO_API) \
	DECLARE_SERIALIZER(AMyCanvas)


#define FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyCanvas_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyCanvas(AMyCanvas&&); \
	AMyCanvas(const AMyCanvas&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCanvas); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCanvas); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCanvas) \
	NO_API virtual ~AMyCanvas();


#define FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyCanvas_h_9_PROLOG
#define FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyCanvas_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyCanvas_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyCanvas_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyCanvas_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOGOFWARHIEU_API UClass* StaticClass<class AMyCanvas>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyCanvas_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
