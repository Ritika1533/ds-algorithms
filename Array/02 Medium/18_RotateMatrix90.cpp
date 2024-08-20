// https://leetcode.com/problems/rotate-image/
// Rotate Matrix 90 degree-->BRUTE FORCE
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        vector<vector<int>> ans(n, vector<int>(n));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans[j][n - 1 - i] = matrix[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = ans[i][j];
            }
        }
    }
};
// Rotate Matrix 90 degree-->OPTIMAL

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        // transpose
        for (int i = 0; i <= n - 2; i++)
        {
            for (int j = i + 1; j <= n - 1; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};