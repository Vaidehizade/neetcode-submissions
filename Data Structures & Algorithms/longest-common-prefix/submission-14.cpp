class TrieNode {
    public:
    unordered_map<char,TrieNode*> child;
};

class Trie {
    public:
    TrieNode* root;
    Trie(){
        root = new TrieNode();
    }
    void insert(const string& word){
        TrieNode* node = root;
          for(char c: word){
            if(node->child.find(c) == node->child.end()){
                node->child[c] = new TrieNode();
            }
            node = node->child[c];
          }
    }
    //longest common prefix;
    int lcp(const string &word, int prefixLen){
        TrieNode* node = root;

        int i=0;
        while(i < min((int)word.length(), prefixLen)){
            if(node->child.find(word[i]) == node->child.end()){
                return i;
            }
            node = node->child[word[i]];
            i++;
        }
        return min((int)word.length(), prefixLen);
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1) {
            return strs[0];
        }

        int mini = 0;
        for(int i=1; i< strs.size(); i++){
            if(strs[mini].size() > strs[i].size()){
                mini = i;
            }
        }

        int prefixLen = strs[mini].length();
        Trie trie;
        trie.insert(strs[mini]);
       

       for(int i=0; i<strs.size(); i++){
        prefixLen = trie.lcp(strs[i], prefixLen);
       }
        return strs[0].substr(0,prefixLen);

        //TC: O(n*m)

        //sc: O(n)
        //where n is the length of shortest string nd m is the no of strings
    }
};