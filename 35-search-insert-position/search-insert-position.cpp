class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == target) return i;
            if(nums[i] > target){
                k = i;
                return k;
            }
                
        }
        return k;
    }
};