class Solution {
public:
    void reverseString(vector<char>& s) {
        //o(N)
        //reverse(s.begin(),s.end());
        //O(n)
        int i=0,j=s.size()-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
};