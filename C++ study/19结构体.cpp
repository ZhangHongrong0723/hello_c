#include <iostream>
using namespace std;
/*
	�ṹ�������û��Զ�����������ͣ������û��洢��ͬ����������
	�﷨��struct �ṹ����{�ṹ���Ա�б�}��
	
	ͨ���ṹ�崴������
	1��struct �ṹ���� ������
	2��struct �ṹ���� ������={��Ա1ֵ����Ա2ֵ������}
	3������ṹ��ʱ˳�㴴������

*/

struct Student {

	string name;
	int age;
	double score;
};//s3;//˳�㴴��ѧ������s3�õıȽ��١�����Ҫ���ö�

int main19() {
	//ͨ��ѧ�����ʹ����ṹ��
	// ��C++�У��ṹ�崴����ʱ��struct�ؼ��ֲ�����ʡ�ԣ������ڽṹ��ʹ�õ�ʱ��struct�ؼ��ֿ���ʡ�ԡ�
	//1.
	struct Student s1;
	s1.name = "����";
	s1.age = 19;
	s1.score = 100;
	cout << "����\t" << s1.name << "���\t" << s1.age << "�ɼ�\t" << s1.score << endl;

	//2.

	struct Student s2 = {"����",20,90};

	cout << "����\t" << s2.name << "���\t" << s2.age << "�ɼ�\t" << s2.score << endl;

	system("pause");
	return 0;
}