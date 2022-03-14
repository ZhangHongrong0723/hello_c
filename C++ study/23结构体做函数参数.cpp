#include <iostream>
using namespace std;

struct student {
	string name;
	int age;
};
//1、使用值传递的方法
void printStudent(student s) {
	cout << "姓名 ：   " << s.name << endl;

}

//2、使用地址传递
void printStudent(student *s1) {
	cout << "年龄是:    " << s1->age << endl;
}
int main23(){

	//结构体做函数参数
	//将学生传入到一个参数中，打印学生的信息
	student s1;
	s1.age = 19;
	s1.name = "zhangsan";

	printStudent(s1);
	printStudent(&s1);
	//cout << "main中打印的数据:   " << s1.age << "\t" << s1.name << endl;
	system("pause");
	return 0;
}