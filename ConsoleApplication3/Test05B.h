#pragma once
#include "Test05A.h"
//�h���N���X
class Test05B : public Test05A
{
	int b;
public:
	Test05B() noexcept;
	Test05B(int b) noexcept;
	void f2();
};

