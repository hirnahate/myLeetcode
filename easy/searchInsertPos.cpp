class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        int mid;
        int j = nums.size() - 1;

        // while(i != j)
        while (i <= j){
            // mid = j/2;
            mid = i + (j-i)/2;
            if(target == nums[mid])
                return mid;
            if(target > nums[mid])
                i = mid + 1;
            if(target < nums[mid])
                j = mid - 1;
        }
        // return mid
        return i;
    }
};
