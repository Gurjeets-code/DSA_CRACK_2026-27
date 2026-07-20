class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
       
        if (n == 1) {
            return nums; 
        }
        
        sort(nums.begin(), nums.end());
        int count = 1;
        
        for (int i = 0; i < n - 1; i++) {
            if (nums[i + 1] == nums[i]) {
                count++;
            } else {
                
                if (count > n / 3) {
                    result.push_back(nums[i]);
                }
                count = 1; 
            }
        }
       
        if (count > n / 3) {
            result.push_back(nums[n - 1]);
        }
        return result; 
    }
};
