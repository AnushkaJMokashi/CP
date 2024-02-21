class Solution {
public:
    void findsubset(int i, vector<int> &ds ,vector<vector<int>>& ans, vector<int> &nums){
        if(i==nums.size()){
            ans.push_back(ds);
            return;
        }
        findsubset(i+1,ds,ans,nums);
        ds.push_back(nums[i]);
        findsubset(i+1,ds,ans,nums);
        ds.pop_back();
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds ;
        vector<vector<int>> ans;
        findsubset(0,ds,ans,nums);
        return ans;
    }
};