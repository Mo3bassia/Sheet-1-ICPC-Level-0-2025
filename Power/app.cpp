#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A,B;
    int result = 1;
    cin >> A >> B;
    for (int i = 1; i<=B; i++) {
        result *= A;
    }
    cout << result;
    return 0;
}