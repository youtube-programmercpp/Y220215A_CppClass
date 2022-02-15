#include "Test05A.h"
Test05A::Test05A() noexcept
	: a()
{
}
Test05A::Test05A(int a) noexcept
	: a(a)
{
}
void Test05A::f1()
{
	a = 0;
}
