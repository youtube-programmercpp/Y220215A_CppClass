#include "Test04.h"
#include <exception>
#include <iostream>
int main()
{
	try {
		Test04 a;
		Test04 b(123, 0);
	}
	catch (const std::exception& e) {
		//��O��ߑ�����
		std::cerr << e.what() << std::endl;
	}
}
