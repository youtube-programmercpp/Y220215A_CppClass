#include "Test01.h"
//�֐����`����
void Test01::f(int k)
{
	a = 10 * k;
	b = 20 * k;
	c = 30 * k;
}
int Test01::sum() const
{
	return a + b + c;
}

