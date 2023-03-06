/*

Output the following pattern 👇

****
****
****
****

here no. of rows = 4 and no. of cols = 4

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll r, c;
    cin >> r >> c;

    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << "\n";
    }
}