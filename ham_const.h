/* Ham Sandwich
 *   Copyright 2007
 *   By the AMX Mod X Development Team
 *
 *  Ham Sandwich is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation; either version 2 of the License, or (at
 *  your option) any later version.
 *
 *  Ham Sandwich is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Ham Sandwich; if not, write to the Free Software Foundation,
 *  Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 *  In addition, as a special exception, the author gives permission to
 *  link the code of Ham Sandwich with the Half-Life Game Engine ("HL
 *  Engine") and Modified Game Libraries ("MODs") developed by Valve,
 *  L.L.C ("Valve"). You must obey the GNU General Public License in all
 *  respects for all of the code used other than the HL Engine and MODs
 *  from Valve. If you modify this file, you may extend this exception
 *  to your version of the file, but you are not obligated to do so. If
 *  you do not wish to do so, delete this exception statement from your
 *  version.
 */

#ifndef HAM_CONST_H
#define HAM_CONST_H


enum 
{
	HAM_UNSET = 0,
	HAM_IGNORED,
	HAM_HANDLED,
	HAM_OVERRIDE,
	HAM_SUPERCEDE
};

enum
{
	Ham_Spawn = 0,
	Ham_Precache,
	Ham_Keyvalue,
	Ham_ObjectCaps,
	Ham_Activate,
	Ham_SetObjectCollisionBox,
	Ham_Classify,
	Ham_DeathNotice,
	Ham_TraceAttack,
	Ham_TakeDamage,
	Ham_TakeHealth,
	Ham_Killed,
	Ham_BloodColor,
	Ham_TraceBleed,
	Ham_IsTriggered,
	Ham_MyMonsterPointer,
	Ham_MySquadMonsterPointer,
	Ham_GetToggleState,
	Ham_AddPoints,
	Ham_AddPointsToTeam,
	Ham_AddPlayerItem,
	Ham_RemovePlayerItem,
	Ham_GiveAmmo,
	Ham_GetDelay,
	Ham_IsMoving,
	Ham_OverrideReset,
	Ham_DamageDecal,
	Ham_SetToggleState,
	Ham_StartSneaking,
	Ham_StopSneaking,
	Ham_OnControls,
	Ham_IsSneaking,
	Ham_IsAlive,
	Ham_IsBSPModel,
	Ham_ReflectGauss,
	Ham_HasTarget,
	Ham_IsInWorld,
	Ham_IsPlayer,
	Ham_IsNetClient,
	Ham_TeamId,
	Ham_GetNextTarget,
	Ham_Think,
	Ham_Touch,
	Ham_Use,
	Ham_Blocked,
	Ham_Respawn,
	Ham_UpdateOwner,
	Ham_FBecomeProne,
	Ham_Center,
	Ham_EyePosition,
	Ham_EarPosition,
	Ham_BodyTarget,
	Ham_Illumination,
	Ham_FVisible,
	Ham_FVecVisible,

	Ham_Player_Jump,
	Ham_Player_Duck,
	Ham_Player_PreThink,
	Ham_Player_PostThink,
	Ham_Player_GetGunPosition,
	Ham_Player_ShouldFadeOnDeath,
	Ham_Player_ImpulseCommands,
	Ham_Player_UpdateClientData,
	
	Ham_Item_AddToPlayer,
	Ham_Item_AddDuplicate,
	Ham_Item_CanDeploy,
	Ham_Item_Deploy,
	Ham_Item_CanHolster,
	Ham_Item_Holster,
	Ham_Item_UpdateItemInfo,
	Ham_Item_PreFrame,
	Ham_Item_PostFrame,
	Ham_Item_Drop,
	Ham_Item_Kill,
	Ham_Item_AttachToPlayer,
	Ham_Item_PrimaryAmmoIndex,
	Ham_Item_SecondaryAmmoIndex,
	Ham_Item_UpdateClientData,
	Ham_Item_GetWeaponPtr,
	Ham_Item_ItemSlot,

	Ham_Weapon_ExtractAmmo,
	Ham_Weapon_ExtractClipAmmo,
	Ham_Weapon_AddWeapon,
	Ham_Weapon_PlayEmptySound,
	Ham_Weapon_ResetEmptySound,
	Ham_Weapon_SendWeaponAnim,
	Ham_Weapon_IsUsable,
	Ham_Weapon_PrimaryAttack,
	Ham_Weapon_SecondaryAttack,
	Ham_Weapon_Reload,
	Ham_Weapon_WeaponIdle,
	Ham_Weapon_RetireWeapon,
	Ham_Weapon_ShouldWeaponIdle,
	Ham_Weapon_UseDecrement,

	Ham_TS_BreakableRespawn,
	Ham_TS_CanUsedThroughWalls,
	Ham_TS_RespawnWait,

	Ham_CS_Restart,
	Ham_CS_RoundRespawn,
	Ham_CS_Item_CanDrop,
	Ham_CS_Item_GetMaxSpeed,

