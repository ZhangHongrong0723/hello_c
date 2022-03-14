#include <iostream>

using namespace std;
/*
	字符串有两种：
	C风格：char 变量名[]="字符串值";
		注意事项：1、必须用双引号，不然报错。
				  2、变量名和[]不可以互换位置。
	C++风格：String 变量名="字符串值";
		注意事项：需要包含一个头文件#include<string>
		boolean 类型中非0都为真

*/
int main7() {
	char  p	[] = "ads";
	cout << p << endl;
	string s = "hello";
	cout << s << endl;
	int a;
	string str;
	cout << "请输入a的数值" << endl;
	cin >> a;
	cout << a<< endl;
	cout << "请输入str的数值" << endl;
	cin >> str;
	cout << str<< endl;
	system("pause");
	return 0;
}