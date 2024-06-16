#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n, c1 = 1,c2 = 0;
    cin >> n;
    string s1, s2, temp = "";
    cin >> s1;
    for(int i = 1; i<n; i++){
        cin >> s2;
        if(s1==s2) c1++;
        else {
            c2++;
            temp = s2;
        }
    }
    if(c1>c2) cout << s1;
    else cout << temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
