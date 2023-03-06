/*

Output the following pattern 👇

1111
2222
3333
4444

here no. of rows = 4 and no. of cols = 4

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll r, c;
    cin >> r >> c;

    ll start = 1;

    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            cout << start
                 << " ";
        }
        start++;
        cout << "\n";
    }
}