#include "ScriptParam.h"

FScriptParam::FScriptParam() {
    this->Command = EScriptCommand::Idle;
    this->CommandSub = EScriptCommandSub::None;
    this->Object = NULL;
    this->ParamInt01 = 0;
    this->ParamBool01 = false;
    this->ParamBool02 = false;
    this->ParamFloat01 = 0.00f;
    this->ParamFloat02 = 0.00f;
}

