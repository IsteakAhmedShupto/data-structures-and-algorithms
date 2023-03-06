// 👉 Problem Statement 👈 //

// Check the number of set bits in a number.

// 👉 Solution as editorial 👈 //

/*
C++ STL : using popcount(number) -> header file "#include<bitset>"

Other approach :
0. declaring count = 0.
1. First doing an and operation with n with 1, if it returns 1 increase count by 1.
2. Then keep doing right shift by 1 each time and do operation no "1." until the number becomes zero.
*/
