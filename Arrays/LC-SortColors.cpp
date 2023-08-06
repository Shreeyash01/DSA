class Solution {
public:
    int partition(vector<int>& nums, int low, int high){
        int pivot=nums[high];
        int i=low-1;
        for(int j=low; j<=high-1; j++){
            if(nums[j]<pivot){
                i++;
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[i+1],nums[high]);
        return i+1;
    }
    void quicksort(vector<int>& nums,int low,int high){
        if(low<high){
            int pivIndex=partition(nums,low,high);
            quicksort(nums,low,pivIndex-1);
            quicksort(nums,pivIndex+1,high);
        }
    }
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        quicksort(nums,0,n-1);
    }
};
