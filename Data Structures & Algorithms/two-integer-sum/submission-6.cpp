class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //approach 01 brute force
        int n = nums.size();
        vector<int>res = nums;
        sort(nums.begin(),nums.end());
        int i=0;
        int j= nums.size()-1;
        while(i<j){
            int diff = nums[i] + nums[j];
          if( diff == target){
            int index1 = -1, index2 = -1;
                 for (int k = 0; k < res.size(); k++) {
                    if (res[k] == nums[i]) {
                        index1 = k;
                        break;
                    }
                }

                // Find second number
                for (int k = 0; k < res.size(); k++) {
                    if (res[k] == nums[j] && k != index1) {
                        index2 = k;
                        break;
                    }
                }
            return {min(index1, index2), max(index1, index2)};
          }
          else if(diff < target){
             i++;
          }
          else{
             j--;
          }
        }
        return {};
        //TC: O(nlogn)+ O(n);
        //SC: O(n)
    }
};
