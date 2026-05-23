class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int n = nums.size();
        vector<int>v;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto x: mp){
            if(x.second > n/3){
                v.push_back(x.first);
            }
        }
        return v;
    }
};