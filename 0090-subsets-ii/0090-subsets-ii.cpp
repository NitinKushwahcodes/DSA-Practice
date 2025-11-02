class Solution {
public:
     void arraySubsets(vector<int>arr,vector<int>ans , vector<vector<int>>&allSubsets,int i){
        if(i==arr.size()){
            allSubsets.push_back({ans});
            return;
        }
        ans.push_back(arr[i]);
        arraySubsets(arr,ans,allSubsets,i+1);
        ans.pop_back();
        int idx=i+1;
        while(idx<arr.size() && arr[idx]==arr[idx-1]){
            idx++;
        }
        arraySubsets(arr,ans,allSubsets,idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      vector<int>ans;
      vector<vector<int>>allSubsets;
      arraySubsets(nums,ans,allSubsets,0);
      return allSubsets;
    }
};