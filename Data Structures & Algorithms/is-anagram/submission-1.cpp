class Solution {
   public:
    bool isAnagram(string s, string t) {
        //Tc : O(n log n) (average and worst case)
        //sort function usase quick heap and insertion sort combination
        // if (s.size() != t.size()) {
        //     return false;
        // }
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // return s==t;

        //approach 2
        // O(n)
        if(s.size()!= t.size()){ return false; }
        int freq[26] = {0};
        for(char c: s) freq[c - 'a'] ++;
        for(char c: t) {
            if(--freq[c - 'a'] < 0) return false;
        }
        return true;

        
    }
};
