#include "Test04.h"
#include <stdexcept>
Test04::Test04(int a, int b)
{
	if (b == 0)
		throw std::runtime_error("b �������� 0 �ł����B");//�G���[...��O�𓊓�
	else
		x = a / b;
}
Test04::Test04() noexcept
	: x()
{
}
