#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	//1������ָ��
	int a = 10;
	int* p;
	//2����ָ���¼a�ĵ�ַ
	p = &a;
	cout << (int)p << endl;
	cout << (long long)p << endl;
	cout << (int)&a << endl;
	//3��ʹ��ָ��--������
	cout << *p << endl;
	*p = 1000;
	cout << a << endl;
	cout << "git" << endl;
}