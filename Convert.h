#pragma once
#include "CPU.h"
#include "Defines.h"
#include <iomanip>
#include <sstream>

using namespace std;
class Convert
{
public:
	std::string Hex;
	std::string ToHex(ushort Num)
	{
		stringstream stream;
		stream << hex << Num;
		std::string buffer = stream.str();
		return buffer;
	}
	auto ToDec()
	{
		stringstream stream;
		byte x;;
		stream << hex << Hex;
		stream >> x;

		return x;
	}
};
