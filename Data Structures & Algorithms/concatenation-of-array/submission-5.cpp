class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //APPROACH 1:
        // int n = nums.size();
        // vector<int>res(2*n,0);

        // for(int i=0; i<n; i++){
        //     res[i] = nums[i];
        //     res[i+n] = nums[i];
        // }
        // return res;
        //TC: O(n);
        //SC: O(2*n);

        //APPROACH 02
        vector<int>ans;
        //Since you already know the final size (2 * n), reserve memory first to avoid multiple reallocations.
        ans.reserve(nums.size() * 2);
        for(int i=0; i<2; i++){
            for(int x: nums){
              ans.push_back(x);
            }
        }
        return ans;
        //TC: O(n);
        //SC: O(n);

    }
};