#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n),ans;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i<n; i++)
    {
        cin>>b[i];
    }
    ans = b;
    for(int i = 0; i<n; i++)
    {
        ans.push_back(a[i]);
    }
    for(int val:ans)
    {
        cout<<val<<" ";
    }
    return 0;
}