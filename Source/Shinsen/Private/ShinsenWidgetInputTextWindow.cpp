#include "ShinsenWidgetInputTextWindow.h"

bool UShinsenWidgetInputTextWindow::ShowVirtualKeyboard() {
    return false;
}


UShinsenWidgetInputTextWindow::UShinsenWidgetInputTextWindow() {
    this->MaxLength = 10;
    this->LayoutKind = 0;
}

