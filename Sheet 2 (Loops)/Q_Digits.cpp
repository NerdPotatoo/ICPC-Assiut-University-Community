#include <iostream>

using namespace std;
int main() {
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        for(int i = s.size()-1; i>=0; i--){
            cout << s[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}