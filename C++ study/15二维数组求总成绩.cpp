#include <iostream>
using namespace std;
int main15() {
	string arr[3][4];
	cout << "请输入相关信息"<<endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++) {
			if (j == 0) {
				cout << "请输入姓名" << endl;
				cin  >> arr[i][j];
			}
			else if(j == 1){
				cout << "请输入语文成绩" << endl;
				cin >> arr[i][j];
				}
			else if (j == 2) {
				cout << "请输入数学成绩" << endl;
				cin >> arr[i][j];
			}
			else {
				cout << "请输入英语成绩" << endl;
				cin >> arr[i][j];
			}
			
		}
	}
	int summax=0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++) {
			summax = summax+atoi(arr[i][j].c_str());
		}
		cout <<  arr[i][0] << "同学的总成绩为"<<summax << endl;
		summax = 0;
	}
	system("pause");
	return 0;
}