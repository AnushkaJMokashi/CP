class Solution {
public:
    void findCombinations(int i,int target,vector<int>& candidates,vector<int>& ds,vector<vector<int>>& ans){
        
        if(i == candidates.size()){
            if(target==0){
                ans.push_back(ds);
                return;
            }
            return;
            }
        if(candidates[i]<=target){
            ds.push_back(candidates[i]);
            findCombinations(i,target-candidates[i],candidates,ds,ans);
            ds.pop_back();
        }
        findCombinations(i+1,target,candidates,ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        findCombinations(0,target,candidates,ds,ans);
        return ans;
    }
};