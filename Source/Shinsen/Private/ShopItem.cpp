#include "ShopItem.h"

FShopItem::FShopItem() {
    this->ItemType = EShopItemType::Item;
    this->Price = 0;
    this->Stock = 0;
    this->bPeriod = false;
}

