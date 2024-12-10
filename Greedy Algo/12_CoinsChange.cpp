// https://leetcode.com/problems/coin-change/
int minCoins(vector<int> &coins, int V)
{
    vector<int> ans;
    int n = coins.size();
    sort(coins.begin(), coins.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        while (V >= coins[i])
        {
            V -= coins[i];
            ans.push_back(coins[i]);
        }
        if (V == 0)
            break;
    }
    return ans.size();
}
