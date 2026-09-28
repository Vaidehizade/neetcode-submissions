class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //sort and check
       // TC: O(nlogn)
        //SC: O(1) or O(n);
        sort(nums.begin(),nums.end());

        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};