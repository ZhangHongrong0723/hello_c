#include <iostream>
using namespace std;

/*
	实型又称为浮点型
	1、float 单精度 4字节 有效数字7位
	2、double 双精度 8字节 有效数字 15-16位
*/
int main5() {
	float f1 = 3.14f;
	double d1 = 3.14;
	cout << "float的数值为" << f1 << endl;
	cout << "double的数值为" << d1 << endl;

	system("pause");
	return 0;
}