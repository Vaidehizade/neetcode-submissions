class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //brute force approach 1
        map<int,int>mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        while(k > 0){

            int maxFreq = 0;
            int maxNum = 0;
            
            for(auto x: mp){
                if(x.second > maxFreq){
                    maxFreq = x.second;
                    maxNum = x.first;
                }
            }
            ans.push_back(maxNum);
            mp.erase(maxNum);

            k--;
        }
        return ans;
        //TC : O(K*N);
    }
};
