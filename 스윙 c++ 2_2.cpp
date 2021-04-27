#include<iostream>
using namespace std; 

int main() {
	int N; // 입력받는 숫자를 지정받는 변수  
	int a, b; // 반복문 객체 변수 선언 
	cin >> N; 

	for (a=1; a <= N * 2; a++) // 반복문 중첩 사용으로 별 나타내기. 전체 행.
	{

		for (b=1; b <= N; b++) // 전체 열 
		{
			if (a % 2 == 0) // 짝수인 행
			{
				if (b % 2 == 0)
					cout << "*";
				else cout << " ";
			}
			else // 홀수인 행 
			{
				if (b % 2 == 0)
					cout << " ";
				else cout << "*";
			}
		}
		cout << endl;
	}
	return 0;
}