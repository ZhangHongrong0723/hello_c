#include <iostream>
using namespace std;
/*
* ָ���뺯����
* 1��ֵ����
* 
* 
* 2����ַ����

*/

int swap(int a, int b) { //ֵ����
	int temp = a;
	a = b;
	b = temp;

	cout << "swap a=" << a << endl;
	cout << "swap b=" << b << endl;

	return 0;
}

int swap2(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;

	return 0;
}
void  main18() {
	int a = 10;
	int b = 20;
	//swap(a, b);
	swap2(&a, &b);
	
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
}