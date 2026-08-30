class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //frequency couting + unordered map
        unordered_map<string, vector<string>>mp;
        for(string str : strs){
            //frequency of 26 lowercase letters
            vector<int> count(26,0);
            for(char c: str){
                count[c - 'a']++;
            }
            //Convert frequency array into a string key
            string key;
            for(int i=0; i < 26; i++){
                key += to_string(count[i]) + "#";
            }
            mp[key].push_back(str);
        }

        vector<vector<string>> res;

        for(auto x: mp){
            res.push_back(x.second);
        }
        return res;

        //optimal solution 
        //where N = number of strings and K = maximum string length.
        //TC: O(N*K);
        //SC: O(N*K);

        //We add it so that the frequency array can be converted into an    //unambiguous string key.
        //[1,2,10] ==> "1210";
        //[12,10] ===> "1210";

    }
};
