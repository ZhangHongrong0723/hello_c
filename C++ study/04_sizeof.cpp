#include<iostream>
using namespace std;
/*
	sizeof �ؼ��֣�ͳ������������ռ�ڴ��С
	sizeof����������/������
	Linuxϵͳ�� 32λ��longΪ4λ��64λ��Ϊ8λ��windows��Ϊ4λ
*/
int main4() {
	short n1 = 10;
	cout << "ռ���ڴ�ռ�Ϊ��" << sizeof(short) << endl;
	cout << "���ݴ�СΪ��" << sizeof(n1) << endl;

	int n2 = 10;
	cout << "ռ���ڴ�ռ�Ϊ��" << sizeof(int) << endl;
	cout << "���ݴ�СΪ��" << sizeof(n2) << endl;

	long n3 = 10;
	cout << "ռ���ڴ�ռ�Ϊ��" << sizeof(long) << endl;
	cout << "���ݴ�СΪ��" << sizeof(n3) << endl;

	long long n4 = 10;
	cout << "ռ���ڴ�ռ�Ϊ��" << sizeof(long long) << endl;
	cout << "���ݴ�СΪ��" << sizeof(n4) << endl;
	system("pause"); 
	return 0;
}