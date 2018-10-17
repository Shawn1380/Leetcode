class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        unordered_map<char, int> roman{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C',100}, {'D',500}, {'M',1000}};
        for(int i = 0 ; i < s.length() ; i++){
            if(roman[s[i]] >= roman[s[i+1]] || i == s.length() - 1)
                sum = sum + roman[s[i]];
            else{
                sum = sum + roman[s[i+1]] - roman[s[i]];
                i++;
            }
        }
        return sum;
    }
};
