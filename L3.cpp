#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long arr[100001];
    cin>>n;
    freopen("Output.text","r",stdin);
    for(int i=1;i*i<=n;i++)
    {
        scanf("%lld ",&arr[i]);
    }
    return 0;
}