#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, flag = 0;
    cin >> a >> b;
    int n[a];
    for (int i = 0; i < a; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (n[i] == b)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        cout << "Senti Aunti Ramva will never be mine" << endl;
    }
    else
    {
        cout << "Senti Aunti Ramva is mine" << endl;
    }
    return 0;
}
