class Solution {
   public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        int i = low;
        int j = mid + 1;
        vector<int> temp;
        while (i <= mid && j <= high) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        while (j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        // copy back
        for (int p = 0; p < temp.size(); p++) {
            nums[low+p] = temp[p];
        }
    }
    void merge_sort(vector<int> &nums, int left, int right) {
        if (left >= right) {
            return;
        }
        int mid = left + (right - left) / 2;
        merge_sort(nums, left, mid);
        merge_sort(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }
    vector<int> sortArray(vector<int>& nums) {
        // quick sort
        // merge sort
        // O(nlogn)
        merge_sort(nums, 0, nums.size() - 1);
        return nums;
    }
};