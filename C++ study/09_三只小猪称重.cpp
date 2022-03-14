#include<iostream>
using namespace std;
/*
	三只小猪称体重，判断谁更重
*/
int main09() {
	int pig1,pig2=0,pig3=0;
	cout << "请输入三只小猪的体重" << endl;
	cin >> pig1;
	cin >> pig2;
	cin >> pig3;
	if (pig1 > pig2 && pig1 > pig3) {
		cout << "最重的是第一只小猪,体重为" << pig1 << endl;
	}
	else if (pig2 > pig1 && pig2 > pig3) {
		cout << "最重的是第二只小猪,体重为" << pig2 << endl;
	}
	else {
		cout << "最重的是第三只小猪,体重为" << pig3 << endl;
		
	}
	system("pause");
	return 0;
}