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
	//cout << *p1 << endl;
	//*p1 = 1000;
	//cout << *p1 << endl;
	//6��Ұָ��--ָ�����ָ��Ƿ����ڴ�ռ�
	int* p2 = (int*)0x1100;
	cout << *p2 << endl;
	
	/// <summary>
	/// const����ָ�룺
	/// 1��const����ָ�룺����ָ�� ָ��ָ������޸ģ���ָ��ָ���ֵ�������޸�
	/// 2��const���γ�����ָ�볣��
	/// 3��const������ָ�룬�����γ���
	/// </summary>
	/// <returns></returns>
	/// 1��const����ָ�룺����ָ�� ָ��ָ������޸ģ���ָ��ָ���ֵ�������޸�
	/*
	int a1 = 10;
	int b1 = 20;
	const int* p = &a1;
	*p = 20;(��)
	p = &b1;(��)
	*/
	/// 2��const���γ�����ָ�볣�� ָ���ָ�򲻿��Ըģ���ָ���ֵ�����޸�
	/*
	int a = 10;
	int b = 20;
	int* const p = &a;
	p = &b; (��)
	* p = 30;(��)
	*/
	/// 3��const������ָ�룬�����γ��� �����ܱ��ı�
	/*
	int a = 10;
	int b = 20;
	const int* const p = &a;
	*p = 20;(��)
	p = &b;(��)
	*/


	return 0;

}