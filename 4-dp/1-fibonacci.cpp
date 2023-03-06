#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,........

int main()
{
    ll n;
    cin >> n;

    ll dp[100006];

    dp[0] = 0;
    dp[1] = 1;

    for (ll i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n];
}