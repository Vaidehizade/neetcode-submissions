class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //         Time: O(n * k log k)
        // (sorting each string)
        // Space: O(n * k)
        // k is maximum length of string
        //act --> act , cat
        unordered_map<string, vector<string>> mp;
        for (string s : strs) {
            string temp = s;
            sort(temp.begin(), temp.end());  // create key
            mp[temp].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
