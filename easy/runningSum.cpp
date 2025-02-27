class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        if (n < 2)
            return nums;
        for(int i = 1; i < n-1; i++){
            nums[i] = nums[i-1] + nums[i];
        }
        nums[n-1] = nums[n-2] + nums[n-1];
        return nums;
    }
};
