class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int found;
        unordered_set<int> seen;
        for(int num : nums){
            if(seen.find(num)!=seen.end()){
                found = num;
                break;
            }else{
                seen.insert(num);
            }
        }
        return found;
    }
}
