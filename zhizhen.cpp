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
	//4、指针的大小
	cout << sizeof(int*) << endl;
	cout << sizeof(long long*) << endl;
	//5、空指针--指针变量p指向内存地址编号为0的空间
	int* p1 = NULL;
	cout << p1 << endl;
	cout << *p1 << endl;

}