#include <iostream>
using namespace std;

int main() {
	int* p = new int[10];
	double sum = 0;
	cout << "���� 10�� �Է����ּ���" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> p[i];
		sum += p[i];
	}
	cout << "��� " << sum / 10;
	delete[] p;
}