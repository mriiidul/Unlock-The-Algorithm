#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,max=0,index=0;
    cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=max)
        {
            max = a[i];
            index = i+1;
        }
    }
    cout<<index<<endl;
    return 0;
}
