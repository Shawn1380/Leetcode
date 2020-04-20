// C++ solution
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

// C solution
int strStr(char * haystack, char * needle){
    if(*needle == '\0')
        return 0;
    int i = 0;
    while(haystack[i])
    {
        if(haystack[i] == *needle)
        {
            int j = i, k = 0;
            while(haystack[j] == needle[k] && haystack[j] && needle[k])
            {
                j++;
                k++;
            }
            if(needle[k] == '\0')
                return i;
            else
                i++;
        }
        else
            i++;
    }
    return -1;
}
