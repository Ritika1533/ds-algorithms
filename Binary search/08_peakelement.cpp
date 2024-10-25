class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;
        if (nums[0] > nums[1]) return 0;
        if (nums[n - 1] > nums[n - 2]) return n - 1;
        
        int low = 1, high = n - 2;
        
        while (low <= high) {
            int mid = (low + high) / 2;
            
            // Check if the middle element is a peak
            if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1]) 
                return mid;
            
            // If the element to the left is greater, then peak must be on the left side
            if (nums[mid - 1] > nums[mid]) 
                high = mid - 1;
            else  // Otherwise, peak must be on the right side
                low = mid + 1;
        }
        
        return -1;  // Fallback case, theoretically should not be reached if input is correct
    }
};
