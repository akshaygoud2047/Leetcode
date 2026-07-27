class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        for(auto num : nums){
            pq.push(num);
        }
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        return (first-1)*(second-1);
    }
};