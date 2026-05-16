class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 0);

        for (int j = 0; j < n; j++) {
            int product = 1;
            for (int i = 0; i < n; i++) {
                if (i == j) {
                    continue;
                } else {
                    product *= nums[i];
                }
            }
            output[j] = product;
        }
        return output;
    }
};
