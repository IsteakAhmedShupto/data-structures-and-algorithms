// problem link : https: // codeforces.com/problemset/problem/1516/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll res = 0;

        for (ll i = 0; i < n; i++)
        {
            res = res ^ arr[i];
        }

        ll flag = 0;

        // res == 0 means all the elements are equal in the array
        if (res == 0)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            ll res2 = 0;

            ll count = 0;

            for (ll i = 0; i < n; i++)
            {
                res2 = res2 ^ arr[i];

                if (res2 == res)
                {
                    res2 = 0;
                    count++;
                }
            }

            if (count >= 2)
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
    }
}
