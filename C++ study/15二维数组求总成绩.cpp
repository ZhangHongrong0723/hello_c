#include <iostream>
using namespace std;
int main15() {
	string arr[3][4];
	cout << "�����������Ϣ"<<endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++) {
			if (j == 0) {
				cout << "����������" << endl;
				cin  >> arr[i][j];
			}
			else if(j == 1){
				cout << "���������ĳɼ�" << endl;
				cin >> arr[i][j];
				}
			else if (j == 2) {
				cout << "��������ѧ�ɼ�" << endl;
				cin >> arr[i][j];
			}
			else {
				cout << "������Ӣ��ɼ�" << endl;
				cin >> arr[i][j];
			}
			
		}
	}
	int summax=0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++) {
			summax = summax+atoi(arr[i][j].c_str());
		}
		cout <<  arr[i][0] << "ͬѧ���ܳɼ�Ϊ"<<summax << endl;
		summax = 0;
	}
	system("pause");
	return 0;
}