#include <iostream>
using namespace std;
int main10() {
	for (int i = 1; i <= 100; i++) {
		if (i / 10 == 7 || i % 10 == 7 || i % 7 == 0) {
			cout << "该数字为" << i << "且敲击一次桌子" << endl;
		}
		else {
			cout << "非数字" << i << endl;
		}
		
	}
	system("pause");
	return 0;
}