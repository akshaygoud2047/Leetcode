class Solution {
public:
    int minimumPushes(string word) {
        int count = 0;
        unordered_map<char,int>mp;
        int n = word.size();
        for(int i=0;i<n;i++){
            char ch = word[i];
            mp[ch]++;
            
        }
        vector<int>ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        sort(ans.begin(),ans.end(),greater<int>());
        for(int i=0;i<ans.size();i++){
            count+=((i/8)+1)*ans[i];
        }
        return count;
    }
};