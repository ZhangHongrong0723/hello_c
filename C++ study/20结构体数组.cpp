#include <iostream>
using namespace std;
//定义结构体
struct student {
	
	string name;
	int age;
	int score;
};

int main20() {
	student stdArray[2] =
	{
		{"张三",18,99},
		{"李四",28,70}
	};

	stdArray[0].age = 30;
	stdArray[0].name = "王五";
	stdArray[0].score = 60;

	for (int i = 0; i < 2; i++) {
		cout << stdArray[i].name << "    " << stdArray[i].age << "      " << stdArray[i].score << endl;
	}
	system("pause");
	return 0;
}