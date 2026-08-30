class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        
        HashMap<String, List<String>> mp = new HashMap<>();
        
        for(String st : strs){
           
           int[] count = new int[26];
           for(char c: st.toCharArray()){
              count[c - 'a']++;
           }
           //create unique key
        StringBuilder key = new StringBuilder();
        for(int i=0; i<26; i++){
            key.append(count[i]).append("#");
        }
        String k = key.toString();
        if(!mp.containsKey(k)){
           mp.put(k, new ArrayList<>());
        }
        mp.get(k).add(st);
    }
    return new ArrayList<>(mp.values());
    }
}
