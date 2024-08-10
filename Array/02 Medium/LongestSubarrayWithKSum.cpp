// LONGEST SUMARRAY WITH K SUM
// OPTIMAL --> it is for both positive and negative
int lenOfLongSubarr(int A[], int N, int K)
{
    map<int, int> mpp;
    int sum = 0, length = 0, maxlength = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + A[i];
        if (sum == K)
        {
            maxlength = max(maxlength, i + 1);
        }
        int rem = sum - K;
        if (mpp.find(rem) != mpp.end())
        {
            length = i - mpp[rem];
            maxlength = max(maxlength, length);
        }
        if (mpp.find(sum) == mpp.end())
        {
            mpp[sum] = i;
        }
    }
    return maxlength;
}

// BRITE FORCE  -->it is for both positive and negative
int lenOfLongSubarr(int a[], int k)
{
    int maxlength = 0, length = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < a.size(); j++)
        {
            sum = sum + a[j];
            if (sum == k)
            {
                length = j - i + 1;
                maxlength = max(length, maxlength);
            }
        }
    }
    return maxlength
}

// optimal-->it is only optimal for positive and zero