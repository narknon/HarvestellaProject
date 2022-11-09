#include "RecipeWork.h"

FRecipeWork::FRecipeWork() {
    this->Status = ERecipeStatus::None;
    this->bComplete = false;
    this->CompleteDays = 0;
}

