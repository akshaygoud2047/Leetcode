class Solution {
public:
    void heapify(int root, vector<int>& nums, int n) {
        int left = 2 * root + 1;
        int right = 2 * root + 2;
        int maxi = root;

        if (left < n && nums[left] > nums[maxi]) {
            maxi = left;
        }

        if (right < n && nums[right] > nums[maxi]) {
            maxi = right;
        }

        if (maxi != root) {
            swap(nums[maxi], nums[root]);
            heapify(maxi, nums, n);
        }
    }

    void heapsort(vector<int>& nums, int n) {
        // Build max heap
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(i, nums, n);
        }

        // Extract elements
        for (int i = n - 1; i > 0; i--) {
            swap(nums[0], nums[i]);
            heapify(0, nums, i);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        heapsort(nums, nums.size());
        return nums;
    }
};