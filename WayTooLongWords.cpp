#include <iostream>
#include <string>
using namespace std;
int main()
{
    int time;
    cin >> time;
    while (time--)
    {
        string s;
        cin >> s;
        int n = s.length();
        if (n > 10)
        {
            string ans = "";
            ans += s[0];
            ans += to_string(n - 2);
            ans += s[n - 1];
            cout << ans << endl;
        }
        else cout << s << endl;
    }
}