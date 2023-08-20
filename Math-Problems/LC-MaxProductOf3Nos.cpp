// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         int p=0;
//         if(n==3){
//             p=nums[0]*nums[1]*nums[2];
//         }else{
//             p=nums[n-1]*nums[n-2]*nums[n-3];
//             vector<int> negatives;
//             int product=0;
//             for(int i=0; i<n; i++){
//                 if(nums[i]<0){
//                     negatives.push_back(nums[i]);
//                 }
//             }
//             if(negatives.size()>=2){
//                 if(nums[n-1]>0){
//                     product=negatives[0]*negatives[1]*nums[n-1];
//                 }else{
//                     product=negatives[0]*negatives[1]*negatives[2];
//                 }
                
//             }
//             if(product>p){
//                 p=product;
//             }
//         }
//         return p;
//     }
// };


class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int p1=nums[n-1] * nums[n-2] * nums[n-3];
        int p2=nums[0] * nums[1] * nums[n-1];
        return max(p1, p2);
    }
};
