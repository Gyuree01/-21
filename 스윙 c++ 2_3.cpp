#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int* ptr; // ������ ���� 
	ptr = &a;

	cout << "���� a�� �ּҴ�: " << ptr << endl; 
	cout << "a�� ����: " << a << endl; //a�� ����� ���� ���
	return 0;
}