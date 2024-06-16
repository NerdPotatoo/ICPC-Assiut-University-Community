#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, rev = 0, rem;
    cin >> n;
    int temp = n;
    while(n>0){
        rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }
    if(rev == temp){
        cout << rev << "\nYES";
    }
    else{
        cout << rev << "\nNO";
    }
}