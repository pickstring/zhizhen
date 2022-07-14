#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	//1、定义指针
	int a = 10;
	int* p;
	//2、让指针记录a的地址
	p = &a;
	cout << (int)p << endl;
	cout << (long long)p << endl;
	cout << (int)&a << endl;
	//3、使用指针--接引用
	cout << *p << endl;
	*p = 1000;
	cout << a << endl;
	cout << "git" << endl;
}