class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10}, 
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        for (int i = 0; i < s.size() - 1; i++){
            if(roman[s[i]] < roman[s[i+1]])
                num -= roman[s[i]];
            else 
                num += roman[s[i]];
        }

        return num + roman[s[s.size() - 1]];
    }
};
