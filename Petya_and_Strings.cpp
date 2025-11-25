#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n1 = 0, n2 = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        n1+= tolower(s1[i]);
        n2+= tolower(s2[i]);
    }
    if(n1>n2) cout<<1;
    else if(n1<n2) cout<<-1;
    if(n1==n2) cout<<0;
}