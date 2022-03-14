#include <iostream>
using namespace std;
	/*
		1、常量指针，形如const int *p=？
		   其中常量指针指向的地址可以改，但是其中的数值不能修改。
		   p=&c正确 *p=30不正确
		2、指针常量，形如int *const p=？
			其中指针常量的地址不可以改，但是指针常量的数值可以改
			p=&c不正确 *p=30正确
		3、const修饰指针和常量，形如const int * const p=？
			其中地址和值都不可以改
	*/
int main17() {
	int a = 10;
	int b = 10;
	int c = 20;
	const int* p = &a;
	
	cout << p << endl;
	int arr[] = { 1,2,3,4,5,6,7 };
	int * p2 = arr;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++,p2++) {
		cout << "\t" << *p2;//*p2 代表解引用p2
	}
	system("pause");
	return 0;
}