class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        long int sum1 = 0;
        long int sum2 = 0;
        int n = nums.size();

        int peak = -1;

        // Find peak index (where increasing stops)
        for (int i = 0; i < n - 1; i++) {
            if (nums[i+1] < nums[i]) {
                peak = i;
                break;
            }
        }

        // If no break happened → peak is last index
        if (peak == -1) {
            peak = n - 1;
        }

        // Sum from start to peak
        for (int i = 0; i <= peak; i++) {
            sum1 += nums[i];
        }

        // Sum from peak to end
        for (int i = peak; i < n; i++) {
            sum2 += nums[i];
        }

        // Compare
        if (sum1 == sum2) return -1;
        else if (sum1 < sum2) return 1;
        return 0;
    }
};