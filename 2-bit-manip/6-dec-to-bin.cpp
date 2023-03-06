// 👉 Problem Statement 👈 //

// Turn a decimal number to binary number.

// 👉 Solution 👈 //

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string dec_to_oct(ll n)
{
    string s;
    while (n)
    {
        s = to_string(n % 2) + s;
        n /= 2;
    }
    return s;
}

int main()
{
    ll n;
    cin >> n;
    cout << dec_to_oct(n);
}