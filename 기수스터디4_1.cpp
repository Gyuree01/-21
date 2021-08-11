#include <iostream>
using namespace std;

int main() {
    int burger, drink;
    int New;

    cin >> burger;
    cin >> New;

    if (New < burger) {
        burger = New;
    }
    cin >> New;
    if (New < burger) {
        burger = New;
    }

    cin >> drink;
    cin >> New;

    if (New < drink) {
        drink = New;
    }

    cout << burger + drink - 50;

    return 0;
}