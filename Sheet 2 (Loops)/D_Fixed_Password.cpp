#include<iostream>
using namespace std;
int main()
{
    int n;
    while(1){
        cin >> n;
        if(n != 1999){
            cout << "Wrong\n";
        }
        else{
            cout << "Correct\n";
            break;
        }
    }
}