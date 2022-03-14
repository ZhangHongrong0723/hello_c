#include <iostream>
using namespace std;

//创建结构体指针
struct SStudent {
	string name;
	int age;
	int score;
	
};

int main21() {
	SStudent s1 = {"张三",19,98,};

	struct SStudent* p = &s1;

	//如果使用结构体访问，用 . 即可访问数据
	cout << s1.age << endl;


	//如果使用指针访问数据，用 -> 即可访问数据
	cout << p->name << endl;


	system("pause");
	return 0;
}