class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++; // O(nlogn)
        }
        while(k--){
            //o(k*n)
            int maxi = 0;
            int element;
            for(auto x: mp){
                if(x.second > maxi){
                    maxi = x.second;
                    element = x.first;
                }
            }
            ans.push_back(element);
            mp.erase(element);
        }
        return ans;

        //TC: O(n log n + k*n)
    }
};
