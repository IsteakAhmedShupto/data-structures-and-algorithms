/*

Problem statement 👇

Print all subsequences of a given string.

Input : abc
Output : "", a, b, c, ab, ac, bc, abc


Note 👉 A subsequence is a sequence that can be derived from the given sequence by deleting zero or more elements without changing the order of the remaining elements....empty string is also a subsequence.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<string> results;

    int len = s.size();

    for (int i = 0; i <= (1 << len) - 1; i++)
    {

        string str;

        int j = 0;
        int n = i;

        while (n > 0)
        {
            int last_bit = n & 1;
            if (last_bit)
            {
                str += s[j];
            }
            j++;
            n = n >> 1;
        }
        if (str.size())
            results.push_back(str);
    }
    cout << "EmptyString ";
    for (auto it : results)
    {
        cout << it << " ";
    }
}
