#include <iostream>
using namespace std;
int main14() {
	/*
		��ά����Ķ��巽ʽ
	*/
	int arr1[][2] = { 11,22,33,44,55,66 };
	int arr2[2][2] = { 11,33,55,77 };
	int arr3[2][2] = { {44,99},{88,22} };
	int arr4[2][4];
	/*
		��ά�����ȡֵЧ��
		��ά������ڴ�ռ䣺sizeof(arr);
		��ά�����һ�д�С��sizeof(arr[0]);
		��ά�����Ԫ�ش�С��sizeof(arr[0][0]);
		��ά�����������sizeof(arr)/sizeof(arr[0]);
		��ά�����������sizeof(arr[0])/sizeof(arr[0][0])
	*/
	system("pause");
	return 0;
}