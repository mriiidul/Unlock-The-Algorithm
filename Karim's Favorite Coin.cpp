#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;
    long long change = K - N;

    vector<int> coins = {25, 13, 9, 7, 2, 1};
    
    bool happy = false;
    
    for (int coin : coins) {
        if (change >= coin) {
            int count = change / coin;
            change -= count * coin;
            if (coin == 7 || coin == 9) {
                happy = true;
                break;
            }
        }
    }

    if (happy) {
        cout << "Happy" << endl;
    } else {
        cout << "Sad" << endl;
    }

    return 0;
}
