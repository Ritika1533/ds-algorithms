//https://leetcode.com/problems/majority-element-ii/description/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int times=n/3;
        vector<int> ans;
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
          if(it.second > times){
            ans.push_back(it.first);
          }
        }
        return ans;
    }
};