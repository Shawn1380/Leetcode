// C++ solution
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

// C solution
int char2value(char c){
    int value = 0;
    switch(c)
    {
        case 'I': 
            value = 1;
            break;
        case 'V': 
            value = 5;
            break;
        case 'X': 
            value = 10;
            break;
        case 'L': 
            value = 50;
            break;
        case 'C': 
            value = 100;
            break;
        case 'D': 
            value = 500;
            break;
        case 'M': 
            value = 1000;
            break;
    }
    return value;
}

int romanToInt(char * s){
    int sum = 0, i = 0;
    while(s[i] != '\0')
    {
        if(char2value(s[i]) >= char2value(s[i + 1]) || s[i + 1] == '\0')
        {
            sum = sum + char2value(s[i]);
            i = i + 1;
        }
        else
        {
            sum = sum - char2value(s[i]) + char2value(s[i + 1]);
            i = i + 2;
        }
    }
    return sum;
}
