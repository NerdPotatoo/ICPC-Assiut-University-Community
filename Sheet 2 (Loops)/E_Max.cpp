#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, ans = INT_MIN;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a;
        ans = max(ans, a);
    }
    cout << ans;
}
