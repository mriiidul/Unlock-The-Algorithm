#include <iostream>
using namespace std;

int main() {
    long long int T, P;
    cin >> T >> P;

    long long int change = P - T;

    if (change & 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
