class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        if(s.empty())
            return true;
        for(int i =0 ; i < s.size() ; i++){
            char c = s[i];
            if(s1.empty() || c == '(' || c == '{' || c == '[' )
                s1.push(c);
            else{
                char top = s1.top();
                if((c ==')' && top == '(') || (c ==']' && top == '[') || (c =='}' && top == '{'))
                    s1.pop();
                else
                    return false;
            }
        }
        return s1.empty();
    }
};
