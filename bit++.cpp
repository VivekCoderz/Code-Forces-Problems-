#include <iostream>
using namespace std;
int main()
{
    int time;
    cin >> time;
    int value = 0;
    while (time--)
    {
        string s;
        cin>>s;
        if(s=="++X") ++value;
        else if(s=="--X") --value;
        else if(s=="X++") value++;
        else if(s=="X--") value--;
    }
    cout<<value;
} 