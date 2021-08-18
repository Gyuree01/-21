#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int R, S;
	string P;

	cin >> R;
	for (int i = 0; i < R; i++)
	{
		cin >> S >> P;

		for (int i = 0; i < P.size(); i++)
		{
			for (int r = 0; r < S; r++)
				cout << P[i];
		}
		cout << endl;
	}
	return 0;
}