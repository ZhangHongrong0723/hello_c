#include <iostream>
using namespace std;
//����ṹ��
struct student {
	
	string name;
	int age;
	int score;
};

int main20() {
	student stdArray[2] =
	{
		{"����",18,99},
		{"����",28,70}
	};

	stdArray[0].age = 30;
	stdArray[0].name = "����";
	stdArray[0].score = 60;

	for (int i = 0; i < 2; i++) {
		cout << stdArray[i].name << "    " << stdArray[i].age << "      " << stdArray[i].score << endl;
	}
	system("pause");
	return 0;
}