#include "FSDCheatManager.h"
#include "Templates/SubclassOf.h"

UFSDCheatManager::UFSDCheatManager() {
    this->RoomJumpCount = 0;
    this->PreviousMaxDistanceBeforeCleanup = 0.00f;
    this->UnlimitedScoutFlareDuration = false;
    this->SpawnPosMarker = NULL;
    this->EscortShowSmartRockDebug = false;
    this->IsUsingSavedCheats = false;
}

void UFSDCheatManager::ToggleDebugEvent(UFSDEvent* InEvent) {
}

void UFSDCheatManager::SwitchCharacter(UPlayerCharacterID* characterID) {
}

void UFSDCheatManager::SpawnEnemies(UEnemyDescriptor* descriptor, int32 Count) {
}

void UFSDCheatManager::SpawnCritters(UBaseCritterDescriptor* descriptor, int32 Count) {
}

void UFSDCheatManager::SpawnBosco(TSoftClassPtr<APawn> droneClass, TSubclassOf<AFSDAIController> aControllerClass) {
}

void UFSDCheatManager::ShowTutorialDebug() {
}

void UFSDCheatManager::SetStandingDown(bool standingDown) {
}

void UFSDCheatManager::SetSpawnEnemies(bool NewSpawnEnemies) {
}

bool UFSDCheatManager::SetSavedCheatValue(const FName CheatName, const int32& ValueToSet) {
    return false;
}

void UFSDCheatManager::SetQuadPickAxe(bool quad) {
}

void UFSDCheatManager::SetHUDVisible(bool ShowHUD) {
}

void UFSDCheatManager::SetGodMode(bool God) {
}

void UFSDCheatManager::SetFastMovement(bool fast) {
}

void UFSDCheatManager::Server_Refresh_Daily_Special_Implementation(int32 Index) {
}

void UFSDCheatManager::ResetTutorials() {
}

void UFSDCheatManager::ResetSpacerigIntroMessage() {
}

void UFSDCheatManager::R_RemoveResources(int32 Number) {
}

void UFSDCheatManager::R_RemoveCredits(int32 Number) {
}

void UFSDCheatManager::R_RemoveCraftingResource(int32 amount, int32 Type) {
}

void UFSDCheatManager::R_AddSeasonToken(UObject* WorldContextObject, int32 Number) {
}

void UFSDCheatManager::R_AddResources_Player(float Number) {
}

void UFSDCheatManager::R_AddResources(float Number) {
}

void UFSDCheatManager::R_AddPerkPoints(int32 amount) {
}

void UFSDCheatManager::R_AddNitra(float amount) {
}

void UFSDCheatManager::R_AddMorkite(float amount) {
}

void UFSDCheatManager::R_AddMatrixCores(int32 Number) {
}

void UFSDCheatManager::R_AddHollomite(float amount) {
}

void UFSDCheatManager::R_AddGold(float amount) {
}

void UFSDCheatManager::R_AddDystrum(float amount) {
}

void UFSDCheatManager::R_AddCredits(int32 Number) {
}

void UFSDCheatManager::R_AddCraftingResource(int32 amount, int32 Type) {
}

void UFSDCheatManager::R_Add_Phazyonite(int32 amount) {
}

void UFSDCheatManager::R_Add_BitterGem(int32 amount) {
}

void UFSDCheatManager::R_Add_Aquarq(int32 amount) {
}

bool UFSDCheatManager::IsInGodMode() {
    return false;
}

bool UFSDCheatManager::IsFlyModeActive() const {
    return false;
}

bool UFSDCheatManager::IsFastMovementActive() const {
    return false;
}

void UFSDCheatManager::InstantDropResuppyPod(ARessuplyPod* pod) {
}

bool UFSDCheatManager::GetSavedCheatValue(const FName CheatName, int32& ValueToGet) {
    return false;
}

void UFSDCheatManager::GetListOfRoomNames(TArray<FString>& roomNames) {
}

void UFSDCheatManager::DestroyAllInstances(TSubclassOf<AActor> destroy) {
}

void UFSDCheatManager::D_Rejoin_RestoreState() {
}

void UFSDCheatManager::D_MovieModeStartWithCameraShake(bool Value) {
}

