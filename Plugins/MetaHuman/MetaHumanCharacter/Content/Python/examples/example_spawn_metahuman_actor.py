import unreal

'''
This shows an example of how to spawn a preview actor in the main editor level.
The spawned actor will be owned by the subsystem and when its editor window
is closed the actor is automatically destroyed. This prevents issues with
saving an actor instance that points to transient assets
'''

def spawn_metahuman_character():

    selected_characters = unreal.EditorUtilityLibrary.get_selected_assets_of_class(asset_class=unreal.MetaHumanCharacter)

    if len(selected_characters) == 0:
        return
    
    character = selected_characters[0]

    # Make sure the editor is opened, this will open the character for editing
    asset_editor_subsystem = unreal.get_editor_subsystem(unreal.AssetEditorSubsystem)
    asset_editor_subsystem.open_editor_for_assets(assets=[character])

    metahuman_character_subsystem = unreal.get_editor_subsystem(unreal.MetaHumanCharacterEditorSubsystem)

    # Spawn the actor in the level
    actor = metahuman_character_subsystem.spawn_meta_human_actor(character=character)

    unreal.log(f"Spawned MetaHuman Actor {actor.get_name()}")

    # When the character editor is closed the actor in the level will be destroyed since
    # it is not meant to be saved with the level


if __name__ == "__main__":
    spawn_metahuman_character()