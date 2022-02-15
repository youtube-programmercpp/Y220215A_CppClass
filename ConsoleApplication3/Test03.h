#pragma once
#include <string>
class Test03
{
	int              a;
	std::string      b;
	int              c;
public:
	Test03();
	Test03(int a, std::string&& b, int c);
};

