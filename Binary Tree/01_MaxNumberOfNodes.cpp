//
class Solution
{
public:
    int power(int x, int y)
    {
        if (y == 0)
            return 1;
        else
            return 2 * power(2, y - 1);
    }
    int countNodes(int i)
    {
        int n = power(2, i - 1);
        return n;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i;
        cin >> i;
        Solution ob;
        int res = ob.countNodes(i);

        cout << res;
        cout << "\n";

        cout << "~" << "\n";
    }
}