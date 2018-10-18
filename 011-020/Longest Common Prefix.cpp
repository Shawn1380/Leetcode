//Horizontal scanning ver.
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        string res = strs[0];
        for(int i = 1 ; i < strs.size() ; i++){
            while(strs[i].find(res, 0) != 0){
                res = res.substr(0, res.size() - 1);
                if(res.empty())
                    return "";
            }
        }
        return res;
    }
};
