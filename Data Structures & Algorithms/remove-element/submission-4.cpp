class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        //optimal inplace
        int k=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != val){
               nums[k] = nums[i];
               k++;
            }
        }
        return k;
        //sc: O(1);
        //tC: O(n);

    }
};