void UFSDCheatManager::D_MovieModeStartAtOrigin(bool Value) {
}

void UFSDCheatManager::D_EnableMovieModeInSpacerig(bool Value) {
}

void UFSDCheatManager::D_EnableMovieMode(bool Value) {
}

void UFSDCheatManager::Cheat_UnlockWeapon(UObject* WorldContextObjectm, UItemID* ItemID) {
}

void UFSDCheatManager::Cheat_UnlockAllWeapons(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_UnlockAllUpgrades(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_UnlockAll_Poses(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_UnlockAll_Beers(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_SetSpawnPosMarker(AActor* Actor) {
}

void UFSDCheatManager::Cheat_SetHealth_Implementation(float newHealthValue, APlayerCharacter* Player) {
}

void UFSDCheatManager::Cheat_Schematic_UnlockAll(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_Schematic_ResetAll(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_Schematic_GiveRandom(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_Schematic_ForgeAll(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_Resources(UObject* WorldContextObject, float amount) {
}

void UFSDCheatManager::Cheat_ResetEquippedUpgrades(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_RemoveResources(UObject* WorldContextObject, int32 amount) {
}

void UFSDCheatManager::Cheat_PickAxeVanity_UnlockAll(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_PickAxeVanity_ResetAll(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_MinersManual_ShowAll(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_GenerateNewMissionSeed(UObject* WorldContextObject, bool Enabled) {
}

void UFSDCheatManager::Cheat_ForceTreasure(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_ForceLostPack(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_DeepDives_Refresh(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_Campaign_Complete(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_Campaign_Advance(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_AddXP(UObject* WorldContextObject, int32 amount) {
}

void UFSDCheatManager::Cheat_AddPerkPoints(UObject* WorldContextObject, int32 amount) {
}

void UFSDCheatManager::Cheat_AddCredits(UObject* WorldContextObject, int32 amount) {
}

void UFSDCheatManager::C_Windows_PrintStack() const {
}

void UFSDCheatManager::C_Windows_CloseAll() const {
}

void UFSDCheatManager::C_WeaponMaintenance_Reset() {
}

void UFSDCheatManager::C_WeaponMaintenance_AddXP(int32 XP) {
}

void UFSDCheatManager::C_VanityMasteryResetXP() {
}

void UFSDCheatManager::C_VanityMasteryAddXP(int32 Number) {
}

void UFSDCheatManager::C_UnlockOverclocking() {
}

void UFSDCheatManager::C_UnlockAll_WeaponUpgrades() {
}

void UFSDCheatManager::C_UnlockAll_WeaponSkins_Paintjobs() {
}

void UFSDCheatManager::C_UnlockAll_WeaponSkins_Frameworks() {
}

void UFSDCheatManager::C_UnlockAll_WeaponSkins() {
}

void UFSDCheatManager::C_UnlockAll_Weapons() {
}

void UFSDCheatManager::C_UnlockAll_StoreVanity() {
}

void UFSDCheatManager::C_UnlockAll_Poses_ForAll() {
}

void UFSDCheatManager::C_UnlockAll_Poses() {
}

void UFSDCheatManager::C_UnlockAll_PickaxeParts() {
}

void UFSDCheatManager::C_UnlockAll_Perks() {
}

void UFSDCheatManager::C_UnlockAll_Drinks() {
}

void UFSDCheatManager::C_UnlockAll_Beers() {
}

void UFSDCheatManager::C_UnlockAll_ArmorMats() {
}

void UFSDCheatManager::C_UnlockAll() {
}

void UFSDCheatManager::C_Unlock_Facility() {
}

void UFSDCheatManager::C_Treasures_Track(int32 Mode) {
}

void UFSDCheatManager::C_Treasures_Reward(int32 Count) {
}

void UFSDCheatManager::C_ToggleHoopGameMovement() {
}

void UFSDCheatManager::C_ToggleFadingEnabled() {
}

void UFSDCheatManager::C_ToggleFadingDebug() {
}

void UFSDCheatManager::C_ToggleCanShowBlood() {
}

void UFSDCheatManager::C_TestSpecialEventChance() {
}

void UFSDCheatManager::C_TeleportToPlayer(int32 InPlayerIndex) {
}

void UFSDCheatManager::C_TeleportPlayerToMe(int32 InPlayerIndex) {
}

void UFSDCheatManager::C_TeleportAllPlayersToMe() {
}

void UFSDCheatManager::C_StopMovement(bool shouldMove) {
}

void UFSDCheatManager::C_StartCountDown() {
}

void UFSDCheatManager::C_SpawnScriptedWaveIndex(int32 Index) {
}

void UFSDCheatManager::C_SpawnScriptedWave() {
}

void UFSDCheatManager::C_SpawnNormalWave() {
}

void UFSDCheatManager::C_SpawnEvenRewarder() {
}

void UFSDCheatManager::C_SpawnDropPodOnSelf(float Delay) {
}

void UFSDCheatManager::C_SpawnDancingCharacterOnSelf(int32 InDanceIndex) {
}

void UFSDCheatManager::C_SpawnBarrelOnPlayer(int32 amount) {
}

void UFSDCheatManager::C_SpawnAllParticles() {
}

void UFSDCheatManager::C_SetUseSavedCheatsByDefault(bool useSavedCheats) {
}

void UFSDCheatManager::C_SetTestMission(int32 missionIndex) {
}

void UFSDCheatManager::C_SetTestingCharacter(UPlayerCharacterID* characterID) {
}

void UFSDCheatManager::C_SetSuperRapidFireEnabled(bool Enabled) {
}

void UFSDCheatManager::C_SetStandingDown(bool standingDown) {
}

void UFSDCheatManager::C_SetSavedCheats() {
}

void UFSDCheatManager::C_SetPlayers(int32 Number) {
}

void UFSDCheatManager::C_SetInWorldSubtitlesActive(bool Active) {
}

void UFSDCheatManager::C_SetInstantUsables(bool Value) {
}

void UFSDCheatManager::C_SetHealth(float Health) {
}

void UFSDCheatManager::C_SetFlyMode(bool flyEnabled) {
}

void UFSDCheatManager::C_SetFastFlares() {
}

void UFSDCheatManager::C_SetEnglish(int32 Val) {
}

void UFSDCheatManager::C_SetDancing(bool shouldDance, int32 danceMove) {
}

void UFSDCheatManager::C_SetAmmoCostEnabled(bool Enabled) {
}

void UFSDCheatManager::C_SetActorTrackingVisible(bool Visible) {
}

void UFSDCheatManager::C_Seasons_ResetXP(UObject* WorldContextObject) {
}

void UFSDCheatManager::C_Seasons_ResetTreeOfVanity() {
}

void UFSDCheatManager::C_Seasons_ResetToken() {
}

void UFSDCheatManager::C_Seasons_ResetReroll() {
}

void UFSDCheatManager::C_Seasons_ResetPlagueHeartsCollected() {
}

void UFSDCheatManager::C_Seasons_PrintScripProgress() {
}

void UFSDCheatManager::C_Seasons_IncrementChallenge(int32 Index) {
}

void UFSDCheatManager::C_Seasons_CompleteSeasonAlmost() {
}

void UFSDCheatManager::C_Seasons_CompleteSeason() {
}

void UFSDCheatManager::C_Seasons_CompleteScripChallenge(int32 Number) {
}

void UFSDCheatManager::C_Seasons_ClearSeasonCompletedAnnounced() {
}

void UFSDCheatManager::C_Seasons_ClearChallenges() {
}

void UFSDCheatManager::C_Seasons_ClearAllProgress() {
}

void UFSDCheatManager::C_Seasons_AddXP(UObject* WorldContextObject, int32 Number) {
}

void UFSDCheatManager::C_Seasons_AddHeartsCollecdted(int32 Number) {
}

void UFSDCheatManager::C_Seasons_AddChallenge() {
}

void UFSDCheatManager::C_Season_SetActiveSeason(UObject* WorldContextObject, int32 Index) {
}

void UFSDCheatManager::C_Schematics_UnlockAll() {
}

void UFSDCheatManager::C_Schematics_ResetAll() {
}

void UFSDCheatManager::C_Schematics_ForgeAll() {
}

void UFSDCheatManager::C_Schematics_ClearHasSeenFirstMessage() {
}

void UFSDCheatManager::C_Schematic_GiveRandom() {
}

void UFSDCheatManager::C_Salvage_FixMiniMules() {
}

void UFSDCheatManager::C_Revive() {
}

void UFSDCheatManager::C_Resupply() {
}

void UFSDCheatManager::C_ResetSteamAchievementStats() {
}

void UFSDCheatManager::C_ResetForgingXP() {
}

void UFSDCheatManager::C_ResetCheatedResources(int32 newAmount) {
}

void UFSDCheatManager::C_ResetAll_Vanity() {
}

void UFSDCheatManager::C_ResetAchievements() {
}

void UFSDCheatManager::C_Reset_YearTwoGifts() {
}

void UFSDCheatManager::C_Reset_WeaponSkinsAndUpgrades() {
}

void UFSDCheatManager::C_Reset_WeaponSkins_Paintjobs() {
}

void UFSDCheatManager::C_Reset_WeaponSkins_Framworks() {
}

void UFSDCheatManager::C_Reset_WeaponSkins() {
}

void UFSDCheatManager::C_Reset_Poses() {
}

void UFSDCheatManager::C_Reset_PickaxeParts() {
}

void UFSDCheatManager::C_Reset_Perks() {
}

void UFSDCheatManager::C_Reset_MinersManual() {
}

void UFSDCheatManager::C_Reset_EnemyKillCount() {
}

void UFSDCheatManager::C_Reset_Drinks() {
}

void UFSDCheatManager::C_RemovePlayerRanks(int32 Number) {
}

void UFSDCheatManager::C_RemoveAllWidgets() {
}

void UFSDCheatManager::C_RefreshDailyDeal(int32 Seed) {
}

void UFSDCheatManager::C_Refresh_Daily_Special(int32 Index) {
}

void UFSDCheatManager::C_Refinery_BreakPipes() {
}

void UFSDCheatManager::C_RecordMode() {
}

void UFSDCheatManager::C_PropHunt_Stop() {
}

void UFSDCheatManager::C_PropHunt_Start(int32 InServerIndex) {
}

void UFSDCheatManager::C_Promotion_SetLevelSpecific(APlayerCharacter* onCharacter, int32 Number) {
}

void UFSDCheatManager::C_Promotion_SetLevel(int32 Number) {
}

void UFSDCheatManager::C_Promotion_SetCampaignComplete() {
}

void UFSDCheatManager::C_Promotion_ClearRewardsSeen() {
}

void UFSDCheatManager::C_ProjectileDrawPaths() {
}

void UFSDCheatManager::C_ProjectileDebugPrintToggle() {
}

void UFSDCheatManager::C_PrintLoadout() {
}

void UFSDCheatManager::C_PreventMeteors() {
}

void UFSDCheatManager::C_PlayNewMusic(int32 songIndex) const {
}

void UFSDCheatManager::C_MissionMap_TestDistribution() {
}

void UFSDCheatManager::C_MissionMap_SetSeed(int32 Seed) {
}

void UFSDCheatManager::C_MissionMap_Rotate() {
}

void UFSDCheatManager::C_MissionMap_ForceWarning(int32 Index) {
}

void UFSDCheatManager::C_MissionMap_ForceAnomaly(int32 Index) {
}

void UFSDCheatManager::C_MissionMap_DoubleWarning(int32 indexA, int32 indexB) {
}

void UFSDCheatManager::C_MissionMap_AutoRotate(bool Enabled) {
}

void UFSDCheatManager::C_MinersManual_EnableWorkInProgress(UObject* WorldContextObject) {
}

void UFSDCheatManager::C_MachineEvents_Track(bool Track) {
}

void UFSDCheatManager::C_MachineEvents_FinishCurrent() {
}

void UFSDCheatManager::C_LevelUpCharacter(int32 amount) {
}

void UFSDCheatManager::C_KillTeam() {
}

void UFSDCheatManager::C_KillPlayer() {
}

void UFSDCheatManager::C_KillAllNeutral() {
}

void UFSDCheatManager::C_KillAllFriendly() {
}

void UFSDCheatManager::C_KillAll() {
}

void UFSDCheatManager::C_JumpToNextRoom() {
}

void UFSDCheatManager::C_JetBoots_Enable_MK2() {
}

void UFSDCheatManager::C_JetBoots_Enable() {
}

void UFSDCheatManager::C_Intoxication_SetAll(int32 Percent) {
}

void UFSDCheatManager::C_Intoxication_Set(int32 Percent) {
}

void UFSDCheatManager::C_IncrementAllMissionStats(int32 amount) {
}

void UFSDCheatManager::C_IncreasePlagueInfection(float Increment) {
}

void UFSDCheatManager::C_GodMode(int32 forceEnable) {
}

void UFSDCheatManager::C_GiveAllGenericHeroItems() {
}

void UFSDCheatManager::C_GameDLC_ResetAnnouncements() {
}

void UFSDCheatManager::C_FSDEvent_SetDebugEvent(const FString& EventName) {
}

void UFSDCheatManager::C_FSDEvent_ListEvents() {
}

void UFSDCheatManager::C_FSDEvent_ClearSeenRewards() {
}

void UFSDCheatManager::C_ForceCrash() {
}

void UFSDCheatManager::C_FlareInfiniteDuration(bool Enabled) {
}

void UFSDCheatManager::C_FixedPLSSeed(int32 Seed) {
}

void UFSDCheatManager::C_FixedMissionSeed(int32 Seed) {
}

void UFSDCheatManager::C_FailMission() {
}

void UFSDCheatManager::C_FadeFromBlack(UObject* WorldContextObject) {
}

void UFSDCheatManager::C_Facility_SpawnDataCore() {
}

void UFSDCheatManager::C_Facility_DisableShields() {
}

void UFSDCheatManager::C_Escort_ShowSmartRockDebug(bool shouldShow) {
}

void UFSDCheatManager::C_Escort_SetMuleSpeed(UObject* WorldContextObject, float Speed) {
}

void UFSDCheatManager::C_Escort_JumpToNextPhase(UObject* WorldContextObject) {
}

void UFSDCheatManager::C_Escort_AddOilShale(int32 Number) {
}

void UFSDCheatManager::C_DLC_ClearAnnounced() {
}

void UFSDCheatManager::C_DisableBackendEvents() {
}

void UFSDCheatManager::C_DestroyAllDancingCharacters() {
}

void UFSDCheatManager::C_DeepDives_UnlockAll() {
}

void UFSDCheatManager::C_DeepDives_SetSeed(int32 Seed) {
}

void UFSDCheatManager::C_DeepDives_Reset() {
}

void UFSDCheatManager::C_DeepDives_Refresh() {
}

void UFSDCheatManager::C_DeepDives_List() {
}

void UFSDCheatManager::C_DebugTargetEnemySync(bool FindIt) {
}

void UFSDCheatManager::C_CompleteObjectives() {
}

void UFSDCheatManager::C_CompleteMission() {
}

void UFSDCheatManager::C_ClearAllMissionStats() {
}

void UFSDCheatManager::C_ClearAllMilestones() {
}

void UFSDCheatManager::C_ClearAllDecalsLocal() {
}

void UFSDCheatManager::C_ClearAllDecalsAll() {
}

void UFSDCheatManager::C_Campaign_ResetProgress() {
}

void UFSDCheatManager::C_Campaign_ResetCompleted() {
}

void UFSDCheatManager::C_Campaign_CompleteMain() {
}

void UFSDCheatManager::C_Campaign_CompleteCurrent() {
}

void UFSDCheatManager::C_Campaign_CompleteAll() {
}

void UFSDCheatManager::C_Campaign_Advance() {
}

void UFSDCheatManager::C_BreakAllEnemyArmor() {
}

void UFSDCheatManager::C_BiomeEffectsEnabled(bool Enabled) {
}

void UFSDCheatManager::C_AddXP(int32 Number) {
}

void UFSDCheatManager::C_AddUncappedXP(int32 amount) {
}

void UFSDCheatManager::C_AddForgingXP(int32 Number) {
}

void UFSDCheatManager::C_AddAllResourcesToInventory(float amount) {
}

void UFSDCheatManager::AddResourceToTeamDeposit(UResourceData* Resource, float amount) {
}


