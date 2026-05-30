class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         int n = nums.size();
        
        // Step 1: Place each number in its correct index if possible
        // A number 'x' should be at index 'x - 1'
        for (int i = 0; i < n; ++i) {
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        
        // Step 2: Find the first index where the value is incorrect
        for (int i = 0; i < n; ++i) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }
        
        // Step 3: If all numbers 1 to n are present, the answer is n + 1
        return n + 1;
    }
};