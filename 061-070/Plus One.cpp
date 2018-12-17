class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.empty())
        {
            digits.push_back(1);
            return digits;
        }
        digits.back() += 1;
        for(int i = digits.size() - 1; i >= 1 ; i--)
        {
            if(digits[i] == 10)
            {
                digits[i] = 0;
                digits[i - 1] += 1;
            }
        }
        if(digits.front() == 10)
        {
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

//faster version
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; i--)
        {
            if(digits[i] == 9)
            {
                digits[i] = 0;
            }
            else
            {
                digits[i]++;
                return digits;
            }
        }
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};
