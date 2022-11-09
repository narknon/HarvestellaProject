#include "ShinsenCharacterFL.h"
#include "Templates/SubclassOf.h"

class APawn;
class AShinsenCharacter;

AShinsenCharacter* UShinsenCharacterFL::SpawnPlayerFromClass(const FShinsenCharacterInitParam& Param, TSubclassOf<APawn> PawnClass) {
    return NULL;
}

AShinsenCharacter* UShinsenCharacterFL::Spawn(const FShinsenCharacterInitParam& Param) {
    return NULL;
}

int32 UShinsenCharacterFL::GetLearnSpAttackPoint() {
    return 0;
}

UShinsenCharacterFL::UShinsenCharacterFL() {
}

