#include "Test05B.h"
Test05B::Test05B() noexcept
	: Test05A(100)
	, b()
{
}
Test05B::Test05B(int b) noexcept
	: Test05A(200)
	, b(b)
{
}
void Test05B::f2()
{
	b = 0;
}
