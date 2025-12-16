import unreal

# Get the asset tools
asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
# Create a new character asset
character = asset_tools.create_asset(
    asset_name="Jeff",
    package_path="/Game/Characters/MetaHumans",
    asset_class=unreal.MetaHumanCharacter,
    factory=unreal.new_object(type=unreal.MetaHumanCharacterFactoryNew)
)