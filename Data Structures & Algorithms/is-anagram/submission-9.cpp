class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.size() != t.size()) return false;
       unordered_map<char,int>mp;
       for(auto x: s){
        mp[x]++;
       }
       for(auto x2: t){
        mp[x2]--;
       }
    for(auto c: mp){
        if(c.second !=0) return false;
    }
    return true;
    //Sc: O(26) ~~ O(1)
    //TC: O(n+m)
    }
};
