#include <iostream>
using namespace std;

int main() {
	int choice; // 좌석 예약 할지 안할지 결정하는 변수 선언 
	int seat1, seat2; // 자리 선택
	int x, y; // 배열의 객체 
	int b[3][10] = { 0 }; // 3열 10행의 2차원 배열을 선언하고 값을 0으로 초기화

	while (1) // 반복문 사용 
	{
		cout << "좌석을 예약하시겠습니까? (1또는 0) ";
		cin >> choice;
		cout << endl;

		if (choice == 1) // 1을 입력할 경우 좌석 예약 
		{
			cout << "현재의 좌석은 다음과 같습니다." << endl;
			cout << "----------------------------------" << endl;
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "----------------------------------" << endl;
			for (x = 0; x < 3; x++) // 반복문 중첩 사용으로 배열을 화면에 나타냄 
			{
				for (y = 0; y < 10; y++)
				{

					cout << b[x][y] << " ";
				}
				cout << endl;
			}
			
			cout << endl;
			cout << "몇 일, 몇 번째 좌석을 예약하시겠습니까?";
			cin >> seat1 >> seat2;
			if (b[seat1 - 1][seat2 - 1] == 0) // 배열의 인덱스가 0부터 시작이므로 -1, 0인 자리 선택 시 
			{
				cout << "\n예약되었습니다." << endl;
				cout << "----------------------------------" << endl;
				cout << "1 2 3 4 5 6 7 8 9 10" << endl;
				cout << "----------------------------------" << endl;

				b[seat1 - 1][seat2 - 1] = 1; // 이미 선택한 자리를 1로 바꾸기 
				for (x = 0; x < 3; x++) // 반복문 중첩 사용으로 배열을 화면에 나타냄 
				{
					for (y = 0; y < 10; y++)
					{
						cout << b[x][y] << " ";
					}
					cout << endl;
				}

			}

			else // 이전에 예약된 자리를 선택 시 
			{   
				cout << endl;
				cout << "이미 예약된 자리입니다." << endl;
				cout << endl;
			}
		}

		else if (choice == 0) // 좌석 예약 안할 때 
		{
			cout << "좌석 예약 종료" << endl;
			break; // while 문 종료하기 
		}

		else // 1이나 0이 아닌 다른 숫자 입력 시 
		{
			cout << "1번 또는 0번만 입력하세요." << endl;
		}
	}

		return 0;
}