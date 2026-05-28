class Solution {
public:
    int lastStoneWeight(vector<int>& s) {

        priority_queue<int> pq(s.begin(), s.end());

        while(pq.size() > 1){

            int fmax = pq.top();
            pq.pop();

            int smax = pq.top();
            pq.pop();

            if(fmax != smax){
                pq.push(fmax - smax);
            }
        }

        return pq.empty() ? 0 : pq.top();
    }
};