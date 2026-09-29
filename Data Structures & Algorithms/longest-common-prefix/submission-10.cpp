class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        //approach 2
        //Vertical scanning

        //TC: O(N*M)
        //SC: o(1)
        for(int i=0; i<strs[0].size(); i++){
            for(const string &s: strs){
                if(i== s.length() || s[i] != strs[0][i]){
                    return s.substr(0,i);
                }
            }
        }
        return strs[0];
        
    }
};