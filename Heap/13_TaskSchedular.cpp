// https://www.youtube.com/watch?v=rYh-Kkbzsnw --youtube
// https://leetcode.com/problems/task-scheduler/
class Solution
{
public:
    int leastInterval(vector<char> &tasks, int n)
    {
        vector<int> v(26, 0);

        for (auto ch : tasks)
        {
            v[ch - 'A']++;
        }

        priority_queue<int> pq;
        for (int freq : v)
        {
            if (freq > 0)
                pq.push(freq);
        }

        int time = 0;

        while (!pq.empty())
        {
            vector<int> temp;
            for (int i = 0; i <= n; i++)
            {
                if (!pq.empty())
                {
                    temp.push_back(pq.top() - 1);
                    pq.pop();
                }
            }

            for (int freq : temp)
            {
                if (freq > 0)
                    pq.push(freq);
            }
            if (pq.empty())
            {
                time += temp.size();
            }
            else
            {
                time += (n + 1);
            }
        }
        return time;
    }
};