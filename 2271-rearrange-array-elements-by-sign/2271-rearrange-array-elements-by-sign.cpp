class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>nums1;
        vector<int>nums2;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] >= 0){
                nums1.push_back(nums[i]);
            }
            else{
                nums2.push_back(nums[i]);
            }
        }
        int i = 0, j = 0;
        int idx = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(idx % 2 == 0){
                nums[idx] = nums1[i];
                i++;
            }
            else{
                nums[idx] = nums2[j];
                j++;
            }
            idx++;
        }
        while(i < nums1.size()){
            nums[idx] = nums1[i];
            i++;
            idx++;
        }
        while(j < nums2.size()){
            nums[idx] = nums2[j];
            j++;
            idx++;
        }
        return nums;
    }
};