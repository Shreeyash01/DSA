class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int moves=0;
        vector<int>::iterator minElement = min_element(nums.begin(), nums.end());
        int minm=*minElement;
        for(int i=0; i<n; i++){
            moves=moves+(nums[i]-minm);
        }
        return moves;
    }
};
