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
	//4��ָ��Ĵ�С
	cout << sizeof(int*) << endl;
	cout << sizeof(long long*) << endl;
	//5����ָ��--ָ�����pָ���ڴ��ַ���Ϊ0�Ŀռ�
	int* p1 = NULL;
	cout << p1 << endl;
	cout << *p1 << endl;

}