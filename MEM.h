#include "Defines.h"
#pragma once

struct Mem
{
	static constexpr u32 MAX_MEM = 1024 * 64;
	ushort Data[MAX_MEM];

	void Initialise();
};