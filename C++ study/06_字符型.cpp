#include<iostream>
using namespace std;
/*
	字符型char 中只能包含一个字符；且只在占用一个字节，保存ASCII码
	水平制表符的意思\t的意思是暂用8个,前面数据占据包含在8个内，可以整齐的输出后面的数据
*/
int main6() {
	char ch = 'a';
	//char ch2 = "a";//char中只能使用单引号；
	//char ch3='adncsd'//char 中单引号只能包含一个字符；
	cout << "char ch=" << ch << endl;
	cout << "aaa\thello" << endl;
	cout << "a\thello" << endl;
	cout << "aaaaaaaa\thello"  << endl;
	system("pause");
	return 0;
}