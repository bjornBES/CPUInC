#include "StringHelper.h"

string getLeftPaddingString(string const& str, int n, char paddedChar)
{
    ostringstream ss;
    ss << right << setfill(paddedChar) << setw(n) << str;
    return ss.str();
}

string getRightPaddingString(string const& str, int n, char paddedChar)
{
    ostringstream ss;
    ss << left << setfill(paddedChar) << setw(n) << str;
    return ss.str();
}
