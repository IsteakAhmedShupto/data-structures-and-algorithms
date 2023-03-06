#include <iostream>
using namespace std;

string evenOdd(int n)
{
    // the least significant bit or LSB is one for odd numbers and zero for even numbers
    if (n & 1)
    {
        return "Number is odd.";
    }
    else
    {
        return "Number is even.";
    }
}

int getting_ith_bit(int n, int i)
{
    int onesIthShift = (1 << i);
    return (n & onesIthShift) ? 1 : 0;
}

int clear_ith_bit(int n, int i)
{
    int onesIthShift = ~(1 << i);
    return n = (n & onesIthShift);
}

// set ith bit means making the ith bit 1
int set_ith_bit(int n, int i)
{
    int onesIthShift = (1 << i);
    return n = (n | onesIthShift);
}

// changing the value of ith position to val
int update_ith_bit(int n, int i, int val)
{
    // making that ith bit 0
    int onesIthShift = ~(1 << i);
    n = (n & onesIthShift);
    // making that ith bit to val
    int valuesIthShift = (val << i);
    return n = (n | valuesIthShift);
}

int clearLastIBits(int n, int i)
{
    // binary of -1 is...the ~0 means a series of ones like ....11111 and doing i left shift will give ....111110000 if i is 4 and by doing an and operation with n can clear the last i bits
    int ithLeftShift = ((~0) << i);
    n = n & ithLeftShift;
    return n;
}

int clearBitsInRange(int n, int i, int j)
{
    int x = (~0) << (j + 1);
    int y = (1 << i) - 1;
    int xory = (x | y);
    return n = (n & xory);
}

int main()
{
    int n;
    cin >> n;
    cout << evenOdd(n) << "\n";
    int i;
    cin >> i;
    cout << getting_ith_bit(n, i) << "\n";
    cout << clear_ith_bit(n, i) << "\n";
    cout << set_ith_bit(n, i) << "\n";
    int val; // val can be 0 or 1 only
    cin >> val;
    cout << update_ith_bit(n, i, val) << "\n";
    cout << clearLastIBits(n, i) << "\n";
    int j;
    cin >> j;
    cout << clearBitsInRange(n, i, j) << "\n";
}