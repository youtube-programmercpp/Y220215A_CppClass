#pragma once
#include <string>
#include <vector>
class Test06
{
	std::vector<int> a;
public:
	//�f�t�H���g�R���X�g���N�^
	Test06();

	//�R�s�[�R���X�g���N�^
	Test06(const Test06& r);
	//������Z�q
	Test06& operator=(const Test06& r);


	//�ړ��R���X�g���N�^
	Test06(Test06&& r) noexcept;
	//�ړ�������Z�q
	Test06& operator=(Test06&& r) noexcept;


	//�ϊ��R���X�g���N�^
	Test06(int a);
	Test06(const std::string& a);
};

