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
	//cout << *p1 << endl;
	//*p1 = 1000;
	//cout << *p1 << endl;
	//6、野指针--指针变量指向非法的内存空间
	int* p2 = (int*)0x1100;
	cout << *p2 << endl;
	
	/// <summary>
	/// const修饰指针：
	/// 1、const修饰指针：常量指针 指针指向可以修改，但指针指向的值不可以修改
	/// 2、const修饰常量：指针常量
	/// 3、const即修饰指针，又修饰常量
	/// </summary>
	/// <returns></returns>
	/// 1、const修饰指针：常量指针 指针指向可以修改，但指针指向的值不可以修改
	/*
	int a1 = 10;
	int b1 = 20;
	const int* p = &a1;
	*p = 20;(错)
	p = &b1;(对)
	*/
	/// 2、const修饰常量：指针常量 指针的指向不可以改，但指针的值可以修改
	/*
	int a = 10;
	int b = 20;
	int* const p = &a;
	p = &b; (错)
	* p = 30;(对)
	*/
	/// 3、const即修饰指针，又修饰常量 都不能被改变
	/*
	int a = 10;
	int b = 20;
	const int* const p = &a;
	*p = 20;(错)
	p = &b;(错)
	*/


	return 0;

}