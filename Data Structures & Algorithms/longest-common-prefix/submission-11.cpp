class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //O(n* mlogm)
        //O(1) or O(m) depending on sorting algorithm
        if(strs.size() == 1){
            return strs[0];
        }
        sort(strs.begin(),strs.end());
        for(int i=0; i< min(strs[0].length(),strs.back().length()); i++){
            if(strs[0][i] != strs.back()[i]){
                return strs[0].substr(0,i);
            }
        }
        return strs[0];
    }
};