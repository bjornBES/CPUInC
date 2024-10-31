#pragma once
#include "Defines.h"
#include "Convert.h"
#include "MEM.h"
namespace BSZCPU
{
	enum Instr
	{
		Hlt = 0x0,

		LDR = 0x05
	};

	struct StatusFlags
	{
		byte R : 1; //Running Flag
	};

	struct CPU
	{
		ushort A, X;
		ushort SP;

		StatusFlags Flag;
		ushort PC;


		void Reset(Mem& mem);
		ushort FerchByte(Mem& mem);
		ushort* Decode(ushort Data, Mem& mem);
		void Break();
		void Execute(Instr instr, ushort* Data);
		ushort GetStartVector(Mem& mem);
		void Tick(Mem &mem);
		void SplitUshort(ushort addr);
	};
}