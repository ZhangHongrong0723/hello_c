#include <iostream>
using namespace std;
	/*
		1������ָ�룬����const int *p=��
		   ���г���ָ��ָ��ĵ�ַ���Ըģ��������е���ֵ�����޸ġ�
		   p=&c��ȷ *p=30����ȷ
		2��ָ�볣��������int *const p=��
			����ָ�볣���ĵ�ַ�����Ըģ�����ָ�볣������ֵ���Ը�
			p=&c����ȷ *p=30��ȷ
		3��const����ָ��ͳ���������const int * const p=��
			���е�ַ��ֵ�������Ը�
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
		cout << "\t" << *p2;//*p2 ���������p2
	}
	system("pause");
	return 0;
}