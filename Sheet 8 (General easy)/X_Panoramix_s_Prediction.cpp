#include<bits/stdc++.h>
using namespace std;

int main()
{

    int N = 50;
    vector<bool> is_prime(N+1, true);
    is_prime[0] = is_prime[1] = false;
    for(long long i = 2; i<= N; i++)
    {
        if(is_prime[i] && (long long)i*i <= N)
        {
            for(long long j = i*i; j<=N; j+=i){
                is_prime[j] = false;
            }
        }
    }
    int n,m, ans;
    cin >> n >> m;
    for(int i = n+1; i<=N; i++){
        if(is_prime[i]){
            ans = i;
            break;
        }
    }
    if(m == ans) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}