class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> orginal;
        for(auto it = nums.begin(); it != nums.end(); it++){
            int element = *it;
            if(find(orginal.begin(), orginal.end(), element) != orginal.end()){
                nums.erase(it);
                it--;
            } else {
                orginal.push_back(*it);
            }
        }
        return nums.size();

        /*
        int count = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums.at(i-1) == nums.at(i)){
                nums.erase(nums.at(i));
                nums.push_back(0);
            }
            else
                count++;
        }
        return count;
        */
    }
};
