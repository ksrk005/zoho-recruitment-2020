#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string s; cin >> s;
    ll counter;
    for (ll i = 1; i <= s.size(); i++)
    {
        counter = s.size()/2;
        for (ll j = 1; j <= s.size()-i; j++)
            cout << " ";
        for (ll j = 1; j <= i; j++)
        {
            if (counter == s.size()) counter = 0;
            cout << s[counter];
            counter++;
        }
        cout << endl;
    }
    return 0;
}
