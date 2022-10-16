#include "gbafe.h"
#include "bmbattle.h"

void ComputeBattleUnitHitRate(struct BattleUnit* battleUnit){
	int hitRate = 0;

	hitRate += battleUnit->unit.skl;
	hitRate += battleUnit->unit.lck;
	hitRate += GetItemHit(battleUnit->weapon);
	hitRate += battleUnit->wTriangleHitBonus;

	battleUnit->battleHitRate = hitRate;
}

void ComputeBattleUnitAvoidRate(struct BattleUnit* battleUnit){
	int avoidRate = 0;

	avoidRate += battleUnit->battleSpeed;
	avoidRate += battleUnit->unit.lck;
	avoidRate += battleUnit->terrainAvoid;

    battleUnit->battleAvoidRate = avoidRate;
}