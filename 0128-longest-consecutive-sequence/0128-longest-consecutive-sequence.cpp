class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int max_len = 0;

        for (int num : s) {
            if (!s.count(num - 1)) {  // start of sequence
                int curr = num;
                int len = 1;
                while (s.count(curr + 1)) {
                    curr++;
                    len++;
                }
                if (len > max_len) max_len = len;
            }
        }

        return max_len;
    }
};
