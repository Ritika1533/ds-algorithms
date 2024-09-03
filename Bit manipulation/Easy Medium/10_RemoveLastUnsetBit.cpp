// https://www.geeksforgeeks.org/problems/set-the-rightmost-unset-bit4436/1
// Given a non-negative number n . The problem is to set the rightmost unset bit in the binary representation of n.
class Solution
{
public:
    int setUNSETBit(int n)
    {
        return (n | n + 1);
    }
};
// Given a non-negative number n . The problem is to set the rightmost set bit in the binary representation of n.
class Solution
{
public:
    int setSETBit(int n)
    {
        return (n & n - 1);
    }
};