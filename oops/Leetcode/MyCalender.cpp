// https://leetcode.com/problems/my-calendar-i/solutions/5834728/codeease/
class MyCalendar
{
private:
    map<int, int> mpp;

public:
    MyCalendar()
    {
    }

    bool book(int start, int end)
    {
        mpp[start]++;
        mpp[end]--;
        int sum = 0;
        for (auto it = mpp.begin(); it != mpp.end(); it++)
        {
            sum = sum + it->second;
            if (sum > 1)
            {
                mpp[start]--;
                mpp[end]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */