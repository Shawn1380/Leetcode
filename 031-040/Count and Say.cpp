class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        string output = "1";
        for(int i = 1; i < n; i++)
        {
            string temp = "";
            for(int j = 0; j < output.size(); j++)
            {
                int count = 1;
                while(output[j] == output[j + 1] && (j + 1) < output.size())
                {
                    count++;
                    j++;
                }
                temp += to_string(count) + output[j];
            }
            output = temp;
        }
        return output;
    }
};
