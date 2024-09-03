// https://www.geeksforgeeks.org/problems/bit-manipulation-1666686020/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bit-manipulation
class Solution
{
public:
    int getBit(int num, int i)
    {
        if ((num & (1 << i - 1)) == 0)
            return 0;
        else
            return 1;
    }
    int setBit(int num, int i)
    {
        return (num | (1 << i - 1));
    }
    int clearBit(int num, int i)
    {
        return (num & ~(1 << i - 1));
    }
    int ToggleBit(int num, int k)
    {
        return (num ^ (1 << k));
    }
    void bitManipulation(int num, int i)
    {
        cout << getBit(num, i) << " ";
        cout << setBit(num, i) << " ";
        cout << clearBit(num, i) << " ";
    }
};
