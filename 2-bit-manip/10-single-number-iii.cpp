// problem statement : https://leetcode.com/problems/single-number-iii/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 2, 3, 4, 5, 1, 3};

    int xors = 0;

    for (int i = 0; i < arr.size(); i++)
        xors ^= arr[i];

    int position = 0;
    int temp = xors;

    // finding position of the first set-bit from right in xors
    while ((temp)&1 != 1)
    {
        position++;
        temp = temp >> 1;
    }

    // filtering out the numbers from arr which have set-bit at position

    int num1 = 0;
    int num2 = 0;
    int onesPositionthShift = 1 << position;

    for (int i = 0; i < arr.size(); i++)
    {
        if ((arr[i] & onesPositionthShift) > 0)
        {
            // targeting all the elemets which has the first setbit from right in the same position....the duplicate numbers will delete each other and the unique will remain
            num1 = num1 ^ arr[i];
        }
        else
        {
            // targeting rest of the remaining elements...here also the duplicate numbers will delete each other and the unique will remain
            num2 = num2 ^ arr[i];
        }
    }

    cout << num1 << " " << num2 << "\n";
}
