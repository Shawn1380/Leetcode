//string version
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty())
            return 0;
        int count = 0;
        bool lock = false;
        for(int i = s.length() - 1; i >= 0; i--)
        {
            if(s[i] != ' ')
            {
                count++;
                lock = true;
            }
            else if(s[i] == ' ' && lock == true)
                return count;
        }
        return count;
    }
};

//stringstream version
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        stringstream ss(s);
        string str = "";
        while(ss >> str)
        {
            count = str.size();
        }
        return count;
    }
};
