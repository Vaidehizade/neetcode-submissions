class Solution {
public:
//prefix length method
    string encode(vector<string>& strs) {
       string input = "";
       for(string x: strs){
          input += to_string(x.size())+ "#" + x;
       }
       return input;
       //encode O(n)
    }

    vector<string> decode(string s) {
       //decode O(n)
        vector<string> ans;// space: O(n)
        int i=0;
      while(i<s.size()){
         int j = s.find('#', i);
         int len = stoi(s.substr(i,j-i));
         //move i to the beginning of actual string
         i = j+1;

         //extract the string
         string temp = s.substr(i,len);
         ans.push_back(temp);
        i = i+ len;
        //move to the next encoded string

      }
        return ans;
    }
};
