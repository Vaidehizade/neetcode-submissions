class Solution {
public:
    bool isAnagram(string s, string t) {
        
    //     if(s.size() != t.size()){
    //         return false;
    //     }
    //     map<char,int>mp;
    //     for(char c: s){
    //         mp[c]++;
    //     }
    //     for(char c: t){
    //         mp[c]--;
    //     }

    //    for(auto x:mp){
    //       if(x.second !=0){
    //          return false;
    //       }
    //    } 
    //    return true;   

       //TC: O(n);
       //SC: O(n);
    
    if(s.size() != t.size()) return false;
    int freq[26] = {0};

    for(char c: s){
        freq[ c - 'a']++;
    }

    for(char c: t){
        freq[ c - 'a']--;
    }

    for(int i=0; i<26; i++){
        if(freq[i]!=0)
        return false;
    }
    return true;
    }

    //TC: O(N)
    //SC: O(1)
};
