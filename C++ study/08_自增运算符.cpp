#include<iostream>
using namespace std;
int main8() {
	int a1 = 10;
	int b = ++a1 * 10;//a1=11 b1=(10+1)*10=110
	cout << "a1=" << a1 << endl;
	cout << "b=" << b << endl;
	int a2 = 10;
	int b2 = a2++ * 10;//a2=11 ;b2=10*10=100 后置运算先表达式运算再自增减
	cout << "a2=" << a2 << endl;
	cout << "b2=" << b2<< endl;
	cout << (a2 & b2) << endl;
	system("pause");
	return 0;
}