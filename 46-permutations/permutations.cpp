//approach 2
class Solution {
public:
    void find_Permutations(int ind,vector<int>& nums,vector <vector <int>>& ans){
        if(ind == nums.size())
        {
            ans.push_back(nums);
            return;
        }        
        for(int i = ind; i<nums.size(); i++){
            swap(nums[ind],nums[i]);
            find_Permutations(ind+1,nums,ans);
            swap(nums[ind],nums[i]);
        }
    }
         
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector <vector <int>> ans;

        
        find_Permutations(0,nums,ans);
        return ans;
    }
};

//Approach 1
// class Solution {
// public:
//     void find_Permutations(vector <int> &ds,vector <vector <int>> &ans,int freq[],vector<int>& nums){
//         if(nums.size() == ds.size()){
//             ans.push_back(ds);
//             return;
//         }
//         for(int i = 0; i < nums.size() ; i++){
//             if(!freq[i]){
//                 ds.push_back(nums[i]);
//                 freq[i] =1;
//                 find_Permutations(ds,ans,freq,nums);
//                 freq[i] = 0;
//                 ds.pop_back();
//             }  
//         }
        
//     }
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector <int> ds;
//         vector <vector <int>> ans;

//         int freq[nums.size()];
//         for(int i = 0; i<nums.size();i++) freq[i]=0;
//         find_Permutations(ds,ans,freq,nums);
//         return ans;
//     }
// };