	Ham_DOD_RoundRespawn,
	Ham_DOD_RoundRespawnEnt,
	Ham_DOD_RoundStore,
	Ham_DOD_AreaSetIndex,
	Ham_DOD_AreaSendStatus,
	Ham_DOD_GetState,
	Ham_DOD_GetStateEnt,
	Ham_DOD_Item_CanDrop,

	Ham_TFC_EngineerUse,
	Ham_TFC_Finished,
	Ham_TFC_EmpExplode,
	Ham_TFC_CalcEmpDmgRad,
	Ham_TFC_TakeEmpBlast,
	Ham_TFC_EmpRemove,
	Ham_TFC_TakeConcussionBlast,
	Ham_TFC_Concuss,

	Ham_ESF_IsEnvModel, // Only valid in ESF Open Beta
	Ham_ESF_TakeDamage2, // Only valid in ESF Open Beta

	Ham_NS_GetPointValue,
	Ham_NS_AwardKill,
	Ham_NS_ResetEntity,
	Ham_NS_UpdateOnRemove,

	Ham_TS_GiveSlowMul,
	Ham_TS_GoSlow,
	Ham_TS_InSlow,
	Ham_TS_IsObjective,
	Ham_TS_EnableObjective,
	Ham_TS_OnFreeEntPrivateData,
	Ham_TS_ShouldCollide,

	//
	// New addition - 2011
	//

	Ham_ChangeYaw,
	Ham_HasHumanGibs,
	Ham_HasAlienGibs, 
	Ham_FadeMonster,
	Ham_GibMonster,
	Ham_BecomeDead,
	Ham_IRelationship, 
	Ham_PainSound,
	Ham_ReportAIState,
	Ham_MonsterInitDead,
	Ham_Look, 
	Ham_BestVisibleEnemy, 
	Ham_FInViewCone,
	Ham_FVecInViewCone,
	Ham_GetDeathActivity,

	// Not valid in CS, NS and TS.
	Ham_RunAI,
	Ham_MonsterThink,
	Ham_MonsterInit,
	Ham_CheckLocalMove,
	Ham_Move,
	Ham_ShouldAdvanceRoute,
	Ham_GetStoppedActivity,
	Ham_Stop,
	Ham_CheckRangeAttack1,
	Ham_CheckRangeAttack2,
	Ham_CheckMeleeAttack1,
	Ham_CheckMeleeAttack2,
	Ham_ScheduleChange,
	Ham_CanPlaySequence,
	Ham_CanPlaySentence,
	Ham_PlaySentence,
	Ham_PlayScriptedSentence,
	Ham_SentenceStop,
	Ham_GetIdealState,
	Ham_SetActivity,
	Ham_CheckEnemy,
	Ham_SetYawSpeed,
	Ham_BuildNearestRoute,
	Ham_FindCover,
	Ham_CoverRadius,
	Ham_FCanCheckAttacks,
	Ham_CheckAmmo,
	Ham_IgnoreConditions,
	Ham_FValidateHintType,
	Ham_FCanActiveIdle,
	Ham_ISoundMask,
	Ham_HearingSensitivity,
	Ham_BarnacleVictimBitten,
	Ham_BarnacleVictimReleased,
	Ham_PrescheduleThink,
	Ham_DeathSound,
	Ham_AlertSound,
	Ham_IdleSound,
	Ham_StopFollowing,

	Ham_CS_Weapon_SendWeaponAnim,
	Ham_CS_Player_ResetMaxSpeed,
	Ham_CS_Player_IsBot,
	Ham_CS_Player_GetAutoaimVector,
	Ham_CS_Player_Blind,
	Ham_CS_Player_OnTouchingWeapon,

	Ham_DOD_SetScriptReset,
	Ham_DOD_Item_SpawnDeploy,
	Ham_DOD_Item_SetDmgTime,
	Ham_DOD_Item_DropGren,
	Ham_DOD_Weapon_IsUseable,
	Ham_DOD_Weapon_Aim,
	Ham_DOD_Weapon_flAim,
	Ham_DOD_Weapon_RemoveStamina,
	Ham_DOD_Weapon_ChangeFOV,
	Ham_DOD_Weapon_ZoomOut,
	Ham_DOD_Weapon_ZoomIn,
	Ham_DOD_Weapon_GetFOV,
	Ham_DOD_Weapon_IsWaterSniping, 
	Ham_DOD_Weapon_UpdateZoomSpeed,
	Ham_DOD_Weapon_Special,

	Ham_TFC_DB_GetItemName,
	Ham_TFC_RadiusDamage,
	Ham_TFC_RadiusDamage2,

