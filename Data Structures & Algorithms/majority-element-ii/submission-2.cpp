class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int n = nums.size();
        vector<int>v;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]] == (n/3 +1 )){
                v.push_back(nums[i]);
            }
        }
     
        return v;
    }
};