#include "ShinsenBTService_Mon002EnemySpawnObserver.h"

UShinsenBTService_Mon002EnemySpawnObserver::UShinsenBTService_Mon002EnemySpawnObserver() {
    this->InFieldExistNumMax = 3;
    this->OutFieldExistNumMax = 2;
    this->PhaseForCheckKeyBlackboardKey = TEXT("PhaseForCheck");
    this->HpRateSpawnedRateBlackboardKey = TEXT("HpRateSpawnedRate");
    this->SpawnTimerBlackboardKey = TEXT("SpawnTimer");
    this->IsEnableSpawnTimerBlackboardKey = TEXT("IsEnableSpawnTimer");
    this->ManualSpawnIdBlackboardKey = TEXT("ManualSpawnId");
    this->SpawnCharId = TEXT("MON102_02");
    this->SpawnOverlapDefaultRadius = 180.00f;
    this->InSpawnEnemyPositionIdPrefix = TEXT("DGM01_06_MON102_02_BossEnemySpawnPointIn");
    this->InSpawnEnemyPositionIdNum = 5;
    this->OutSpawnEnemyPositionIdPrefix = TEXT("DGM01_06_MON102_02_BossEnemySpawnPointOut");
    this->OutFieldNum = 4;
    this->OutSpawnEnemyPositionIdNum = 3;
}

