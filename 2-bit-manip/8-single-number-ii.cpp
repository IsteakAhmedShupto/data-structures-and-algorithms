// problem statement : https://leetcode.com/problems/single-number-ii/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 2, 3, 7, 1, 1, 2, 3, 3};

    sort(arr.begin(), arr.end());

    while (arr.size() % 3 != 0)
    {
        arr.push_back(-1);
    }

    for (int i = 0; i < arr.size() - 2; i += 3)
    {
        if (arr[i] != arr[i + 2])
        {
            cout << arr[i] << " ";
            return 0;
        }
    }
}
