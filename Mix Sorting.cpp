#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, first, second;
    cin >> n;
    int a[n];
    first = floor((2 * n) / 3);
    second = floor((3 * n) / 4);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + first, greater<int>());
    sort(a + (n - second), a + n);
    int mid = floor(n / 2);
    cout << a[mid] << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
