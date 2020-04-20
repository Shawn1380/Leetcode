// C++ solution
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

// C solution
bool isValid(char * s){
    char stack[1000000];
    int top = -1;
    while(*s)
    {
        if(*s == ')')
        {
            if(top >= 0 && stack[top] == '(')
                top--;
            else
                return false;
        }
        else if(*s == ']')
        {
            if(top >= 0 && stack[top] == '[')
                top--;
            else
                return false;
        }
        else if(*s == '}')
        {
            if(top >= 0 && stack[top] == '{')
                top--;
            else
                return false;
        }
        else
        {
            top++;
            stack[top] = *s;
        }
        s++;
    }
    return top == -1;
}
