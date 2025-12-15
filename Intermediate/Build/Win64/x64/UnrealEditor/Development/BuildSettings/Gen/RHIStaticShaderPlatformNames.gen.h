#pragma once
#include "HAL/Platform.h"
struct FStaticNameMapEntry { const TCHAR* Name; const TCHAR* Platform; const int Enum; };
extern BUILDSETTINGS_API FStaticNameMapEntry GStaticShaderNames[];