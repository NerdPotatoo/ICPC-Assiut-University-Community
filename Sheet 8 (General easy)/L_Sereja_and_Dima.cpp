#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int a[n];
    for(int i =0; i<n; i++)
    {
        cin >> a[i];
    }
    //sort(a,a+n);
    int sum_S = 0, sum_D =0;
    int i = 0 , j = n-1;
    while(i <= j){

        int x= max(a[i], a[j]);
        sum_S += x;
        if(x==a[i]){
            i++;
        }
        else{
            j--;
        }
        if(i>j){
            break;
        }
        x = max(a[i], a[j]);
        sum_D += x;
        if(x==a[i]){
            i++;
        }
        else{
            j--;
        }
    }

    cout << sum_S << " " << sum_D << "\n";
}
