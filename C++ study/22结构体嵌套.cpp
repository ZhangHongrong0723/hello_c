#include <iostream>
using namespace std;

//�ṹ��Ƕ��

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
	student s = { "����",10 };
	teacher t = {19,"����",s};
	
	cout << t.s1.age << endl;

	system("pause");
	return 0;
}