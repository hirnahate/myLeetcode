class Solution {
public:
    bool isValid(string s) {
        stack<char> sign;
        map<char, char> mapped  = { {')', '('}, {']', '['}, {'}', '{'}};

        for(char i : s){
            if(mapped.find(i) == mapped.end())
                sign.push(i);
            else if (!sign.empty() && mapped[i] == sign.top())
                sign.pop();
            else
                return false;
        }
        return sign.empty();
    }
};
