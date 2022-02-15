#pragma once
#include <string>
#include <vector>
class Test06
{
	std::vector<int> a;
public:
	//デフォルトコンストラクタ
	Test06();

	//コピーコンストラクタ
	Test06(const Test06& r);
	//代入演算子
	Test06& operator=(const Test06& r);


	//移動コンストラクタ
	Test06(Test06&& r) noexcept;
	//移動代入演算子
	Test06& operator=(Test06&& r) noexcept;


	//変換コンストラクタ
	Test06(int a);
	Test06(const std::string& a);
};

