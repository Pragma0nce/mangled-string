// encryption.cpp : Defines the entry point for the console application.
//
/*
A simple process to mangle data where the different sources all have the same length can be done as below

1.     Concatenate the sources by creating a new string where the characters at a given index for all sources appear next to each other.
2.     The indexed characters are split by a delimiter
3.     The head of the string contains the amount of sources in the string

Example

Assume we have the following sources

123; 456; 789

The mangled string would thus look like this

Added 123 : 1-1-2-3
Added 456 : 02-14-25-36
Added 789 : 003-147-258-369


*/


#include "stdafx.h"

int main()
{
	MangledString input;

	input.AddSource("123");
	std::cout << input << std::endl;

	input.AddSource("456");
	std::cout << input << std::endl;

	input.AddSource("789");
	std::cout << input << std::endl;

	input.AddSource("369");
	std::cout << input << std::endl;

	char c;
	std::cin >> c;
	return 0;
}


