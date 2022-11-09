#include "LwSysPlayerController.h"
#include "LwSysInputAction.h"
#include "LwSysInputAxis.h"

ALwSysPlayerController::ALwSysPlayerController() {
    this->InputActionMenuDecide = CreateDefaultSubobject<ULwSysInputAction>(TEXT("MenuDecide"));
    this->InputActionMenuCancel = CreateDefaultSubobject<ULwSysInputAction>(TEXT("MenuCancel"));
    this->InputActionMenuUp = CreateDefaultSubobject<ULwSysInputAction>(TEXT("MenuUp"));
    this->InputActionMenuDown = CreateDefaultSubobject<ULwSysInputAction>(TEXT("MenuDown"));
    this->InputActionMenuLeft = CreateDefaultSubobject<ULwSysInputAction>(TEXT("MenuLeft"));
    this->InputActionMenuRight = CreateDefaultSubobject<ULwSysInputAction>(TEXT("MenuRight"));
    this->InputActionMenuLT = CreateDefaultSubobject<ULwSysInputAction>(TEXT("MenuLT"));
    this->InputActionMenuRT = CreateDefaultSubobject<ULwSysInputAction>(TEXT("MenuRT"));
    this->InputActionMenuLB = CreateDefaultSubobject<ULwSysInputAction>(TEXT("MenuLB"));
    this->InputActionMenuRB = CreateDefaultSubobject<ULwSysInputAction>(TEXT("MenuRB"));
    this->InputActionMenuPause = CreateDefaultSubobject<ULwSysInputAction>(TEXT("MenuPause"));
    this->InputAxisCharacterMoveForward = CreateDefaultSubobject<ULwSysInputAxis>(TEXT("CharacterMoveForward"));
    this->InputAxisCharacterMoveRight = CreateDefaultSubobject<ULwSysInputAxis>(TEXT("CharacterMoveRight"));
    this->InputActionArray.AddDefaulted(11);
    this->InputAxisArray.AddDefaulted(2);
}

