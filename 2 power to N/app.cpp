#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int result = 1;
    cin >> n;
    // cout << pow(2, n);
    for (int i = 1; i <= n; i++) {
        result *= 2;
    }
    cout << result;
    return 0;
}