#include <iostream>
using namespace std;
int main10() {
	for (int i = 1; i <= 100; i++) {
		if (i / 10 == 7 || i % 10 == 7 || i % 7 == 0) {
			cout << "������Ϊ" << i << "���û�һ������" << endl;
		}
		else {
			cout << "������" << i << endl;
		}
		
	}
	system("pause");
	return 0;
}