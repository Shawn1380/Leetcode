// C++ solution
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int i = 0;
        for(int j = 1; j < nums.size(); j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

// C solution
int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0)
        return 0;
    
    int i = 0;
    for(int j = 1; j < numsSize; j++)
    {
        if(nums[j] != nums[i])
            nums[++i] = nums[j];
    }
    return i + 1;
}
