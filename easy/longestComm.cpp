class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longest = "";
        sort(strs.begin(), strs.end());
        int n = size(strs);
        
        string first = strs[0];
        string last = strs[n-1];

        for (int i = 0; i < min(first.size(), last.size()); i++){
            if (first[i] != last[i])
                return longest;
            longest += first[i];
        }

        return longest;
    }
};


