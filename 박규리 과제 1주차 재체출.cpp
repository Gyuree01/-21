#include <iostream> 
#include <string>
using namespace std; // 이후 std 생략을 위해 사용  
int main() {
	    cout << "당신의 이름은 무엇입니까?"; // 출력 내용  
	    string name; // 크기 상관 없음  
	    getline(cin, name); //띄어쓰기를 할 수 있는 getline 함수 이용 
	    cout << "반갑습니다." << name << "님" << endl;
	

	   int price1, price2, price3; // 가격 선언  
	   int number1, number2, number3; // 갯수 선언  
	   int total; // 최종 계산 결과  
	
	  cout << "apple의 가격은 얼마입니까?"; // 입력&출력  
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
	

       total = price1 * number1 + price2 * number2 + price3 * number3 -500; // 최종값 계산  
	   cout << "총" << total << "원 입니다.\n"; // 결과 출력  
	
	   return 0;

}


