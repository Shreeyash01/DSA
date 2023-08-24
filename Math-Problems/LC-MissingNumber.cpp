// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
//         int r;
//         for(int i=0; i<n; i++){
//             if(nums[i]!=i){
//                 r = i;
//                 break;
//             }
//         }
//         return r;
//     }
// };

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        int xorSum = 0;
        for (int i = 0; i < n; ++i) {
            xorSum ^= i;
            xorSum ^= nums[i];
        }
        
        // XOR the remaining index n
        xorSum ^= n;
        
        return xorSum;
    }
};
