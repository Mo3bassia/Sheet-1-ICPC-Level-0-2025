#include <iostream>
using namespace std;


int categories[5] = {100,20,10,5,1};
int main() {
    int N;
    int result = 0;
    cin >> N;
    for (int i = 0; i < 5; i++) {
        if (N >= categories[i]) {
            int times = N / categories[i];
            for (times; times > 0; times--) {
                N -= categories[i];
                result += 1;
            }
        }
    }
    cout << result;
    return 0;
}