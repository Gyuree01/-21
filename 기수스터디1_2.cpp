#include <iostream>
using namespace std;

int main() {
	int* p = new int[10];
	double sum = 0;
	cout << "정수 10개 입력해주세요" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> p[i];
		sum += p[i];
	}
	cout << "평균 " << sum / 10;
	delete[] p;
}