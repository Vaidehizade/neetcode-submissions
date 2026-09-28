class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.size() != t.size()) return false;
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       return s == t;
       //TC: o(nlogn) + o(mlogm)
       //SC: o(1) or O(n+m) depending on sorting algorithm
    }
};
