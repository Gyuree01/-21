#include<iostream>
using namespace std; 

int main() {
	int N; // �Է¹޴� ���ڸ� �����޴� ����  
	int a, b; // �ݺ��� ��ü ���� ���� 
	cin >> N; 

	for (a=1; a <= N * 2; a++) // �ݺ��� ��ø ������� �� ��Ÿ����. ��ü ��.
	{

		for (b=1; b <= N; b++) // ��ü �� 
		{
			if (a % 2 == 0) // ¦���� ��
			{
				if (b % 2 == 0)
					cout << "*";
				else cout << " ";
			}
			else // Ȧ���� �� 
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