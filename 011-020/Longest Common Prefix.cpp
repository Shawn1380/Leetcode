//Horizontal scanning version
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

//Devide and conquer version
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        else
            return devide_and_conquer(strs, 0, strs.size() - 1);
    }

    string devide_and_conquer(vector<string>& strs, int left, int right){
        int mid = (left + right) / 2;
        if(left == right)
            return strs[left];
        else{
            string left_LCP = devide_and_conquer(strs, left, mid);
            string right_LCP = devide_and_conquer(strs, mid + 1, right);
            FindLCP(left_LCP, right_LCP);
        }
    }

    string FindLCP(string& left_LCP, string& right_LCP){
        while(right_LCP.find(left_LCP, 0) != 0){
            left_LCP.substr(0, left_LCP.size() - 1);
            if(left_LCP.empty())
                return "";
        }
        return left_LCP;
    }
};
