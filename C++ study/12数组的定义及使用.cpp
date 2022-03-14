#include <iostream>
using namespace std;
int main12() {
	int arr1[3];
	int arr2[] = { 11,33,44,55 };
	int arr3[5] = {332,551,223,571};
	/*求取数组长度：sizeof(arr) / sizeof(arr[0])
	  整个数组所占内存空间：sizeof(arr)
	  每个数组所占内存空间：sizeof(arr[0])
	  数组首地址：arr即可，若需查看10进制类型，可加（int）arr，或者是&arr或者（int）&arr[0]
	*/
	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
		cout << arr3[i] << endl;
	}
	cout << arr3 << endl;
	cout << &arr3<<endl;
	system("pause");
	return 0;
}