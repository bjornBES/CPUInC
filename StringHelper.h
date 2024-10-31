#include <iomanip>
#include <sstream>

using namespace std;
#pragma once

string getLeftPaddingString(string const& str, int n, char paddedChar = ' ');

string getRightPaddingString(string const& str, int n, char paddedChar = ' ');