#include <iostream>
using namespace std;

//�����ṹ��ָ��
struct SStudent {
	string name;
	int age;
	int score;
	
};

int main21() {
	SStudent s1 = {"����",19,98,};

	struct SStudent* p = &s1;

	//���ʹ�ýṹ����ʣ��� . ���ɷ�������
	cout << s1.age << endl;


	//���ʹ��ָ��������ݣ��� -> ���ɷ�������
	cout << p->name << endl;


	system("pause");
	return 0;
}