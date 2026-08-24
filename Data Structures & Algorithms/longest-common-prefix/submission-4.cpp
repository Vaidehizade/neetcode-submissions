class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for(int i=1; i<strs.size(); i++){
            while(strs[i].find(prefix)!=0){
               prefix.pop_back();
            }
        }
        return prefix;

        //TC: O(n*m)
        // n -> no of strings
        // m -> length of longest string
        //sc: o(1)
    }
};