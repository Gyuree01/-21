#include <iostream>

using namespace std;

int a;
int map[101][101];

int main() {

	cin >> a;

	char r;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cin >> r;
			if (r == '.') map[i][j] = 1;
			else map[i][j] = 0;
		}
	}

	int count_v = 0;
	int v = 0;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (map[i][j] == 1)count_v++;
			else count_v = 0;

			if (count_v == 2)
				v++;
		}
		count_v = 0;
	}


	int n = 0;
	int count_n = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (map[j][i] == 1)count_n++;
			else count_n = 0;

			if (count_n == 2)
				n++;
		}
		count_n = 0;
	}

	cout << v << " " << n;

	return 0;
}