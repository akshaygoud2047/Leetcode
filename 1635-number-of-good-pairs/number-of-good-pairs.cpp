class Solution {
public:

    int numIdenticalPairs(vector<int>& nums) {

        map<int,int> hash;
        
        for(int num : nums){
            hash[num]++;
        }

        int pairs = 0;

        for(auto &pair : hash){

            int n = pair.second;

            pairs += (n * (n - 1)) / 2;
        }

        return pairs;
    }
};