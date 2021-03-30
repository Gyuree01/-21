#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "당신의 이름은 무엇입니까?"; 
    string name;
    getline(cin, name); //띄어쓰기를 할 수 있는 getline 함수 이용
    cout << "반갑습니다." << name << "님" << endl;

    int price1,price2,price3;
    int number1, number2, number3;
    int total;

    cout <<"apple의 가격은 얼마입니까?";
    cin >> price1; 
    cout << "banana의 가격은 얼마입니까?";
    cin >> price2;
    cout << "orange의 가격은 얼마입니까?";
    cin >> price3;

    cout << "apple은 몇 개 있습니까?";
    cin >> number1;
    cout << "banana는 몇 개 있습니까 ?";
    cin >> number2;
    cout << "orange는 몇 개 있습니까?";
    cin >> number3;

    total = price1 * number1 + price2 * number2 + price3 * number3;
    cout << "총" << total << "원 입니다.\n";

    return 0;
}
