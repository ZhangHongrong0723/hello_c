#include <iostream>
using namespace std;

//结构体嵌套

struct student {
	string name;
	int age;

};

struct teacher {
	int id;
	string name;
	struct student s1;

};

int main22() {
	student s = { "张三",10 };
	teacher t = {19,"老王",s};
	
	cout << t.s1.age << endl;

	system("pause");
	return 0;
}