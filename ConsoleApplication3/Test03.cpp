#include "Test03.h"
#include <iostream>
Test03::Test03()
	: Test03({}, {}, {})
{
}
Test03::Test03(int a, std::string&& b, int c)
	: a(          a )
	, b(std::move(b))
	, c(          c )
{
	std::cout << "�R���X�g���N�^���Ăяo����܂����B\n";
}
