#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<int> frq(26,0);
    cin>>s;
    for(int i =0; i<s.size(); i++)
    {
        frq[s[i]-'a']++;
    }
    for(int i =0; i<26; i++)
    {
        if(frq[i]!=0)
        {
            cout<<(char)(i+'a')<<" : "<<frq[i]<<endl;
        }
    }

    return 0;
}