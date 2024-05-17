#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b >> a[i];
    }
    sort(a, a + n);
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        sum += a[i];
    }

    if (sum < 150)
    {
        cout << "Counseling Support Required" << endl;
    }
    else
    {
        cout << "Counseling Support Not Required" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
