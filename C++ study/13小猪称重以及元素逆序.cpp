#include <iostream>
using namespace std;
int main13() {
	/*//С�����
	int pigdemo[5];
	int max;
	for (int i = 0; i < sizeof(pigdemo) / sizeof(pigdemo[0]); i++) {
		cin >> pigdemo[i];
	}
	max = pigdemo[0];
	for (int j = 0; j < sizeof(pigdemo) / sizeof(pigdemo[0]); j++) {
		cout << "��" << j+1 << "ֻ�������Ϊ" << pigdemo[j] << endl;
		if (max < pigdemo[j]) {
			max = pigdemo[j];
		}
	}
	cout << "���ص�С������Ϊ" << max << endl;
	*/
	//Ԫ������
	int number[5];
	cout << "������5������" <<endl;
	for (int k = 0; k < sizeof(number) / sizeof(number[0]); k++) {
		cin >> number[k];
	}
	cout << "������������˳��Ϊ" << endl;
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
	cout <<"�������Ϊ:" << endl;
	for (int k = sizeof(number) / sizeof(number[0])-1; k >=0 ; k--) {
		cout << number[k] << "\t";
		 
	}
	system("pause");
	return 0;
}