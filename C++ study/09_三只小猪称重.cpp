#include<iostream>
using namespace std;
/*
	��ֻС������أ��ж�˭����
*/
int main09() {
	int pig1,pig2=0,pig3=0;
	cout << "��������ֻС�������" << endl;
	cin >> pig1;
	cin >> pig2;
	cin >> pig3;
	if (pig1 > pig2 && pig1 > pig3) {
		cout << "���ص��ǵ�һֻС��,����Ϊ" << pig1 << endl;
	}
	else if (pig2 > pig1 && pig2 > pig3) {
		cout << "���ص��ǵڶ�ֻС��,����Ϊ" << pig2 << endl;
	}
	else {
		cout << "���ص��ǵ���ֻС��,����Ϊ" << pig3 << endl;
		
	}
	system("pause");
	return 0;
}