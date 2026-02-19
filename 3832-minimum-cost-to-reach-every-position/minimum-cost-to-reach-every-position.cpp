class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();
        vector<int> answer(n);

        int mn = INT_MAX;
        for(int i = 0; i < n; i++){
            mn = min(mn, cost[i]);   // update minimum so far
            answer[i] = mn;          // store result for position i
        }

        return answer;
    }
};
