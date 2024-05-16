#include <iostream>

using namespace std;

int main()
{
    long long int n, fact = 1;
    cin >> n;
    if (n <= 20 && n> 0)
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
    }
    cout << fact << endl;
    return 0;
}
