#include <iostream>
using namespace std;

int main() {
    int a, b;
    int sum = 0;
    int min = 10001;

    cin >> a;
    cin >> b;

    if (a == 1) {
        a = 2;
    }

    for (a; a <= b; a++) {
        int ch = 1;
        for (int t = 2; t <= a / 2; t++) {
            if (a % t == 0) {
                ch = 0;
                break;
            }
        }

        if (ch == 1) {
            if ( min > a)
                min = a;
            sum += a;
        }
    }

    if (sum == 0) {
        cout << -1;
    }

    else {
        cout << sum << endl;
        cout << min << endl;
    }

    return 0;
}