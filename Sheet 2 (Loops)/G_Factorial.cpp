#include<iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long n, fac = 1;
        cin >> n;
        for(int i = 1; i<= n; i++)
        {
            fac *= i;
        }
        cout << fac << endl;
    }
}
