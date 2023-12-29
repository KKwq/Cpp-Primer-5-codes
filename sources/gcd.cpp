#include <iostream>
using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    int sum = 0, num = 0;
    while (cin >> num) {
        sum += num;
    }

    cout << "sum = " << sum << endl;

    return 0;
}