	Ham_ESF_IsFighter,
	Ham_ESF_IsBuddy,
	Ham_ESF_EmitSound,
	Ham_ESF_EmitNullSound,
	Ham_ESF_IncreaseStrength,
	Ham_ESF_IncreasePL,
	Ham_ESF_SetPowerLevel,
	Ham_ESF_SetMaxPowerLevel,
	Ham_ESF_StopAniTrigger,
	Ham_ESF_StopFly,
	Ham_ESF_HideWeapon,
	Ham_ESF_ClientRemoveWeapon,
	Ham_ESF_SendClientsCustomModel,
	Ham_ESF_CanTurbo,
	Ham_ESF_CanPrimaryFire,
	Ham_ESF_CanSecondaryFire,
	Ham_ESF_CanStopFly,
	Ham_ESF_CanBlock,
	Ham_ESF_CanRaiseKi,
	Ham_ESF_CanRaiseStamina,
	Ham_ESF_CanTeleport,
	Ham_ESF_CanStartFly,
	Ham_ESF_CanStartPowerup,
	Ham_ESF_CanJump,
	Ham_ESF_CanWallJump,
	Ham_ESF_IsSuperJump,
	Ham_ESF_IsMoveBack,
	Ham_ESF_CheckWallJump,
	Ham_ESF_EnableWallJump,
	Ham_ESF_DisableWallJump,
	Ham_ESF_ResetWallJumpVars,
	Ham_ESF_GetWallJumpAnim,
	Ham_ESF_GetWallJumpAnim2,
	Ham_ESF_SetWallJumpAnimation,
	Ham_ESF_SetFlyMoveType,
	Ham_ESF_IsFlyMoveType,
	Ham_ESF_IsWalkMoveType,
	Ham_ESF_SetWalkMoveType,
	Ham_ESF_DrawChargeBar,
	Ham_ESF_StartBlock,
	Ham_ESF_StopBlock,
	Ham_ESF_StartFly,
	Ham_ESF_GetMaxSpeed,
	Ham_ESF_SetAnimation,
	Ham_ESF_PlayAnimation,
	Ham_ESF_GetMoveForward,
	Ham_ESF_GetMoveRight,
	Ham_ESF_GetMoveUp,
	Ham_ESF_AddBlindFX,
	Ham_ESF_RemoveBlindFX,
	Ham_ESF_DisablePSBar,
	Ham_ESF_AddBeamBoxCrosshair,
	Ham_ESF_RemoveBeamBoxCrosshair,
	Ham_ESF_DrawPSWinBonus,
	Ham_ESF_DrawPSBar,
	Ham_ESF_LockCrosshair,
	Ham_ESF_UnLockCrosshair,
	Ham_ESF_RotateCrosshair,
	Ham_ESF_UnRotateCrosshair,
	Ham_ESF_WaterMove,
	Ham_ESF_CheckTimeBasedDamage,
	Ham_ESF_DoesSecondaryAttack,
	Ham_ESF_DoesPrimaryAttack,
	Ham_ESF_RemoveSpecialModes,
	Ham_ESF_StopTurbo,
	Ham_ESF_TakeBean,
	Ham_ESF_GetPowerLevel,
	Ham_ESF_RemoveAllOtherWeapons,
	Ham_ESF_StopSwoop,
	Ham_ESF_SetDeathAnimation,
	Ham_ESF_SetModel,
	Ham_ESF_AddAttacks,
	Ham_ESF_EmitClassSound,
	Ham_ESF_CheckLightning,
	Ham_ESF_FreezeControls,
	Ham_ESF_UnFreezeControls,
	Ham_ESF_UpdateKi,
	Ham_ESF_UpdateHealth,
	Ham_ESF_GetTeleportDir,
	Ham_ESF_Weapon_HolsterWhenMeleed,

	Ham_NS_SetBoneController,
	Ham_NS_SaveDataForReset,
	Ham_NS_GetHull,
	Ham_NS_GetMaxWalkSpeed,
	Ham_NS_SetTeamID,
	Ham_NS_GetPlayerClass, // Name truncated : Ham_NS_GetEffectivePlayerClass
	Ham_NS_GetAuthenticationMask,
	Ham_NS_PlayerClassChanged,  // Name truncated : Ham_NS_EffectivePlayerClassChanged
	Ham_NS_NeedsTeamUpdate,
	Ham_NS_SendTeamUpdate,
	Ham_NS_SendWeaponUpdate,
	Ham_NS_InitPlayerFromSpawn,
	Ham_NS_PackDeadPlayerItems,
	Ham_NS_GetAnimationForActivity,
	Ham_NS_StartObserver,
	Ham_NS_StopObserver,
	Ham_NS_GetAdrenalineFactor,
	Ham_NS_GetNamedItem,
	Ham_NS_Suicide,
	Ham_NS_GetCanUseWeapon,
	Ham_NS_Weapon_GetWeapPrimeTime, // Name truncated : Ham_NS_Weapon_GetWeapPrimeTime
	Ham_NS_Weapon_PrimeWeapon,
	Ham_NS_Weapon_GetIsWeaponPrimed,
	Ham_NS_Weapon_GetIsWeapPriming, // Name truncated : Ham_NS_Weapon_GetIsWeaponPriming
	Ham_NS_Weapon_DefaultDeploy,
	Ham_NS_Weapon_DefaultReload,
	Ham_NS_Weapon_GetDeployTime,

	HAM_LAST_ENTRY_DONT_USE_ME_LOL
};

enum 
{
	HAM_OK = 0,
	
	HAM_INVALID_FUNC,			// The function is not valid
	HAM_FUNC_NOT_CONFIGURED,	// This function is not configured in hamdata.ini
	
	HAM_ERR_END
};

#endif
