//brute force
class Solution {
public:
    int mySqrt(int x) {
        int i = 0;
        while(i*i <= x && i <= 46340)
            i++;
        return i - 1;
    }
};

//binary search
class Solution {
public:
    int mySqrt(int x) {
       if(x == 0)
           return 0;
        int left = 1, right = x;
        while(left < right)
        {
            int mid = left + (right - left) / 2;
            if(mid <= x / mid && (mid + 1) > x / (mid + 1))
                return mid;
            else if(mid > x / mid)
                right = mid;
            else
                left = mid + 1;
        }
        return right;
    }
};
