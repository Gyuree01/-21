#include <iostream> 
#include <string>
using namespace std; // ���� std ������ ���� ���  
int main() {
	    cout << "����� �̸��� �����Դϱ�?"; // ��� ����  
	    string name; // ũ�� ��� ����  
	    getline(cin, name); //���⸦ �� �� �ִ� getline �Լ� �̿� 
	    cout << "�ݰ����ϴ�." << name << "��" << endl;
	

	   int price1, price2, price3; // ���� ����  
	   int number1, number2, number3; // ���� ����  
	   int total; // ���� ��� ���  
	
	  cout << "apple�� ������ ���Դϱ�?"; // �Է�&���  
      cin >> price1;
	  cout << "banana�� ������ ���Դϱ�?";
	  cin >> price2;
	  cout << "orange�� ������ ���Դϱ�?";
      cin >> price3;

	   cout << "apple�� �� �� �ֽ��ϱ�?";
	   cin >> number1;
	   cout << "banana�� �� �� �ֽ��ϱ� ?";
	   cin >> number2;
	   cout << "orange�� �� �� �ֽ��ϱ�?";
	   cin >> number3;
	

       total = price1 * number1 + price2 * number2 + price3 * number3 -500; // ������ ���  
	   cout << "��" << total << "�� �Դϴ�.\n"; // ��� ���  
	
	   return 0;

}


