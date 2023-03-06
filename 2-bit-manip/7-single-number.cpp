// 👉 Problem Statement 👈

// problem link : https://leetcode.com/problems/single-number/

/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

Inputs: [1,1,2,2,4,4,5] n=3
Output: 5
*/

// 👉 Solution 👈

// Note that X-or of two same numbers is always zero....if i X-or the whole array it will clear all the numbers with duplicate values in the array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 1, 2, 2, 4, 4, 5};

    int res = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        res ^= arr[i];
    }

    cout << res;
}