#include <iostream>
using namespace std;

struct student {
	string name;
	int age;
};
//1��ʹ��ֵ���ݵķ���
void printStudent(student s) {
	cout << "���� ��   " << s.name << endl;

}

//2��ʹ�õ�ַ����
void printStudent(student *s1) {
	cout << "������:    " << s1->age << endl;
}
int main23(){

	//�ṹ������������
	//��ѧ�����뵽һ�������У���ӡѧ������Ϣ
	student s1;
	s1.age = 19;
	s1.name = "zhangsan";

	printStudent(s1);
	printStudent(&s1);
	//cout << "main�д�ӡ������:   " << s1.age << "\t" << s1.name << endl;
	system("pause");
	return 0;
}