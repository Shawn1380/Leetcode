// linear search
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= target)
                return i;
        }
        return nums.size();
    }
};

//binary search
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target > nums.back())
            return nums.size();
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
    }
};
