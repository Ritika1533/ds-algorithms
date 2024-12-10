// https://www.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1
class Solution
{
public:
    bool static comp(Job a, Job b)
    {
        return (a.profit > b.profit);
    }
    vector<int> JobScheduling(Job jobs[], int n)
    {
        sort(jobs, jobs + n, comp);
        int maxiDead = jobs[0].deadline;
        for (int i = 1; i < n; i++)
        {
            if (jobs[i].deadline > maxiDead)
            {
                maxiDead = jobs[i].deadline;
            }
        }
        int slot[maxiDead + 1];
        for (int i = 0; i <= maxiDead; i++)
        {
            slot[i] = -1;
        }
        int count = 0, countProfit = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = jobs[i].deadline; j > 0; j--)
            {
                if (slot[j] == -1)
                {
                    count++;
                    slot[j] = jobs[i].id;
                    countProfit += jobs[i].profit;
                    break;
                }
            }
        }

        return {count, countProfit};
    }
};