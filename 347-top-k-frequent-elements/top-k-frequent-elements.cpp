class Compare {
public:
    bool operator()(pair<int,int>& a, pair<int,int>& b) {
        return a.second < b.second;   // Higher frequency comes first
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;

        // Count frequency
        for (int num : nums) {
            mp[num]++;
        }

        // Max Heap based on frequency
        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            Compare
        > pq;

        // Push {number, frequency}
        for (auto it : mp) {
            pq.push({it.first, it.second});
        }

        vector<int> ans;

        // Get top k frequent elements
        while (k--) {
            ans.push_back(pq.top().first);
            pq.pop();
        }

        return ans;
    }
};