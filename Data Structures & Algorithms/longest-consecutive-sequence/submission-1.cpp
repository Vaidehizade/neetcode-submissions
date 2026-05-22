class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //brute force
        if (nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        set<int>st;
        //[2,3,4,5,10,20];
        for(int i=0; i<nums.size(); i++){
           st.insert(nums[i]);
        }
        int cnt=1;
        int longest = 1;
        vector<int>tmp(st.begin(),st.end());
        for(int i=0; i<tmp.size()-1; i++){
            if(tmp[i]+1 == tmp[i+1]){
                cnt++;
            }
            else{
            longest = max(longest,cnt);
            cnt=1;
            }
        }
         longest = max(longest, cnt);
        return longest;
    }
};
