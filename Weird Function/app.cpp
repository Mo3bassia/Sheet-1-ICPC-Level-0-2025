#include <iostream>
using namespace std;

int calcFunction(int num) {
    return (num*num) + 2 *num  +3;
}

int main() {
    int t;
    cin >> t;
    cout << calcFunction(calcFunction(calcFunction(t) + t) + calcFunction(calcFunction(t)));
    return 0;
}