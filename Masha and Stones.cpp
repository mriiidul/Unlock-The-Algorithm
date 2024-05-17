#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int o = 0, e = 0;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            o++;
        }
        else if (a[i] % 2 == 0)
        {
            e++;
        }
    }
    if (o == n || e == n)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
