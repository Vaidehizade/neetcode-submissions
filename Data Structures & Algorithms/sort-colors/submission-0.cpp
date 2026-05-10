class Solution {
public:
void quicksort(vector<int>&nums, int start, int end){
   if(start >=end){
    return;
   }
   int p = partition(nums,start,end);
   quicksort(nums,start,p-1);
   quicksort(nums,p+1,end);
}

int partition(vector<int>&nums, int s, int e){
    int pivot = nums[e];
    int i = s-1;
    for(int j=s; j<e; j++){
        if(nums[j] < pivot){
            i++;
            swap(nums[j],nums[i]);
        }
    }
    swap(nums[i+1],nums[e]);
    return i+1;
}
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        quicksort(nums,0,n-1);
    }
};