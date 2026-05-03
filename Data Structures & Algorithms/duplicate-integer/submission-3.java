class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashMap<Integer,Integer> map = new HashMap<>();
        //count frequency
        // for(int i=0; i< nums.length; i++){
        //     map.put(nums[i], map.getOrDefault(nums[i],0)+1);
        // }
        // for(int value: map.values()){
        //     if(value > 1){
        //         return true;
        //     }
        // }
        // loop over array --> nums
        for(int num: nums){
            if(map.containsKey(num)){
                return true; //duplicate found
            }
            map.put(num,1);
        }
        return false;
    }
}