#include "Test04.h"
#include <stdexcept>
Test04::Test04(int a, int b)
{
	if (b == 0)
		throw std::runtime_error("b 引き数が 0 でした。");//エラー...例外を投入
	else
		x = a / b;
}
Test04::Test04() noexcept
	: x()
{
}
