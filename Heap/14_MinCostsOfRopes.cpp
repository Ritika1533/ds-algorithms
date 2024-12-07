// https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
int minCost(vector<int> &arr)
{
    int n = arr.size();
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto it : arr)
    {
        pq.push(it);
    }
    int sum = 0;
    int cost = 0;
    while (n > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        sum = a + b;
        cost = cost + sum;
        pq.push(sum);
        n--;
    }
    return cost;
}