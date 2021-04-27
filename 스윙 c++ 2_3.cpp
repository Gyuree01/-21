#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int* ptr; // 포인터 선언 
	ptr = &a;

	cout << "변수 a의 주소는: " << ptr << endl; 
	cout << "a의 값은: " << a << endl; //a에 저장된 값을 출력
	return 0;
}