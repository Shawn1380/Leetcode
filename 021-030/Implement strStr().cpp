class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "")
            return 0;
        else if(haystack.find(needle, 0) == string::npos)
            return -1;
        else
            return haystack.find(needle, 0);
    }
};
