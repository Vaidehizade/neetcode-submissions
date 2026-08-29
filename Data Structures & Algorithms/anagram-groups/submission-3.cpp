class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        //brute force approach
        unordered_map<string, vector<string>> mp;
        for(string str: strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(str);
        }
       vector<vector<string>> res;
       for(auto x: mp){
        res.push_back(x.second);
       }
      return res;

      //TC: fr ort --> quikc heap insertion ==> K log K;
      //k is length of longest string
      //Loop n times ==> no of strings
      // Tc: o(N*K log K);
      //SC: O(N*k);
    }
};
