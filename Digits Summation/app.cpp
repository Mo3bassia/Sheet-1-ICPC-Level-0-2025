#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int digit1 = a % 10, digit2 = b % 10;
    cout << digit1 + digit2;
    return 0;
}