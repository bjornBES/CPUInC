#include <stdio.h>
#include "CPU.h"
#include "Defines.h"
#include "Convert.h"

using namespace BSZCPU;

int main()
{

	Mem MEM;
	CPU CPU;

	MEM.Data[0x7000] = 0x0105;
	MEM.Data[0x7001] = 0x5500;
	MEM.Data[0xFFFF] = 0x7000;

	CPU.Reset(MEM);

	CPU.Decode(0x0105, MEM);

	Convert Conv;

	printf("CPU PC:%u , A:%u , X:%u , SP:%u , Mem:%u , R:%u", 
		CPU.PC, CPU.A, CPU.X, CPU.SP, MEM.Data[CPU.PC], CPU.Flag.R);

	return 1;
	/*
	Convert Convert;


	CPU.Tick(MEM);

	return 0;
	*/
}

void Write(strings::string Text)
{
	printf(Text);
}
