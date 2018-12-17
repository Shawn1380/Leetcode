class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0], res=sum;
        for(int i = 1; i < nums.size(); i++)
        {
            sum = sum > 0 ? sum + nums[i] : nums[i];
            if(sum > res)
                res = sum;
        }
        return res;
    }
};
