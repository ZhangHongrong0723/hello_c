#include <iostream>
using namespace std;
int main12() {
	int arr1[3];
	int arr2[] = { 11,33,44,55 };
	int arr3[5] = {332,551,223,571};
	/*��ȡ���鳤�ȣ�sizeof(arr) / sizeof(arr[0])
	  ����������ռ�ڴ�ռ䣺sizeof(arr)
	  ÿ��������ռ�ڴ�ռ䣺sizeof(arr[0])
	  �����׵�ַ��arr���ɣ�����鿴10�������ͣ��ɼӣ�int��arr��������&arr���ߣ�int��&arr[0]
	*/
	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
		cout << arr3[i] << endl;
	}
	cout << arr3 << endl;
	cout << &arr3<<endl;
	system("pause");
	return 0;
}