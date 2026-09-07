class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
           mp[nums[i]]++;
        }
        // 2. Store {frequency, number}
        vector<pair<int, int>> freq;
        for (auto x : mp) {
            freq.push_back({x.second, x.first});
        }
        // 3. Sort by frequency
        sort(freq.rbegin(), freq.rend());
        // 4. Take first k elements
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};
