// https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest
//  Second Largest-->BRUTE FORCE
class Solution
{
public:
    int print2largest(vector<int> &arr)
    {
        int n = arr.size();
        if (n < 2)
        {
            return -1;
        }
        int slargest = -1;
        sort(arr.begin(), arr.end());
        int largest = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] != largest)
            {
                slargest = arr[i];
                break;
            }
        }
        return slargest;
    }
};

// Second Largest-->BETTER

class Solution
{
public:
    int print2largest(vector<int> &arr)
    {
        int n = arr.size();
        int slargest = -1;
        int largest = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != largest && arr[i] > slargest)
            {
                slargest = arr[i];
            }
        }
        return slargest;
    }
};

// Second Largest-->OPTIMAL
class Solution {
  public:
    int print2largest(vector<int> &arr) {
       int largest=arr[0];
       int slargest=-1;
       for(int i=1;i<arr.size();i++){
           if(arr[i]>largest){
               slargest=largest;
               largest=arr[i];
           }
           else if(arr[i] < largest && arr[i] > slargest){
               slargest=arr[i];
           }
        }
         return slargest;
    }
};