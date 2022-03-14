#include <iostream>
using namespace std;
/*
	结构体属于用户自定义的数据类型，允许用户存储不同的数据类型
	语法：struct 结构体名{结构体成员列表}；
	
	通过结构体创建变量
	1：struct 结构体名 变量名
	2：struct 结构体名 变量名={成员1值，成员2值。。。}
	3：定义结构体时顺便创建变量

*/

struct Student {

	string name;
	int age;
	double score;
};//s3;//顺便创建学生对象s3用的比较少。但是要看得懂

int main19() {
	//通过学生类型创建结构体
	// 在C++中，结构体创建的时候struct关键字不可以省略，但是在结构体使用的时候struct关键字可以省略。
	//1.
	struct Student s1;
	s1.name = "张三";
	s1.age = 19;
	s1.score = 100;
	cout << "姓名\t" << s1.name << "年纪\t" << s1.age << "成绩\t" << s1.score << endl;

	//2.

	struct Student s2 = {"李四",20,90};

	cout << "姓名\t" << s2.name << "年纪\t" << s2.age << "成绩\t" << s2.score << endl;

	system("pause");
	return 0;
}