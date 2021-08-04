#include <iostream>
using namespace std;

int main()
{
	int T, N, P = 0;

	cin >> T;
	for (int i = 0; i < T; i++)
	{ 
		int total = 0;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> P;
			total += P;
		}
		cout << total << endl;
	}
	return 0;
}