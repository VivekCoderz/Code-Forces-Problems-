#include <iostream>
#include <string>
using namespace std;
void  toLowerCase(string &s){
    for(int i = 0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    toLowerCase(s1);
    toLowerCase(s2);
    if(s1>s2) cout<<1;
    else if(s1<s2) cout<<-1;
    else if(s1==s2) cout<<0;
}