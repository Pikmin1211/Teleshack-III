#include "gbafe.h"
#include "bmbattle.h"

void ComputeBattleUnitHitRate(BattleUnit* battleUnit){
	int hitRate = 0;

	hitRate += battleUnit->unit.skl;
	hitRate += battleUnit->unit.lck;
	hitRate += GetItemHit(battleUnit->weapon);
	hitRate += battleUnit->wTriangleHitBonus;

	if (hitRate < 0) hitRate = 0;

	battleUnit->battleHitRate = hitRate;
}

void ComputeBattleUnitAvoidRate(BattleUnit* battleUnit){
	int avoidRate = 0;

	avoidRate += battleUnit->battleSpeed;
	avoidRate += battleUnit->unit.lck;
	avoidRate += battleUnit->terrainAvoid;

	if (avoidRate < 0) avoidRate = 0;

	battleUnit->battleAvoidRate = avoidRate;
}

void ComputeBattleUnitSpeed(BattleUnit* battleUnit) {
	int battleSpeed = 0;

	battleSpeed += battleUnit->unit.spd;
	battleSpeed -= GetItemWeight(battleUnit->weaponBefore);

	if (battleSpeed < 0) battleSpeed = 0;

	battleUnit->battleSpeed = battleSpeed;
}