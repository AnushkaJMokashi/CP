class Solution {
public:
    void findCombinations(int i, vector<int>& ds,vector<vector<int>>& ans,int n,int k){
        

            if(ds.size()== k){
                ans.push_back(ds);
                return;
            }

        
        
        for(int ind = i; ind <n+1; ind++){
            ds.push_back(ind);
            findCombinations(ind+1,ds,ans,n,k);
            ds.pop_back();
            
        }
        
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>ds;
        vector<vector<int>>ans;
        
        findCombinations(1,ds,ans,n,k);
        return ans;
    }
};