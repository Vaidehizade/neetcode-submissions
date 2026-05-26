class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        //[-2,-1,0]
        int missing = 1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] <=0){
                continue;
            }
            if(i >0 && nums[i] == nums[i-1]){
                continue;
            }
            if(nums[i] == missing){
                missing++;
            }
            else if(nums[i] > missing){
                return missing;
            }
        }
        return missing;

    }
};