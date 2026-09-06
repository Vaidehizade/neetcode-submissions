class Solution {
public:

    void quicksort(vector<int>&nums, int low, int high){
        if(low >= high) return;
        int pivotIndex = partition(nums,low,high);
        quicksort(nums,low,pivotIndex-1);
        quicksort(nums,pivotIndex+1,high);
    }
    int partition(vector<int> &nums, int low, int high){
        int pivot = nums[high];
        int i = low;

        for(int j=low; j<high; j++){
            if(nums[j] < pivot){
                swap(nums[i], nums[j]);
                i++;
            }
        }
        swap(nums[i],nums[high]);
        return i;
    }
    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums,0,nums.size()-1);
        return nums;
    }
};