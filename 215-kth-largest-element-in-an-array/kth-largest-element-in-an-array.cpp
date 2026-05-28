class Solution {
public:
    int findKthLargest(vector<int>& n, int k) {
        priority_queue<int>pq(n.begin(),n.end());
        while(k>1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};