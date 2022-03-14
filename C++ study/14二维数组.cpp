#include <iostream>
using namespace std;
int main14() {
	/*
		二维数组的定义方式
	*/
	int arr1[][2] = { 11,22,33,44,55,66 };
	int arr2[2][2] = { 11,33,55,77 };
	int arr3[2][2] = { {44,99},{88,22} };
	int arr4[2][4];
	/*
		二维数组的取值效果
		二维数组的内存空间：sizeof(arr);
		二维数组的一行大小：sizeof(arr[0]);
		二维数组的元素大小：sizeof(arr[0][0]);
		二维数组的行数：sizeof(arr)/sizeof(arr[0]);
		二维数组的列数：sizeof(arr[0])/sizeof(arr[0][0])
	*/
	system("pause");
	return 0;
}