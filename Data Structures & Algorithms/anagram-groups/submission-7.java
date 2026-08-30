class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {

        Map<String,List<String>> mp = new HashMap<>();

        for(String str: strs){

            //convert string to character array
            char[] chars = str.toCharArray();
            //sort characters
            Arrays.sort(chars);

            //sorted string becomes the key
            String key = new String(chars);

            //add original string
            //mp.computeIfAbsent(key, k-> new ArrayList<>()).add(str);
            if(!mp.containsKey(key)){
                mp.put(key, new ArrayList<>());
            }
            mp.get(key).add(str);

        }
        //Give me all the values stored in the HashMap
        return new ArrayList<>(mp.values());

        //TC:O(N*K log K)
        //SC:O(N*k)
    }
}
