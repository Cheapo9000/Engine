// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/UnrealString.h"
#include "CoreMinimal.h"
#include "UObject/NameTypes.h"
#include "AssetRegistry/AssetData.h"

class ULevel;
enum EShaderPlatform : uint16;
class ULandscapeComponent;
class ULandscapeLayerInfoObject;
class UTexture2D;
class UTexture;
enum class ELandscapeToolTargetType : uint8;
enum class ELandscapeToolTargetTypeFlags : uint8;

namespace UE::Landscape
{

/**
* Returns true if edit layers (GPU landscape tools) are enabled on this platform :
* Note: this is intended for the editor but is in runtime code since global shaders need to exist in runtime modules 
*/
LANDSCAPE_API bool DoesPlatformSupportEditLayers(EShaderPlatform InShaderPlatform);

LANDSCAPE_API ELandscapeToolTargetTypeFlags GetLandscapeToolTargetTypeAsFlags(ELandscapeToolTargetType InTargetType);
LANDSCAPE_API ELandscapeToolTargetType GetLandscapeToolTargetTypeSingleFlagAsType(ELandscapeToolTargetTypeFlags InSingleFlag);
LANDSCAPE_API FString GetLandscapeToolTargetTypeFlagsAsString(ELandscapeToolTargetTypeFlags InTargetTypeFlags);

#if WITH_EDITOR

struct FTextureCopyRequest
{
	UTexture2D* Source = nullptr;
	UTexture* Destination = nullptr;
	int8 DestinationSlice = 0;
};

uint32 GetTypeHash(const FTextureCopyRequest& InKey);
bool operator==(const FTextureCopyRequest& InEntryA, const FTextureCopyRequest& InEntryB);

/** Represents the DestinationChannel->SourceChannel binding.DestinationChannel is used as index.
 *  For example if the source channel is 1 and the destination channel is 2, then Mappings[2] == 1.
 */
struct FTextureCopyChannelMapping
{
	FTextureCopyChannelMapping()
		: Mappings{ INDEX_NONE, INDEX_NONE, INDEX_NONE, INDEX_NONE }
	{}

	int8& operator[](int32 Index) { return Mappings[Index]; }
	const int8 operator[](int32 Index) const { return Mappings[Index]; }

	int8 Mappings[4];
};

class FBatchTextureCopy
{
public:
	/**
	* Uses the provided arguments to add proper source/destination entries to internal copy requests.
	* @param	InDestination	The texture used as a destination for the copy.
	* @param	InDestinationSlice	The Texture array slice to write to (use 0 for a Texture2D)
	* @param	InDestinationChannel	The channel used as a destination for the copy.
	* @param	InComponent		The component containing the wanted source weightmap.
	* @param	InLayerInfo		The layer info used to retrieve the proper source weightmap and channel.
	* @return True if the copy has been successfully added.
	*/
	LANDSCAPE_API bool AddWeightmapCopy(UTexture* InDestination, int8 InDestinationSlice, int8 InDestinationChannel, const ULandscapeComponent* InComponent, ULandscapeLayerInfoObject* InLayerInfo);

	/** Process pending internal copy requests. */
	LANDSCAPE_API bool ProcessTextureCopies();

private:
	using FTextureCopyChannelMappingMap = TMap<FTextureCopyRequest, FTextureCopyChannelMapping>;

	FTextureCopyChannelMappingMap CopyRequests;
};

/**
 * Returns a generated path used for Landscape Shared Assets
 * @param	InPath	Path used as a basis to generate shared assets path. If /Temp/, it will be replaced by the last valid path used for level.
 * @return Path used for Landscape Shared Assets
*/
LANDSCAPE_API FString GetSharedAssetsPath(const FString& InPath);

/**
 * Returns a generated path used for Landscape Shared Assets
 * @param	InLevel		Level's Path will be used as a basis to generate shared assets path. If /Temp/, it will be replaced by the last valid path used for level.
 * @return Path used for Landscape Shared Assets
*/
LANDSCAPE_API FString GetSharedAssetsPath(const ULevel* InLevel);

/**
 * Returns a generated package name for a Layer Info Object
 * @param	InLevel		Level's Path will be used as a basis to generate package's path. If /Temp/, it will be replaced by the last valid path used for level.
 * @param	InLayerName		The LayerName of the Layer Info Object
 * @param	OutLayerObjectName	The generated object name for Layer Info Object
 * @return
*/
LANDSCAPE_API FString GetLayerInfoObjectPackageName(const ULevel* InLevel, const FName& InLayerName, FName& OutLayerObjectName);

/** Returns true if the provided layer info object is the current visibility layer. */
LANDSCAPE_API bool IsVisibilityLayer(const ULandscapeLayerInfoObject* InLayerInfoObject);

struct FLayerInfoFinder
{
	LANDSCAPE_API FLayerInfoFinder();
	LANDSCAPE_API ~FLayerInfoFinder() = default;
	LANDSCAPE_API ULandscapeLayerInfoObject* Find(const FName& LayerName) const;
	TArray<FAssetData> LayerInfoAssets;
};

#endif //!WITH_EDITOR

} // end namespace UE::Landscape
