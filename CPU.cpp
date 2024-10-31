#include "CPU.h"
#include "StringHelper.h"

using namespace BSZCPU;
Convert convert;
byte result[2];

void CPU::Tick(Mem &mem)
{
	if (Flag.R == 1)
	{
		ushort Data = FerchByte(mem);
		ushort* Args = Decode(Data, mem);
		Execute(LDR, Args);
	}
}
ushort CPU::GetStartVector(Mem& mem)
{
	PC = 0xFFFF;
	return mem.Data[PC];
}
void CPU::Execute(Instr instr, ushort* Data)
{
	switch (instr)
	{
	case BSZCPU::Hlt:
		Flag.R = 0;
		break;
	case BSZCPU::LDR:

		break;
	default:
		break;
	}
}
ushort CPU::FerchByte(Mem& mem)
{
	return mem.Data[PC];
}
ushort* CPU::Decode(ushort Data, Mem& mem)
{
	SplitUshort(Data);

	printf("High %u Low %u \n", result[0], result[1]);

	if (result[0] == 0)
	{

	}

	return 0;

	ushort Arg1 = 0;
	ushort Arg2 = 0;
	PC++;
	if (mem.Data[PC] != 00)
	{
		Arg1 = mem.Data[PC];
	}
	else
	{
		PC--;
	}
	PC++;
	if (mem.Data[PC] != 00)
	{
		Arg2 = mem.Data[PC];
	}
	else
	{
		PC--;

	}

	ushort test[3] = { Data, Arg1, Arg2 };

	return test;
}
void CPU::Break()
{
	Flag.R = 0;
}
void CPU::Reset(Mem& mem)
{
	A = X = 0;
	SP = 0xFF;

	PC = GetStartVector(mem);
	Flag.R = 1;

	mem.Initialise();
}
void CPU::SplitUshort(ushort Addr)
{
	string Addrs = getLeftPaddingString(convert.ToHex(Addr), 4, '0');

	printf("Addrs %s \n", Addrs.c_str());

	char arr[100];

	// Input using the getline function.
	char separator = ' ';
	int i = 0;

	// Temporary string used to split the string.
	string s;
	while (arr[i] != '\0') {
		if (arr[i] != separator) {
			// Append the char to the temp string.
			s += arr[i];
		}
		else {
			printf("Error");
			s.clear();
		}
		i++;

	}

	byte result[2];

	result[0] = High;
	result[1] = LOW;
}