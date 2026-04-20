class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int>arr1(n);
        if(n == 1){
            arr[n-1] = -1;
            return arr;
        }
        int maxi = INT_MIN;
        for(int i=n-2;i>=0;i--){
            maxi = max(maxi,arr[i+1]);
            arr1[i] = maxi;
        }
        arr1[n-1] = -1;
        return arr1;
    }
};