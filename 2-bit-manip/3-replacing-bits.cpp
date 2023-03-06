// 👉 Problem Statement 👈 //

/*
You are given two 32-bit numbers, N and M, and two bit positions i and j.
Write a method to set all bits between i and j in N equal to M,so that M becomes a substring of N staring at ith position and ending at jth position.

It is made sure that j-i+1 == string size of N

Inputs :
M = 10000100011
N = 10101
i = 2, j = 6

Output : 1001010100
*/

// 👉 Solution as editorial 👈 //

/*
Editorial: First, I can clear the bits ranged from i to j in M....then I can left shit N i times. Finally doing M | (ith times left shifted N that I have just done ) will give the result.

Note: In bits counting starts from right...for example if a binary number is 11010101....then there positions are 👇
position : 7 6 5 4 3 2 1 0
bits     : 1 1 0 1 0 1 0 1
*/
