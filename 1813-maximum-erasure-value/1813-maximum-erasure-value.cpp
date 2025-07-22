class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums){
        int n=nums.size();
        unordered_set<int> s;
        s.reserve(n);
        int j=0;
        int c=0;
        int m=0;
        for(int i=0; i<n; i++){
            int x = nums[i];
            while(s.count(x)){
                s.erase(nums[j]);
                c -= nums[j];
                j++;
            }
            s.insert(x);
            c += x;
            m=max(m,c);
        }
        return m;
    }
};
