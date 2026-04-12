class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        char d = '0' + digit;
        for(int i=0;i<nums.size();i++){
            string s = to_string(nums[i]);
            for(int j=0;j<s.length();j++){
                if(s[j] == d) count++;
            }
        }
        return count;
    }
};