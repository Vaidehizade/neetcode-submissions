class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //approach 1
        //Horizontal scanning
        string prefix = strs[0];
        for(int i=1; i<strs.size(); i++){
            int j=0;
            while(j < min(prefix.length(),strs[i].length())){
                if(prefix[j] != strs[i][j]) {
                   break;
                }
                j++;
            }
            prefix = prefix.substr(0,j);
        }
        return prefix;
    }
};