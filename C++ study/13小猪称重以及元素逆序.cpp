#include <iostream>
using namespace std;
int main13() {
	/*//小猪称重
	int pigdemo[5];
	int max;
	for (int i = 0; i < sizeof(pigdemo) / sizeof(pigdemo[0]); i++) {
		cin >> pigdemo[i];
	}
	max = pigdemo[0];
	for (int j = 0; j < sizeof(pigdemo) / sizeof(pigdemo[0]); j++) {
		cout << "第" << j+1 << "只猪的体重为" << pigdemo[j] << endl;
		if (max < pigdemo[j]) {
			max = pigdemo[j];
		}
	}
	cout << "最重的小猪体重为" << max << endl;
	*/
	//元素逆序
	int number[5];
	cout << "请输入5个数字" <<endl;
	for (int k = 0; k < sizeof(number) / sizeof(number[0]); k++) {
		cin >> number[k];
	}
	cout << "五个数字排序后顺序为" << endl;
	int temp;
	for (int k = 0; k < sizeof(number) / sizeof(number[0])-1; k++) {
		for (int j = 0; j < sizeof(number) / sizeof(number[0])-k-1; j++) {
			if (number[j] < number[j + 1]) {
				temp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
	}
	for (int k = 0; k < sizeof(number) / sizeof(number[0]); k++) {
		cout << number[k] << "\t";
	}
	cout <<"逆序后结果为:" << endl;
	for (int k = sizeof(number) / sizeof(number[0])-1; k >=0 ; k--) {
		cout << number[k] << "\t";
		 
	}
	system("pause");
	return 0;
}