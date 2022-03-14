#include<iostream>
using namespace std;
/*
	sizeof 关键字：统计数据类型所占内存大小
	sizeof（数据类型/变量）
	Linux系统中 32位机long为4位，64位机为8位，windows中为4位
*/
int main4() {
	short n1 = 10;
	cout << "占用内存空间为：" << sizeof(short) << endl;
	cout << "数据大小为：" << sizeof(n1) << endl;

	int n2 = 10;
	cout << "占用内存空间为：" << sizeof(int) << endl;
	cout << "数据大小为：" << sizeof(n2) << endl;

	long n3 = 10;
	cout << "占用内存空间为：" << sizeof(long) << endl;
	cout << "数据大小为：" << sizeof(n3) << endl;

	long long n4 = 10;
	cout << "占用内存空间为：" << sizeof(long long) << endl;
	cout << "数据大小为：" << sizeof(n4) << endl;
	system("pause"); 
	return 0;
}