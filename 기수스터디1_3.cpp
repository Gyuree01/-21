#include<iostream>
#include<memory>
using namespace std;

class Test {
public:
	char* name;
	int grade;

	void printINFO() {

		cout << "�̸�" << name << endl;
		cout << "�г�" << grade << endl;
	}

	Test() {
		cout << "������ ȣ��" << endl;
	}

	Test(const Test& _Value) {

		cout << "���� ������ ȣ��" << endl;
		
		grade = _Value.grade;
		name = new char[strlen(_Value.name) + 1];
		strcpy_s(name, strlen(_Value.name) + 1, _Value.name);
	}

	~Test() {
		cout << "�Ҹ��� ȣ��" << endl;
	}
};

int main() {
	Test A;
	A.name = new char[6];
	strcpy_s(A.name, 4, "SWU");
	A.grade = 1;

	A.printINFO();

	Test B = A;

	cout << "B = A ������ A�� ������ �����ϸ�?" << endl;

	strcpy_s(A.name, 6, "SWUNI");
	A.grade = 3;

	A.printINFO();
	B.printINFO();
}